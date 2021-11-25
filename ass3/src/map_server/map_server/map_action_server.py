import rclpy
from rclpy.action import ActionServer
from rclpy.node import Node
import os
import json
from rclpy.action import ActionClient

from comp3431_interfaces.action import MoveObjectToRoom as MOTR
from nav2_msgs.action import NavigateToPose as NTP
from geometry_msgs.msg import PoseStamped
from rosgraph_msgs.msg import Clock

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
		self.subscription_timer = self.create_subscription(Clock,'/clock',self.publish_timer,10)
		self.sim_time = Clock()
	
	def publish_timer(self,clock):
		self.sim_time = clock


	def execute_callback(self, goal_handle):
		self.get_logger().info('Executing goal for {0} to {1}...'.format(goal_handle.request.object,goal_handle.request.room))
		
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
		goal_handle.succeed()
		return result

	def createPDDLProblem(self,obj_rm,obj,rm):
		f = open("ass3/src/FF-X/problem.pddl", "w+")
		f.write("(define (problem moveitemtoroom)\n") 
		f.write(" (:domain turtlebot3-domain)\n")
		# Write all objects in room - TODO:: 
		objects = []
		obj_ass = []	
		rooms = []
		for i in range(len(obj_rm)):
			print(obj_rm[i])
			dummy = obj_rm[i].split(' ')
			rooms.append(dummy[0])
			for i in range(len(dummy) - 1):
				obj_ass.append([dummy[0],dummy[i+1]])
				objects.append(dummy[i+1])

		print(objects)
		print(obj_ass)
		print(rooms)

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
		f.write("  (at turtlebot initial-room)\n") 
		f.write("  (hand_empty turtlebot)\n") 
						# TODO:: 
		for k in range(0,len(obj_ass)):
			dumb = obj_ass[k]
			f.write(' (in {0} {1})\n'.format(dumb[1],dumb[0]))		
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
		count = 0
		for line in lines[1:-1]:
			count += 1
			print(f'step {count}: {line}')
			line = line.split(' ')
			if line[0]== 'move':
				for i in range(len(self._json['blocks'])):
					if line[3] in self._json['blocks'][i]['text']:
						ntp = NTP.Goal()
						pose = PoseStamped()
						print(self._json['blocks'][i]['pose']['position']['x'])
						print(self._json['blocks'][i]['pose']['position']['y'])
						pose.pose.position.x = float(self._json['blocks'][i]['pose']['position']['x'])
						pose.pose.position.y = float(self._json['blocks'][i]['pose']['position']['y'])
						pose.pose.position.z = float(self._json['blocks'][i]['pose']['position']['z'])
						pose.pose.orientation.x = float(self._json['blocks'][i]['pose']['orientation']['x'])
						pose.pose.orientation.y = float(self._json['blocks'][i]['pose']['orientation']['y'])
						pose.pose.orientation.z = float(self._json['blocks'][i]['pose']['orientation']['z'])
						pose.pose.orientation.w = float(self._json['blocks'][i]['pose']['orientation']['w'])
						pose.header.frame_id = 'map'
						pose.header.stamp = self.sim_time.clock
											
						ntp.pose = pose
						#self._action_client.wait_for_server()

						self._action_client.send_goal(ntp)
						break
						
					
		#print(self._json)	

def main(args=None):
	rclpy.init(args=args)
	map_action_server = MapActionServer()
	rclpy.spin(map_action_server)


if __name__ == '__main__':
	main()
