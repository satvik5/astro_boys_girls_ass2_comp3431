
#include <wall_follower.h>


#define CLIP_0_1(X)         ((X) < 0?0:(X)>1?1:(X))



// The robot_move function will be called by the laser_callback function each time a laser scan data is received
// This function will accept robot movements and actuate the robot's wheels accordingly
// Keep a low speed for better results
bool WallFollower::robot_move(const ROBOT_MOVEMENT move_type)
{
	geometry_msgs::msg::Twist t;
	t.linear.x = t.linear.y = t.linear.z = 0;
	t.angular.x = t.angular.y = t.angular.z = 0;
    if (move_type == STOP) {
        RCLCPP_INFO(this->get_logger(), "[ROBOT] HALT! \n");
        t.angular.z = 0.0;
        t.linear.x = 0.0;
    }

    else if (move_type == FORWARD) {
        RCLCPP_INFO(this->get_logger(), "[ROBOT] Always FORWARD! \n");
        t.angular.z = 0.0;
        t.linear.x = 0.5;
    }

    else if (move_type == BACKWARD) {
        RCLCPP_INFO(this->get_logger(), "[ROBOT] I'm going back! \n");
        t.linear.x = -0.75;
        t.angular.z = 0.0;
    }

    else if (move_type == TURN_LEFT) {
        RCLCPP_INFO(this->get_logger(), "[ROBOT] I'm turning left! \n");
        t.linear.x = 0.0;
        t.angular.z = 0.25;
    }

    else if (move_type == TURN_RIGHT) {
        RCLCPP_INFO(this->get_logger(), "[ROBOT] I'm turning right! \n");
        t.linear.x = 0.0;
        t.angular.z = -0.25;
    }
    else if (move_type == GO_RIGHT) {
        RCLCPP_INFO(this->get_logger(), "[ROBOT] I'm goin right! \n");
        t.linear.x = 0.1;
        t.angular.z = -0.25;
    }
    else if (move_type == GO_LEFT) {
        RCLCPP_INFO(this->get_logger(), "[ROBOT] I'm goin left! \n");
        t.linear.x = 0.1;
        t.angular.z = 0.25;
    }
    else {
        RCLCPP_INFO(this->get_logger(), "[ROBOT_MOVE] Move type wrong! \n");
        return false;
    }

    //Publish motor commands to the robot and wait 10ms
    twistPub_->publish(t);
    // usleep(10);
    return true;
}

WallFollower::WallFollower():Node("wall_follower") 
{
	RCLCPP_INFO(this->get_logger(), "I AM STARTING NOW");
	scanSub_ = this->create_subscription<sensor_msgs::msg::LaserScan>("scan", 1, std::bind(&WallFollower::callbackScan, this, std::placeholders::_1));

	commandSub_ = this->create_subscription<std_msgs::msg::String>("cmd", 1, std::bind(&WallFollower::callbackControl, this, std::placeholders::_1));

	twistPub_ = this->create_publisher<geometry_msgs::msg::Twist>("cmd_vel", 1);

	paused = true;
}


void WallFollower::callbackScan(const sensor_msgs::msg::LaserScan::SharedPtr scan_msg)
{
	if(paused){
		geometry_msgs::msg::Twist t;
		t.linear.x = t.linear.y = t.linear.z = 0;
		t.angular.x = t.angular.y = t.angular.z = 0;
		twistPub_->publish(t);
		stopped = true;
		return;
	}

	sensor_msgs::msg::LaserScan laser_msg;
	// Read and process laser scan values
    laser_msg = *scan_msg;
    std::vector<float> laser_ranges;
    laser_ranges = laser_msg.ranges;
    size_t range_size = laser_ranges.size();
    int left_count = 0, right_count = 0;
    float left_side = 0.0, right_side = 0.0;
    float range_min = laser_msg.range_max, range_max = laser_msg.range_min;
    int nan_count = 0;

    for (size_t i = 0; i < range_size; i++) {
        if (std::isnan(laser_ranges[i])) {
            nan_count++;
        }
        if (laser_ranges[i] < range_min) {
            range_min = laser_ranges[i];
        }

        if ((i < (range_size / 16) || i > ((15 * range_size)/16))) {   
			if (laser_ranges[i] > range_max) {
                range_max = laser_ranges[i];
            }
        }

        if (i > range_size / 2 && !std::isinf(laser_ranges[i])) {
            right_side += laser_ranges[i];
            right_count++;
        }
        else if (i <= range_size / 2 && !std::isinf(laser_ranges[i])) {
            left_side += laser_ranges[i];
            left_count++;
        }
    }

    float left_avg = left_side / float(left_count);
    float right_avg = right_side / float(right_count);

	std::cout << range_min << " : " << range_max << std::endl;
	std::cout << left_avg << " : " << right_avg << std::endl;

    // Check if the robot has crashed into a wall
    if (nan_count > (range_size * 0.9) || laser_ranges[0] < 0.25) crashed = true;
    else crashed = false;

    // Assign movements to a robot that still did not crash 
    if (!crashed) {

        if (range_min <= 0.5) {
            following_wall = true;
            crashed = false;

            if (left_avg >= right_avg) {
                robot_move(GO_LEFT);
            }
            else {
                robot_move(GO_RIGHT);
            }
        } else if (range_min > 0.5 && !std::isinf(range_max)) {
            following_wall = false;
            crashed = false;
            robot_move(FORWARD);
        } else {
            following_wall = false;
            crashed = false;
            robot_move(TURN_LEFT);
        }
    }
    // Robot should go backward since it crashed into a wall
    else {
        robot_move(BACKWARD);
    }
	stopped = false;
} 

void WallFollower::callbackControl(const std_msgs::msg::String::SharedPtr command)
{
	RCLCPP_INFO(this->get_logger(), "Recieved %s message.\n", command->data.c_str());
	
	std::string message = std::string{command->data};
	if(message == "start" && paused == true) {
		RCLCPP_INFO(this->get_logger(), "Alright, let's get this show on the road!!!");
		paused = false;
	}
	else if(message == "stop") {
		RCLCPP_INFO(this->get_logger(), "Stopping, don't forget to save that lovely map or it'll be lost forever!!!");
		paused = true;
	}

}
