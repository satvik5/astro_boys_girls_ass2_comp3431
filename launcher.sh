
#source ~/turtlebot3_ws/install/setup.bash &&
#ros2 launch turtlebot3_gazebo turtlebot3_house.launch.py
#ros2 launch comp3431_ass3_worlds house1.launch.py
#ros2 launch turtlebot3_cartographer cartographer.launch.py use_sim_time:=true

#gnome-terminal --tab --title="Teleop" -- bash -ic "cd ~/starter_code; ros2 run turtlebot3_teleop teleop_keyboard"

gnome-terminal --tab --title="Simulation" -- bash -ic "./run_simulation.sh"
sleep 5
gnome-terminal --tab --title="Wall Follower" -- bash -ic "./run_movement.sh"
gnome-terminal --tab --title="QR Reader" -- bash -ic "ros2 run zbar_ros barcode_reader"
#gnome-terminal --tab --title="QR Interpreter" -- bash -ic "ros2 run publisher3431 listener_ass2 use_sim_time:=true"
gnome-terminal --tab --title="QR Interpreter" -- bash -ic "ros2 run publisher3431 listener_ass2"
gnome-terminal --tab --title="QR Transformer" -- bash -ic "ros2 run publisher3431 listener"
gnome-terminal --tab --title="Map Saver" -- bash -ic "ros2 run saving saving"
gnome-terminal --tab --title="Map Info Service" -- bash -ic "ros2 run map_server service"
gnome-terminal --tab --title="Map Action Server" -- bash -ic "ros2 run map_server action_service"
