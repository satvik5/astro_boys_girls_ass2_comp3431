ros2 run comp3431_starter wallFollower &
ros2 topic pub --once /cmd std_msgs/msg/String "{data : start}"
read -r -d ''
