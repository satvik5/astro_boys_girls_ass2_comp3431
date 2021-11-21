from comp3431_interfaces.srv import MapInfo
from geometry_msgs.msg import TransformStamped

#from geometry_msgs/

import rclpy
from rclpy.node import Node


class MapService(Node):

    def __init__(self):
        super().__init__('map_service')
        self.srv = self.create_service(MapInfo, '/set_map_info', self.set_map_info_callback)

    def set_map_info_callback(self, req, res):
        self.get_logger().info('Incoming request\na: {0} '.format(req.blocks))
        return res


def main(args=None):
    rclpy.init(args=args)

    map_service = MapService()

    rclpy.spin(map_service)

    rclpy.shutdown()


if __name__ == '__main__':
    main()
