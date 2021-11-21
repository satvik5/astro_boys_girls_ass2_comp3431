// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from comp3431_interfaces:msg/QRCodeBlock.idl
// generated code does not contain a copyright notice

#ifndef COMP3431_INTERFACES__MSG__DETAIL__QR_CODE_BLOCK__BUILDER_HPP_
#define COMP3431_INTERFACES__MSG__DETAIL__QR_CODE_BLOCK__BUILDER_HPP_

#include "comp3431_interfaces/msg/detail/qr_code_block__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace comp3431_interfaces
{

namespace msg
{

namespace builder
{

class Init_QRCodeBlock_pose
{
public:
  explicit Init_QRCodeBlock_pose(::comp3431_interfaces::msg::QRCodeBlock & msg)
  : msg_(msg)
  {}
  ::comp3431_interfaces::msg::QRCodeBlock pose(::comp3431_interfaces::msg::QRCodeBlock::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return std::move(msg_);
  }

private:
  ::comp3431_interfaces::msg::QRCodeBlock msg_;
};

class Init_QRCodeBlock_text
{
public:
  Init_QRCodeBlock_text()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_QRCodeBlock_pose text(::comp3431_interfaces::msg::QRCodeBlock::_text_type arg)
  {
    msg_.text = std::move(arg);
    return Init_QRCodeBlock_pose(msg_);
  }

private:
  ::comp3431_interfaces::msg::QRCodeBlock msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::comp3431_interfaces::msg::QRCodeBlock>()
{
  return comp3431_interfaces::msg::builder::Init_QRCodeBlock_text();
}

}  // namespace comp3431_interfaces

#endif  // COMP3431_INTERFACES__MSG__DETAIL__QR_CODE_BLOCK__BUILDER_HPP_
