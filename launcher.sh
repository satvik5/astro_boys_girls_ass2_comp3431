#gnome-terminal --tab --title="Teleop" -- bash -ic "cd ~/starter_code; ros2 run turtlebot3_teleop teleop_keyboard"
gnome-terminal --tab --title="Simulation" -- bash -ic "cd ~/starter_code; ./turtlebot3_startup.sh"
sleep 10
gnome-terminal --tab --title="Wall Follower" -- bash -ic "cd ~/starter_code; ./starter_code.sh"
gnome-terminal --tab --title="QR Reader" -- bash -ic "cd ~/python_ws; ros2 run zbar_ros barcode_reader"
gnome-terminal --tab --title="QR Interpreter" -- bash -ic "cd ~/python_ws; ros2 run publisher3431 listener_ass2"
gnome-terminal --tab --title="QR transformer" -- bash -ic "cd ~/python_ws; ros2 run publisher3431 listener"
