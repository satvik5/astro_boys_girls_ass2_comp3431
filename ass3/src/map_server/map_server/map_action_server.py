import rclpy
from rclpy.action import ActionServer
from rclpy.node import Node
import os
import json
from rclpy.action import ActionClient

from comp3431_interfaces.action import MoveObjectToRoom as MOTR
from nav2_msgs.action import NavigateToPose as NTP
from geometry_msgs.msg import PoseStamped
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
		self._action_client = ActionClient(self, NTP, '/navigate_to_pose')
		self._json = ''

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
			self._json = data
		arr = []
		for i in range(0,len(data['blocks'])):
			arr.append(data['blocks'][i]['text'])
		print(arr,goal_handle.request.object,goal_handle.request.room)
		self.createPDDLProblem(arr,goal_handle.request.object,goal_handle.request.room)
		###### GENERATING PDDL FILE 3.3 ########
		return result

	def createPDDLProblem(self,obj_rm,obj,rm):
		f = open("ass3/src/FF-X/problem.pddl", "w+")
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
		self.runCommand('')

	def runCommand(self,cmd): 
		sub = subprocess.Popen("cd ass3/src/FF-X && ./ff -o domain.pddl -f problem.pddl > solutions.txt && cd ../../..", shell=True, stdout=subprocess.PIPE).stdout 
		sub = subprocess.Popen("g++ -o ./parser planner.cpp plan_parser.cpp && ./parser ~/astro_boys_girls_ass2_comp3431/ass3/src/FF-X/solutions.txt > parse.txt", shell=True, stdout=subprocess.PIPE).stdout 
		self.executePlanner()

	def executePlanner(self,args=None):
		file_name = "parse.txt"
		lines = []
		with open(file_name) as _file:
			lines = _file.readlines()
		ntp = NTP.Goal()
		pose = PoseStamped()
		pose.position.x = -2.0
		pose.position.y = 1.0
		pose.position.z = 0.0
		pose.orientation.x = -2.0
		pose.position.y = 1.0
		pose.position.z = 0.0
		pose.position.z = 0.0
		
		ntp.current_pose.pose.position.x = -2.0
		ntp.current_pose.pose.position.y = 1.0
		ntp.current_pose.pose.position.z = 0.0
		self._action_client.send_goal(pose)
		#count = 0
		#for line in lines[1:-1]:
		#	count += 1
		#	print(f'line {count}: {line}')
		#print(self._json)	

def main(args=None):
	rclpy.init(args=args)
	map_action_server = MapActionServer()
	rclpy.spin(map_action_server)


if __name__ == '__main__':
	main()
