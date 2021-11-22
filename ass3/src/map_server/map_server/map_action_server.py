import rclpy
from rclpy.action import ActionServer
from rclpy.node import Node

from comp3431_interfaces.action import MoveObjectToRoom as MOTR
# for function runCommand
import subprocess 

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

# Create the PDDL problem file - TODO:: list of all rooms & objects 
def createPDDLProblem(object_, room_):
	f = open("problem.pddl", "w")
	f.write("(define (problem moveitemtoroom)") 
	f.write(" (:domain turtlebot3-domain)")  
	# Write all objects in room - TODO:: 
	f.write(" (:objects")
	
	f.write(" )")
	
	# Initialise starting variables 
	f.write(" (:init ") 
	f.write("  (at turtlebot intial-room)") 
	f.write("  (hand_empty turtlebot)") 
					# TODO:: 
	f.write(" )") 
	
	# Set goal 
	f.write(" (:goal ") 
	f.write(" (in " + object_ + " " + room_) 
	f.write(" )") 
	f.close() 
	
	
# Run the Problem Solver and store into solutions.txt 
def runCommand(cmd): 
	sub = subprocess.Popen("./ff -o domain.pddl -f sample-problem.pddl", shell=True, stdout=subprocess.PIPE) 
	output, err = sub.communicate() 
	# Wait for process to terminate 
	sub_status = sub.wait() 
	with open('solutions.txt', 'w') as f: 
		f.write(output) 
	

def main(args=None):
    rclpy.init(args=args)

    map_action_server = MapActionServer()

    rclpy.spin(map_action_server)


if __name__ == '__main__':
    main()
