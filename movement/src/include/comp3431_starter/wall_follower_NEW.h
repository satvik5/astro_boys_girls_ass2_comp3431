
#include <chrono>
#include <functional>
#include <memory>
#include <string>
#include <iostream>
#include <cmath>
#include <algorithm>
#include <stack>

#include <rclcpp/rclcpp.hpp>
#include <std_msgs/msg/string.hpp>
#include <sensor_msgs/msg/laser_scan.hpp>
#include <geometry_msgs/msg/twist.hpp>
#include <geometry_msgs/msg/transform_stamped.hpp>
#include <geometry_msgs/msg/vector3.hpp>
#include <tf2_ros/transform_listener.h>
#include <tf2_ros/buffer.h>
#include <tf2_ros/create_timer_ros.h>

//https://github.com/udacity/RoboND-PathPlanning/blob/master/wall_follower.cpp

// Define the robot direction of movement
typedef enum _ROBOT_MOVEMENT {
    STOP = 0,
    FORWARD,
    BACKWARD,
    TURN_LEFT,
    TURN_RIGHT,
    GO_RIGHT,
    GO_LEFT

} ROBOT_MOVEMENT;


const std::string BASE_FRAME = std::string{"base_link"};



class WallFollower : public rclcpp::Node
{
	public:
		explicit WallFollower();

		~WallFollower(){}

		void configure();
		void startup();
		void shutdown();
		bool robot_move(const ROBOT_MOVEMENT move_type);

	private:

		geometry_msgs::msg::TransformStamped transform;
		bool paused, stopped;
		bool following_wall = false;
		bool thats_a_door = false;
		bool crashed = false;
		
		enum Side {LEFT, RIGHT};
		Side side;
		

		rclcpp::Subscription<std_msgs::msg::String>::SharedPtr commandSub_;
		rclcpp::Subscription<sensor_msgs::msg::LaserScan>::SharedPtr scanSub_;
		rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr twistPub_;

		void callbackScan(const sensor_msgs::msg::LaserScan::SharedPtr scan);
		void callbackControl(const std_msgs::msg::String::SharedPtr command);
};
