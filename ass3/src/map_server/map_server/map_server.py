from comp3431_interfaces.srv import MapInfo
from geometry_msgs.msg import TransformStamped
import os
import subprocess
#from geometry_msgs/

import rclpy
from rclpy.node import Node


class MapService(Node):

    def __init__(self):
        super().__init__('map_service')
        self.srv = self.create_service(MapInfo, '/set_map_info', self.set_map_info_callback)
        self.declare_parameter('map_info', 'empty')

    def set_map_info_callback(self, req, res):
    	
        self.get_logger().info('Incoming request\na: {0}'.format(req.blocks[0].text))
        file_name = 'map_info.txt'
        f = open(file_name, 'w+')  # open file in append mode
        f.write('{0}'.format(req.blocks))
        f.close()
        map_info = '{0}'.format(req.blocks)
        my_new_param = rclpy.parameter.Parameter('map_info',rclpy.Parameter.Type.STRING,map_info)
        all_new_parameters = [my_new_param]
        self.set_parameters(all_new_parameters)
        
        ##  nodes are service and action service
        return res


def main(args=None):
    rclpy.init(args=args)

    map_service = MapService()

    rclpy.spin(map_service)

    rclpy.shutdown()


if __name__ == '__main__':
    main()
