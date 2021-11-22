// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from comp3431_interfaces:msg/QRCodeBlock.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "comp3431_interfaces/msg/detail/qr_code_block__rosidl_typesupport_introspection_c.h"
#include "comp3431_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "comp3431_interfaces/msg/detail/qr_code_block__functions.h"
#include "comp3431_interfaces/msg/detail/qr_code_block__struct.h"


// Include directives for member types
// Member `text`
#include "rosidl_runtime_c/string_functions.h"
// Member `pose`
#include "geometry_msgs/msg/pose.h"
// Member `pose`
#include "geometry_msgs/msg/detail/pose__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void QRCodeBlock__rosidl_typesupport_introspection_c__QRCodeBlock_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  comp3431_interfaces__msg__QRCodeBlock__init(message_memory);
}

void QRCodeBlock__rosidl_typesupport_introspection_c__QRCodeBlock_fini_function(void * message_memory)
{
  comp3431_interfaces__msg__QRCodeBlock__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember QRCodeBlock__rosidl_typesupport_introspection_c__QRCodeBlock_message_member_array[2] = {
  {
    "text",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(comp3431_interfaces__msg__QRCodeBlock, text),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(comp3431_interfaces__msg__QRCodeBlock, pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers QRCodeBlock__rosidl_typesupport_introspection_c__QRCodeBlock_message_members = {
  "comp3431_interfaces__msg",  // message namespace
  "QRCodeBlock",  // message name
  2,  // number of fields
  sizeof(comp3431_interfaces__msg__QRCodeBlock),
  QRCodeBlock__rosidl_typesupport_introspection_c__QRCodeBlock_message_member_array,  // message members
  QRCodeBlock__rosidl_typesupport_introspection_c__QRCodeBlock_init_function,  // function to initialize message memory (memory has to be allocated)
  QRCodeBlock__rosidl_typesupport_introspection_c__QRCodeBlock_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t QRCodeBlock__rosidl_typesupport_introspection_c__QRCodeBlock_message_type_support_handle = {
  0,
  &QRCodeBlock__rosidl_typesupport_introspection_c__QRCodeBlock_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_comp3431_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, comp3431_interfaces, msg, QRCodeBlock)() {
  QRCodeBlock__rosidl_typesupport_introspection_c__QRCodeBlock_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  if (!QRCodeBlock__rosidl_typesupport_introspection_c__QRCodeBlock_message_type_support_handle.typesupport_identifier) {
    QRCodeBlock__rosidl_typesupport_introspection_c__QRCodeBlock_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &QRCodeBlock__rosidl_typesupport_introspection_c__QRCodeBlock_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
