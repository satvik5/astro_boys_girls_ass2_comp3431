import rclpy
from rclpy.node import Node

from math import dist, sqrt
from geometry_msgs.msg import Point32

from time import sleep
from std_msgs.msg import String
from visualization_msgs.msg import Marker
from tf2_ros import TransformException, ExtrapolationException
from tf2_ros.buffer import Buffer
from tf2_ros.transform_listener import TransformListener
from geometry_msgs.msg import TransformStamped
from rosgraph_msgs.msg import Clock

from rclpy.duration import Duration


class Subscriber3431(Node):
#frame = 'base_link'

    def __init__(self):
        super().__init__('subscriber3431')
        self.subscription = self.create_subscription(Clock,'topic_qr',self.point_listener,10)
        self.barcode_sub = self.create_subscription(String,'barcode_names',self.barcode_listener,10)
        self.cmd_sub = self.create_subscription(String,'cmd',self.cmd_listener,10)
        self.publisher = self.create_publisher(Marker,'vis_marker',0)
        self.tf_buffer = Buffer()
        self._id = 0
        self.tf_listener = TransformListener(self.tf_buffer, self)

        self.barcode_names = []
        self.barcode_locations = []

    def barcode_listener(self, name):
        self.barcode_names.append(name)

    def cmd_listener(self, command):
        if command.data == 'stop':
            print('Publishing the collected data to the mapper service...')
            

    def point_listener(self, clock):
        now = rclpy.time.Time()
        #self.get_logger().info('{0}'.format(now))
        try:
            trans = self.tf_buffer.lookup_transform('map','qr_offset', now) #,timeout=Duration(seconds=10.0)
        except (TransformException) as ex:
            self.get_logger().info(f'{ex}')
            # sleep(0.1)
            return


        #self.get_logger().info('I m here after catching exceptions')
        point = Point32()
        point.x = trans.transform.translation.x
        point.y = trans.transform.translation.y
        point.z = trans.transform.translation.z

        if len(self.barcode_locations) + 1 == len(self.barcode_names):
            self.barcode_locations.append(point)
        if len(self.barcode_locations) == 0:
            # print("EMPTY")
            return
        # print(self.barcode_locations)
        # print(point)
        dist_list = [sqrt((p.x - point.x)**2 + (p.y - point.y)**2) for p in self.barcode_locations]
        list_min = dist_list.index(min(dist_list))
        # print(dist_list)
        # print(list_min)
        self.barcode_locations[list_min].x = (self.barcode_locations[list_min].x  + point.x)/2
        self.barcode_locations[list_min].y = (self.barcode_locations[list_min].y + point.y)/2
        # for p in self.barcode_locations:
        #     if sqrt((p.x - point.x)**2 + (p.y - point.y)**2) < 5.0:
        #         p.x = (p.x + point.x)/2
        #         p.y = (p.x + point.y)/2
        #         found_match = True
        
        print("Detected Codes:")
        for i in range(len(self.barcode_locations)):
            self.get_logger().info(f'\t{self.barcode_names[i]} = {self.barcode_locations[i]}')

        #self.get_logger().info("Points to be visualized are: {0},{1},{2}".format(point.x,point.y,point.z))
        marker = Marker()
        marker.header.frame_id = 'map' #'map'
        marker.header.stamp = clock.clock
        marker.ns = "basic_shapes_ass2"
        marker.id = 0
        #self._id +=1
        marker.type = 1
        marker.pose.position.x = point.x
        marker.pose.position.y = point.y
        marker.pose.position.z = 0.06  ### height of scanner from ground
        marker.pose.orientation.x = 0.0
        marker.pose.orientation.y = 0.0
        marker.pose.orientation.z = 0.0
        marker.pose.orientation.w = 1.0
        marker.scale.x = 0.1
        marker.scale.y = 0.1
        marker.scale.z = 0.1
        marker.color.r = 0.0
        marker.color.g = 1.0
        marker.color.b = 0.0
        marker.color.a = 1.0
        self.publisher.publish(marker)
        self.get_logger().info(marker.ns)

	

def main(args=None):
    rclpy.init(args=args)

    subscriber3431 = Subscriber3431()

    rclpy.spin(subscriber3431)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    subscriber3431.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
