// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from comp3431_interfaces:msg/QRCodeBlock.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "comp3431_interfaces/msg/detail/qr_code_block__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace comp3431_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void QRCodeBlock_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) comp3431_interfaces::msg::QRCodeBlock(_init);
}

void QRCodeBlock_fini_function(void * message_memory)
{
  auto typed_message = static_cast<comp3431_interfaces::msg::QRCodeBlock *>(message_memory);
  typed_message->~QRCodeBlock();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember QRCodeBlock_message_member_array[2] = {
  {
    "text",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(comp3431_interfaces::msg::QRCodeBlock, text),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "pose",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Pose>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(comp3431_interfaces::msg::QRCodeBlock, pose),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers QRCodeBlock_message_members = {
  "comp3431_interfaces::msg",  // message namespace
  "QRCodeBlock",  // message name
  2,  // number of fields
  sizeof(comp3431_interfaces::msg::QRCodeBlock),
  QRCodeBlock_message_member_array,  // message members
  QRCodeBlock_init_function,  // function to initialize message memory (memory has to be allocated)
  QRCodeBlock_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t QRCodeBlock_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &QRCodeBlock_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace comp3431_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<comp3431_interfaces::msg::QRCodeBlock>()
{
  return &::comp3431_interfaces::msg::rosidl_typesupport_introspection_cpp::QRCodeBlock_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, comp3431_interfaces, msg, QRCodeBlock)() {
  return &::comp3431_interfaces::msg::rosidl_typesupport_introspection_cpp::QRCodeBlock_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
