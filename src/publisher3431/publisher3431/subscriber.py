import rclpy
from rclpy.node import Node

from geometry_msgs.msg import Point32

from visualization_msgs.msg import Marker
from tf2_ros import TransformException
from tf2_ros.buffer import Buffer
from tf2_ros.transform_listener import TransformListener
from geometry_msgs.msg import TransformStamped
from rosgraph_msgs.msg import Clock

from rclpy.duration import Duration

class Subscriber3431(Node):

    def __init__(self):
        super().__init__('subscriber3431')
        self.get_logger().info('Starting the point transform, waiting for QR code to be detected...')
        self.subscription = self.create_subscription(Clock, 'topic_qr', self.point_listener, 10)
        self.publisher = self.create_publisher(Marker,'vis_marker',0)
        self.tf_buffer = Buffer()
        self.tf_listener = TransformListener(self.tf_buffer, self)

    def point_listener(self, clock):
        try:
            trans = self.tf_buffer.lookup_transform('map','qr_offset',clock.clock) #,timeout=Duration(seconds=10.0)
        except TransformException as ex:
            self.get_logger().info(f'Could not transform qr_offset to map: {ex}')
            return

        point = Point32()
        point.x = trans.transform.translation.x
        point.y = trans.transform.translation.y
        point.z = trans.transform.translation.z

        marker = Marker()
        marker.header.frame_id = 'map'
        marker.header.stamp = clock.clock
        marker.ns = "basic_shapes_ass2"
        marker.id = 0
        marker.type = 1 # Publish as a cube
        marker.pose.position.x = point.x
        marker.pose.position.y = point.y
        marker.pose.position.z = 0.05
        marker.pose.orientation.x = 0.0
        marker.pose.orientation.y = 0.0
        marker.pose.orientation.z = 0.0
        marker.pose.orientation.w = 1.0
        marker.scale.x = 0.1
        marker.scale.y = 0.1
        marker.scale.z = 0.1
        marker.color.r = 1.0
        marker.color.g = 1.0
        marker.color.b = 1.0
        marker.color.a = 1.0
        self.publisher.publish(marker)
        self.get_logger().info(marker.ns)

	

def main(args=None):
    rclpy.init(args=args)
    subscriber3431 = Subscriber3431()

    rclpy.spin(subscriber3431)
    subscriber3431.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
