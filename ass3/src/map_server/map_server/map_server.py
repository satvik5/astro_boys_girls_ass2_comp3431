from comp3431_interfaces.srv import MapInfo
from geometry_msgs.msg import TransformStamped
import os
import subprocess
#from geometry_msgs/
import yaml
import json
#json.dumps(object, filename)
#object = json.loads(filename) 

import rclpy
from rclpy.node import Node


class MapService(Node):

    def __init__(self):
        super().__init__('map_service')
        self.srv = self.create_service(MapInfo, '/set_map_info', self.set_map_info_callback)
        self.declare_parameter('map_info', 'empty')

    def set_map_info_callback(self, req, res):
    	
        self.get_logger().info('Incoming request\n: {0}'.format(req.blocks[0].pose.position.x))
        file_name = 'map_info.txt'
        #with open('map_info.yaml', 'w+') as outfile:
        #        yaml.dump(req.blocks, outfile, default_flow_style=False)
        arr = []
        for i in range(0,len(req.blocks)):
        	js = {
        	"text" :str(req.blocks[i].text),
        	"pose":{"position":{"x":req.blocks[i].pose.position.x,"y":req.blocks[i].pose.position.y,"z":req.blocks[i].pose.position.z},
        	"orientation":{"x":req.blocks[i].pose.orientation.x,"y":req.blocks[i].pose.orientation.y,"z":req.blocks[i].pose.orientation.z,"w":req.blocks[i].pose.orientation.w}}
        	}
        	arr.append(js)
        	
        	
        print(json.dumps({"blocks":arr}))
        #with open(file_name) as json_file:
        #        data = json.load(json_file)
        #        print(data['blocks'][0]['text'])
                #print('{0} {1}'.format(data.blocks[0].text,data.blocks[1].text))
        
        f = open(file_name, 'w+')  # open file in append mode
        f.write('{0}'.format(json.dumps({"blocks":arr},indent=4)))
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
