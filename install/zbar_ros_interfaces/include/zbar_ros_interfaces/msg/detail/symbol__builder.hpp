// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from zbar_ros_interfaces:msg/Symbol.idl
// generated code does not contain a copyright notice

#ifndef ZBAR_ROS_INTERFACES__MSG__DETAIL__SYMBOL__BUILDER_HPP_
#define ZBAR_ROS_INTERFACES__MSG__DETAIL__SYMBOL__BUILDER_HPP_

#include "zbar_ros_interfaces/msg/detail/symbol__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace zbar_ros_interfaces
{

namespace msg
{

namespace builder
{

class Init_Symbol_points
{
public:
  explicit Init_Symbol_points(::zbar_ros_interfaces::msg::Symbol & msg)
  : msg_(msg)
  {}
  ::zbar_ros_interfaces::msg::Symbol points(::zbar_ros_interfaces::msg::Symbol::_points_type arg)
  {
    msg_.points = std::move(arg);
    return std::move(msg_);
  }

private:
  ::zbar_ros_interfaces::msg::Symbol msg_;
};

class Init_Symbol_data
{
public:
  Init_Symbol_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Symbol_points data(::zbar_ros_interfaces::msg::Symbol::_data_type arg)
  {
    msg_.data = std::move(arg);
    return Init_Symbol_points(msg_);
  }

private:
  ::zbar_ros_interfaces::msg::Symbol msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::zbar_ros_interfaces::msg::Symbol>()
{
  return zbar_ros_interfaces::msg::builder::Init_Symbol_data();
}

}  // namespace zbar_ros_interfaces

#endif  // ZBAR_ROS_INTERFACES__MSG__DETAIL__SYMBOL__BUILDER_HPP_
