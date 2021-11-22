// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from comp3431_interfaces:msg/QRCodeBlock.idl
// generated code does not contain a copyright notice

#ifndef COMP3431_INTERFACES__MSG__DETAIL__QR_CODE_BLOCK__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define COMP3431_INTERFACES__MSG__DETAIL__QR_CODE_BLOCK__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "comp3431_interfaces/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "comp3431_interfaces/msg/detail/qr_code_block__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace comp3431_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_comp3431_interfaces
cdr_serialize(
  const comp3431_interfaces::msg::QRCodeBlock & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_comp3431_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  comp3431_interfaces::msg::QRCodeBlock & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_comp3431_interfaces
get_serialized_size(
  const comp3431_interfaces::msg::QRCodeBlock & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_comp3431_interfaces
max_serialized_size_QRCodeBlock(
  bool & full_bounded,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace comp3431_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_comp3431_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, comp3431_interfaces, msg, QRCodeBlock)();

#ifdef __cplusplus
}
#endif

#endif  // COMP3431_INTERFACES__MSG__DETAIL__QR_CODE_BLOCK__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
