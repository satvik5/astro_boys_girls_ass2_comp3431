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
#frame = 'base_link'

    def __init__(self):
        super().__init__('subscriber3431_ass2')
        self.publisher_ = self.create_publisher(Clock, 'topic_qr', 10)
        self.subscription = self.create_subscription(
            Symbol,
            'barcode',
            self.barcode_listener,
            10)
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
        

    def publish_timer(self,clock):
    	self.sim_time = clock
	
    def publish_laser(self,scan):
    	self.global_scan = scan
    	#self.get_logger().info("{0}".format(self.global_scan))
    def publish_matrix(self,camera_info):
    	n = camera_info.k
    	self.cam_info = camera_info
    	#self.get_logger().info("matrix {0},".format(camera_info))    	
    	self.global_matrix = np.array([[n[0],n[1],n[2]],[n[3],n[4],n[5]],[n[6],n[7],n[8]]])
    	#self.get_logger().info("{0}".format(self.cam_info))

    def barcode_listener(self, bar_code):
        left = min(bar_code.points[0].x,bar_code.points[1].x,bar_code.points[2].x,bar_code.points[3].x)
        right = max(bar_code.points[0].x,bar_code.points[1].x,bar_code.points[2].x,bar_code.points[3].x)
        theta_c = 61.24
        theta_l = ((left/640.0 * theta_c) - theta_c/2) * -1 # index 4
        theta_r = ((right/640.0 * theta_c) - theta_c/2) * -1 # index 355
        self.get_logger().info("{0} {1}".format(left,right))
        self.get_logger().info("{0} {1}".format(theta_l,theta_r))
        average = 0.0
        if (theta_r > 0.0):
               filt = list(filter(lambda x: x != float('inf'), self.global_scan.ranges[int(abs(theta_r))+1:int(abs(theta_l))+1]))
               summer = sum(filt)
               length = len(filt)
               #self.get_logger().info("{0} {1}".format(length,summer))
               if summer != 0:
                      average = summer/length

               #self.get_logger().info("{0} {1} {2}".format(self.global_scan.ranges[int(abs(theta_l))],self.global_scan.ranges[int(abs(theta_l)+1)],average))
        elif (theta_l<0.0):
               filt = list(filter(lambda x: x != float('inf'), self.global_scan.ranges[359-int(abs(theta_r))+1:359-int(abs(theta_l))+1]))
               summer = sum(filt)
               length = len(filt)
               #self.get_logger().info("{0} {1}".format(length,summer))
               if summer != 0:
                      average = summer/length

        else:
               filt1 = list(filter(lambda x: x != float('inf'), self.global_scan.ranges[0:int(abs(theta_l))+1]))
               filt2 = list(filter(lambda x: x != float('inf'), self.global_scan.ranges[359 - int(abs(theta_r))+1:359]))
               summer = sum(filt1)+sum(filt2)
               length = len(filt1)+len(filt2)
               #self.get_logger().info("{0} {1}".format(length,summer))
               if summer != 0:
                      average = summer/length
        
        self.get_logger().info("average {0}".format(average))
        
        
        ## 360 points only theta_c and -theta_c
        ################  METHOD 2
        #for i in range(-32,33):
        #
        #       if self.global_scan.ranges[i] == float("inf"):
        #              continue;
        #       thetha = i*0.01749303564429283
        #       constant = 1.0
        #       if (i*0.01749303564429283 > (3*math.pi)/2):
        #              thetha = (2*math.pi)-(i*0.01749303564429283)
        #              constant = -1.0
        #       x_offset = self.global_scan.ranges[i]*math.cos(thetha)
        #       y_offset = constant*self.global_scan.ranges[i]*math.sin(thetha)
        #       z_offset = 0.005
        #      p = np.reshape(self.cam_info.p,(3,4))
               
        #       arr = np.array([x_offset,y_offset,z_offset,1])
        #       res = np.matmul(p,arr.T)
        #       # res = [u v 1]
        #       if (abs(centre[0]-res[0])<min_dist):
        #              min_dist =abs(centre[0]-res[0])
        #              angle = i*0.01749303564429283
        #              qr_range = self.global_scan.ranges[i]
        #              tester = res
        #              tester2 = arr
        #              index= i
                      

               

        #self.get_logger().info("min_dist {0} angle {1} qr_range {2} tester {3} tester2 {4} centre {5} index {6}".format(min_dist,angle,qr_range,tester,tester2,centre,index))
        #theta_avg = (theta_l+theta_r)/2
        #marker = Marker()
        #marker.header.frame_id = 'base_scan' #'map'
        #marker.header.stamp = self.get_clock().now().to_msg()
        #marker.ns = "basic_shapes_ass2"
        #marker.id = 0
        #marker.pose.position.x = average*math.cos(theta_avg*math.pi/180)
        #marker.pose.position.y = average*math.sin(theta_avg*math.pi/180)
        #marker.pose.position.z = 0.1
        #marker.pose.orientation.x = 0.0
        #marker.pose.orientation.y = 0.0
        #marker.pose.orientation.z = 0.0
        #marker.pose.orientation.w = 1.0
        #marker.scale.x = 0.1
        #marker.scale.y = 0.1
        #marker.scale.z = 0.1
        #marker.color.r = 0.0
        #marker.color.g = 1.0
        #marker.color.b = 0.0
        #marker.color.a = 1.0
        #self.vis.publish(marker)
        #self.get_logger().info('{0} {1}'.format(self.sim_time.clock,self.get_clock().now().to_msg()))

        t = TransformStamped()
        #t.header.stamp = self.get_clock().now().to_msg()
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
        
        
        # in your publisher
        #br.lookup_transform('map','qr_offset')

	

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
