// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from comp3431_interfaces:srv/MapInfo.idl
// generated code does not contain a copyright notice

#ifndef COMP3431_INTERFACES__SRV__DETAIL__MAP_INFO__BUILDER_HPP_
#define COMP3431_INTERFACES__SRV__DETAIL__MAP_INFO__BUILDER_HPP_

#include "comp3431_interfaces/srv/detail/map_info__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace comp3431_interfaces
{

namespace srv
{

namespace builder
{

class Init_MapInfo_Request_blocks
{
public:
  Init_MapInfo_Request_blocks()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::comp3431_interfaces::srv::MapInfo_Request blocks(::comp3431_interfaces::srv::MapInfo_Request::_blocks_type arg)
  {
    msg_.blocks = std::move(arg);
    return std::move(msg_);
  }

private:
  ::comp3431_interfaces::srv::MapInfo_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::comp3431_interfaces::srv::MapInfo_Request>()
{
  return comp3431_interfaces::srv::builder::Init_MapInfo_Request_blocks();
}

}  // namespace comp3431_interfaces


namespace comp3431_interfaces
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::comp3431_interfaces::srv::MapInfo_Response>()
{
  return ::comp3431_interfaces::srv::MapInfo_Response(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace comp3431_interfaces

#endif  // COMP3431_INTERFACES__SRV__DETAIL__MAP_INFO__BUILDER_HPP_
