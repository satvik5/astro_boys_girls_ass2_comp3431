from __future__ import division
import math
import numpy as np
import warnings
warnings.filterwarnings("ignore")

import rclpy
from std_msgs.msg import String
from tf2_ros import TransformException
from rclpy.node import Node
from sensor_msgs.msg import LaserScan
from geometry_msgs.msg import Point32
from geometry_msgs.msg import TransformStamped
from rosgraph_msgs.msg import Clock

from zbar_ros_interfaces.msg import Symbol 
from visualization_msgs.msg import Marker
from sensor_msgs.msg import CameraInfo
from tf2_ros import TransformException
from tf2_ros import TransformBroadcaster


class Subscriber3431_ass2(Node):
#frame = 'base_link'

    def __init__(self):
        super().__init__('subscriber3431_ass2')
        self.publisher_ = self.create_publisher(Clock, 'topic_qr', 10)
        self.subscription = self.create_subscription(Symbol,'barcode',self.barcode_listener,10)
        self.vis = self.create_publisher(Marker,'vis_marker',0)
        self.br = TransformBroadcaster(self)
        self.subscription  # prevent unused variable warning
        self.subscription_laser = self.create_subscription(LaserScan,'/scan',self.publish_laser,10)
        self.subscription_laser
        self.subscription_timer = self.create_subscription(Clock,'/clock',self.publish_timer,10)
        self.subscription_timer

        self.subscription_matrix = self.create_subscription(CameraInfo,'/camera/camera_info',self.publish_matrix,10)
        self.subscription_matrix
        self.sim_time = Clock()
        self.global_scan = LaserScan()
        self.global_matrix = np.zeros(shape=(3,3))
        self.cam_info = CameraInfo()

        self.barcode_names_pub = self.create_publisher(String, 'barcode_names', 10)
        self.barcode_names = []

    def publish_timer(self,clock):
    	self.sim_time = clock
	
    def publish_laser(self,scan):
    	self.global_scan = scan
    def publish_matrix(self,camera_info):
    	n = camera_info.k
    	self.cam_info = camera_info
    	self.global_matrix = np.array([[n[0],n[1],n[2]],[n[3],n[4],n[5]],[n[6],n[7],n[8]]])

    def barcode_listener(self, bar_code):
        if bar_code.data not in self.barcode_names:
            self.barcode_names.append(bar_code.data)
            self.get_logger().info(f"Deteced new barcode: {bar_code.data}")
            self.get_logger().info(f"Current barcodes found: {self.barcode_names}")
            msg = String()
            msg.data = bar_code.data
            self.barcode_names_pub.publish(msg)
        left = min(bar_code.points[0].x,bar_code.points[1].x,bar_code.points[2].x,bar_code.points[3].x)
        right = max(bar_code.points[0].x,bar_code.points[1].x,bar_code.points[2].x,bar_code.points[3].x)
        theta_c = 61.24
        theta_l = ((left/640.0 * theta_c) - theta_c/2) * -1 # index 4
        theta_r = ((right/640.0 * theta_c) - theta_c/2) * -1 # index 355
        # self.get_logger().info("{0} {1}".format(left,right))
        # self.get_logger().info("{0} {1}".format(theta_l,theta_r))
        average = 0.0
        if (theta_r > 0.0):
               filt = list(filter(lambda x: x != float('inf'), self.global_scan.ranges[int(abs(theta_r))+1:int(abs(theta_l))+1]))
               summer = sum(filt)
               length = len(filt)
               if summer != 0:
                      average = summer/length

        elif (theta_l<0.0):
               filt = list(filter(lambda x: x != float('inf'), self.global_scan.ranges[359-int(abs(theta_r))+1:359-int(abs(theta_l))+1]))
               summer = sum(filt)
               length = len(filt)
               if summer != 0:
                      average = summer/length

        else:
               filt1 = list(filter(lambda x: x != float('inf'), self.global_scan.ranges[0:int(abs(theta_l))+1]))
               filt2 = list(filter(lambda x: x != float('inf'), self.global_scan.ranges[359 - int(abs(theta_r))+1:359]))
               summer = sum(filt1)+sum(filt2)
               length = len(filt1)+len(filt2)
               if summer != 0:
                      average = summer/length
        
        # self.get_logger().info("average {0}".format(average))
        
        t = TransformStamped()
        t.header.stamp = self.get_clock().now().to_msg()
        theta_avg = (theta_l+theta_r)/2
        t.header.stamp = self.sim_time.clock
        t.header.frame_id = 'base_scan'
        t.child_frame_id = 'qr_offset'
        t.transform.translation.x = average*math.cos(theta_avg*math.pi/180)
        t.transform.translation.y = average*math.sin(theta_avg*math.pi/180)
        t.transform.translation.z = 0.1
        t.transform.rotation.x = 0.0
        t.transform.rotation.y = 0.0
        t.transform.rotation.z = 0.0
        t.transform.rotation.w = 1.0
        self.br.sendTransform(t)
        self.publisher_.publish(self.sim_time)

        


	

def main(args=None):
    rclpy.init(args=args)

    subscriber3431_ass2 = Subscriber3431_ass2()

    rclpy.spin(subscriber3431_ass2)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    subscriber3431_ass2.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
