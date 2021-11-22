import rclpy
from rclpy.action import ActionServer
from rclpy.node import Node

from comp3431_interfaces.action import MoveObjectToRoom as MOTR


class MapActionServer(Node):

    def __init__(self):
        super().__init__('map_action_server')
        self._action_server = ActionServer(
            self,
            MOTR,
            '/move_object_to_room',
            self.execute_callback)

    def execute_callback(self, goal_handle):
        self.get_logger().info('Executing goal for {0} to {1}...'.format(goal_handle.request.object,goal_handle.request.room))
        goal_handle.succeed()
        f=open("map_info.txt", "r")
        contents = ''
        if f.mode == 'r':
                contents =f.read()
                self.get_logger().info('{0}'.format(contents))

        ###### GENERATING PDDL FILE 3.3 ########
        result = MOTR.Result()
        #result.test = 'goal successfull'
        return result


def main(args=None):
    rclpy.init(args=args)

    map_action_server = MapActionServer()

    rclpy.spin(map_action_server)


if __name__ == '__main__':
    main()
