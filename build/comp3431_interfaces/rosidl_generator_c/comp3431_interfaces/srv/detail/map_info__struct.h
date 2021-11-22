// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from comp3431_interfaces:srv/MapInfo.idl
// generated code does not contain a copyright notice

#ifndef COMP3431_INTERFACES__SRV__DETAIL__MAP_INFO__STRUCT_H_
#define COMP3431_INTERFACES__SRV__DETAIL__MAP_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'blocks'
#include "comp3431_interfaces/msg/detail/qr_code_block__struct.h"

// Struct defined in srv/MapInfo in the package comp3431_interfaces.
typedef struct comp3431_interfaces__srv__MapInfo_Request
{
  comp3431_interfaces__msg__QRCodeBlock__Sequence blocks;
} comp3431_interfaces__srv__MapInfo_Request;

// Struct for a sequence of comp3431_interfaces__srv__MapInfo_Request.
typedef struct comp3431_interfaces__srv__MapInfo_Request__Sequence
{
  comp3431_interfaces__srv__MapInfo_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} comp3431_interfaces__srv__MapInfo_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/MapInfo in the package comp3431_interfaces.
typedef struct comp3431_interfaces__srv__MapInfo_Response
{
  uint8_t structure_needs_at_least_one_member;
} comp3431_interfaces__srv__MapInfo_Response;

// Struct for a sequence of comp3431_interfaces__srv__MapInfo_Response.
typedef struct comp3431_interfaces__srv__MapInfo_Response__Sequence
{
  comp3431_interfaces__srv__MapInfo_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} comp3431_interfaces__srv__MapInfo_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // COMP3431_INTERFACES__SRV__DETAIL__MAP_INFO__STRUCT_H_
