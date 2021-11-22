import rclpy
from rclpy.node import Node
from tf2_ros import TransformException
from tf2_ros.buffer import Buffer
from tf2_ros.transform_listener import TransformListener
from sensor_msgs.msg import LaserScan
from geometry_msgs.msg import TransformStamped

import rclpy

from geometry_msgs.msg import Point32

class Publisher3431(Node):

    def __init__(self):
    
        super().__init__('publisher3431')
        self.publisher_ = self.create_publisher(Point32, 'topic', 10)
        self.tf_buffer = Buffer()
        self.tf_listener = TransformListener(self.tf_buffer, self)
        self.subscription = self.create_subscription(TransformStamped,'topic_qr',self.create_point,10)
 
    def create_point(self,ts):
        now = rclpy.time.Time()
        trans = self.tf_buffer.lookup_transform('map','qr_offset',now)
        point = Point32()
        point.x = trans.transform.translation.x
        point.y = trans.transform.translation.y
        point.z = trans.transform.translation.z
        self.publisher_.publish(point)
        #self.get_logger().info("Publishing: some point {0} {1}".format(trans,trans1) )


def main(args=None):
    rclpy.init(args=args)
    #self.get_logger('Publishing point')

    publisher3431 = Publisher3431()

    rclpy.spin(publisher3431)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    publisher3431.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
