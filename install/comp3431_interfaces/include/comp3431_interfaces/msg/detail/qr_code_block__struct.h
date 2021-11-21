// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from comp3431_interfaces:msg/QRCodeBlock.idl
// generated code does not contain a copyright notice

#ifndef COMP3431_INTERFACES__MSG__DETAIL__QR_CODE_BLOCK__STRUCT_H_
#define COMP3431_INTERFACES__MSG__DETAIL__QR_CODE_BLOCK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'text'
#include "rosidl_runtime_c/string.h"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.h"

// Struct defined in msg/QRCodeBlock in the package comp3431_interfaces.
typedef struct comp3431_interfaces__msg__QRCodeBlock
{
  rosidl_runtime_c__String text;
  geometry_msgs__msg__Pose pose;
} comp3431_interfaces__msg__QRCodeBlock;

// Struct for a sequence of comp3431_interfaces__msg__QRCodeBlock.
typedef struct comp3431_interfaces__msg__QRCodeBlock__Sequence
{
  comp3431_interfaces__msg__QRCodeBlock * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} comp3431_interfaces__msg__QRCodeBlock__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // COMP3431_INTERFACES__MSG__DETAIL__QR_CODE_BLOCK__STRUCT_H_
