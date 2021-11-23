import rclpy
from rclpy.action import ActionServer
from rclpy.node import Node
import os
import json

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
        result = MOTR.Result()
        file_name = "map_info.txt"
        data = ''
        if not os.path.isfile(file_name):
        	return result
        with open(file_name) as json_file:
        	data = json.load(json_file)
        arr = []
        for i in range(0,len(data['blocks'])):
        	arr.append(data['blocks'][i]['text'])
        print(arr,goal_handle.request.object,goal_handle.request.room)
        createPDDLProblem(arr,goal_handle.request.object,goal_handle.request.room)
        ###### GENERATING PDDL FILE 3.3 ########
        
        
        #result.test = 'goal successfull'
        return result

# Create the PDDL problem file - TODO:: list of all rooms & objects 
def createPDDLProblem(obj_rm,obj,rm):
	f = open("problem.pddl", "w+")
	f.write("(define (problem moveitemtoroom)\n") 
	f.write(" (:domain turtlebot3-domain)\n")
	# Write all objects in room - TODO:: 
	objects = []
	rooms = []
	for i in range(0,len(obj_rm)):
		dummy = obj_rm[i].split(' ')
		objects.append(dummy[1])
		rooms.append(dummy[0])
	
	f.write(" (:objects\n")
	f.write("turtlebot - robot\n")
	f.write("initial-room - room\n")
	for i in rooms:
		f.write("{0} - room\n".format(i))
	for j in objects:
		f.write("{0} - item\n".format(j))
	
	
	f.write(" )\n")	
	# Initialise starting variables 
	f.write(" (:init \n")
	f.write("  (at turtlebot initial-room)\n") 
	f.write("  (hand_empty turtlebot)\n") 
					# TODO:: 
	for k in range(0,len(obj_rm)):
		f.write("  (in {0} {1})\n".format(objects[k],rooms[k]))				
	f.write(" )\n") 
	
	# Set goal 
	f.write(" (:goal \n") 
	f.write(" (in " + obj + " " + rm +")\n") 
	f.write(" )\n") 
	f.write(")")
	f.close() 
	runCommand('')
	
	
# Run the Problem Solver and store into solutions.txt 
def runCommand(cmd): 
	sub = subprocess.Popen("cd ass3/src/FF-X && ./ff -o domain.pddl -f sample-problem.pddl > solutions.txt && cd ../../..", shell=True, stdout=subprocess.PIPE).stdout 
	
	#output, err = sub.communicate() 
	#output = sub.read()
	#print(output)
	# Wait for process to terminate 
	#sub_status = sub.wait() 
	#with open('solutions.txt', 'w+') as f: 
	#	f.write('{0}'.format(str(output))) 
	## .popen(./plan_parser /ass3/src/FF-X/solutions.txt) 
	#### 3.5 ########## Can't do C++
	sub = subprocess.Popen("g++ -o ./parser planner.cpp plan_parser.cpp && ./parser ~/astro_boys_girls_ass2_comp3431/ass3/src/FF-X/solutions.txt > parse.txt", shell=True, stdout=subprocess.PIPE).stdout 
	

def main(args=None):
    rclpy.init(args=args)

    map_action_server = MapActionServer()

    rclpy.spin(map_action_server)


if __name__ == '__main__':
    main()
