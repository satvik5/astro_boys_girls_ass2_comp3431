source ~/turtlebot3_ws/install/setup.bash &&
ros2 launch comp3431_ass3_worlds house1.launch.py &
sleep 4 &
ros2 launch turtlebot3_navigation2 navigation2.launch.py use_sim_time:=True map:=$HOME/map_house1.yaml

