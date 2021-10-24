import rclpy
from rclpy.node import Node
from tf2_ros import TransformException
from tf2_ros.buffer import Buffer
from tf2_ros.transform_listener import TransformListener
from sensor_msgs.msg import LaserScan

import rclpy

from geometry_msgs.msg import Point32
from sensor_msgs.msg import LaserScan


class Publisher3431_ass2(Node):

    def __init__(self):
    
        super().__init__('publisher3431_ass2')
        self.publisher_laser = self.create_publisher(LaserScan, 'scan_info', 10)
        self.subscription_laser = self.create_subscription(LaserScan,'/scan',self.publish_laser,10)
        self.subscription_laser

    def publish_laser(self,scan):
        scanner = scan
        #now = rclpy.time.Time()
        #trans = self.tf_buffer.lookup_transform('map','base_link',now)
        ### TESTER
        #trans1 = self.tf_buffer.lookup_transform('base_link','map',now)
        #point = Point32()
        #point.x = trans.transform.translation.x
        #point.y = trans.transform.translation.y
        #point.z = trans.transform.translation.z
        
        self.publisher_laser.publish(scanner)
        self.get_logger().info("Publishing: scanned msg {0}".format(scanner) )


def main(args=None):
    rclpy.init(args=args)
    global scanner

    #self.get_logger('Publishing point')

    publisher3431_ass2 = Publisher3431_ass2()

    rclpy.spin(publisher3431_ass2)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    publisher3431_ass2.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
