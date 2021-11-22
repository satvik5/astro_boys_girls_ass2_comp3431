
#source ~/turtlebot3_ws/install/setup.bash &&
#ros2 launch turtlebot3_gazebo turtlebot3_house.launch.py
#ros2 launch comp3431_ass3_worlds house1.launch.py
#ros2 launch turtlebot3_cartographer cartographer.launch.py use_sim_time:=true

#gnome-terminal --tab --title="Teleop" -- bash -ic "cd ~/starter_code; ros2 run turtlebot3_teleop teleop_keyboard"

gnome-terminal --tab --title="Simulation" -- bash -ic "cd ~/movement; ./turtlebot3_startup.sh"
#sleep 10
#gnome-terminal --tab --title="Wall Follower" -- bash -ic "cd ~/starter_code; ./starter_code.sh"
#gnome-terminal --tab --title="QR Reader" -- bash -ic "cd ~/py_pub_sub; ros2 run zbar_ros barcode_reader"
#gnome-terminal --tab --title="QR Interpreter" -- bash -ic "cd ~/py_pub_sub; ros2 run publisher3431 listener_ass2 use_sim_time:=true"
#gnome-terminal --tab --title="QR transformer" -- bash -ic "cd ~/py_pub_sub; ros2 run publisher3431 listener; $SHELL"
