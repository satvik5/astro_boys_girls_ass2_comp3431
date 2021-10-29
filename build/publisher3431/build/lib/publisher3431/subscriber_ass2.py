from __future__ import division
import math
import numpy as np
import warnings
warnings.filterwarnings("ignore")

import rclpy
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

    def __init__(self):
        super().__init__('subscriber3431_ass2')
        self.publisher_ = self.create_publisher(Clock, 'topic_qr', 10)
        self.subscription = self.create_subscription(Symbol, 'barcode', self.barcode_listener, 10)
        self.br = TransformBroadcaster(self)
        self.subscription_laser = self.create_subscription(LaserScan, '/scan', self.publish_laser,10)
        self.subscription_timer = self.create_subscription(Clock, '/clock', self.publish_timer,10)
        self.subscription_matrix = self.create_subscription(CameraInfo, '/camera/camera_info', self.publish_matrix,10)

        self.sim_time = Clock()
        self.global_scan = LaserScan()
        self.global_matrix = np.zeros(shape=(3,3))
        self.cam_info = CameraInfo()

    def publish_timer(self,clock):
    	self.sim_time = clock
	
    def publish_laser(self,scan):
    	self.global_scan = scan

    def publish_matrix(self,camera_info):
    	n = camera_info.k
    	self.cam_info = camera_info
    	self.global_matrix = np.array([[n[0],n[1],n[2]],[n[3],n[4],n[5]],[n[6],n[7],n[8]]])

    def barcode_listener(self, bar_code):
        self.get_logger().info("Detected new QR code:")
        # Get the bounding box of the QR code (x only) in the image
        x_points = [i.x for i in bar_code.points]
        left = min(x_points)
        right = max(x_points)
        self.get_logger().info(f"QR Boundary: {left}px {right}px")

        # Use calculated camera view angle to transform to angle domain
        # Focal length of camera 540.8
        # Dismension 640x480px 
        theta_c = 61.24 # Calclated camera angle
        theta_l = ((left/640.0 * theta_c) - theta_c/2) * -1
        theta_r = ((right/640.0 * theta_c) - theta_c/2) * -1
        self.get_logger().info(f"Angle Boundary: {round(theta_l,3)}° {round(theta_r,3)}°")

        # Find the range of the QR code from the bot
        if (theta_r > 0.0):
            filt = list(filter(lambda x: x != float('inf'), self.global_scan.ranges[int(abs(theta_r))+1:int(abs(theta_l))+1]))
        elif (theta_l < 0.0):
            filt = list(filter(lambda x: x != float('inf'), self.global_scan.ranges[359-int(abs(theta_r))+1:359-int(abs(theta_l))+1]))
        else:
            filt1 = list(filter(lambda x: x != float('inf'), self.global_scan.ranges[0:int(abs(theta_l))+1]))
            filt2 = list(filter(lambda x: x != float('inf'), self.global_scan.ranges[359 - int(abs(theta_r))+1:359]))
            filt = filt1 + filt2
        
        if not filt:
            self.get_logger().info("QR Scan is empty, stopping publish...")
            return
        average = sum(filt)/len(filt)
        self.get_logger().info(f"Range: {round(average,3)}m")

        # Publish the transformed marker to the map
        t = TransformStamped()
        theta_avg = (theta_l+theta_r)/2
        t.header.stamp = self.sim_time.clock
        t.header.frame_id = 'base_scan'
        t.child_frame_id = 'qr_offset'
        t.transform.translation.x = average*math.cos(theta_avg*math.pi/180)
        t.transform.translation.y = average*math.sin(theta_avg*math.pi/180)
        t.transform.translation.z = -0.06
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
    subscriber3431_ass2.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
