// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from comp3431_interfaces:action/MoveObjectToRoom.idl
// generated code does not contain a copyright notice

#ifndef COMP3431_INTERFACES__ACTION__DETAIL__MOVE_OBJECT_TO_ROOM__STRUCT_H_
#define COMP3431_INTERFACES__ACTION__DETAIL__MOVE_OBJECT_TO_ROOM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'object'
// Member 'room'
#include "rosidl_runtime_c/string.h"

// Struct defined in action/MoveObjectToRoom in the package comp3431_interfaces.
typedef struct comp3431_interfaces__action__MoveObjectToRoom_Goal
{
  rosidl_runtime_c__String object;
  rosidl_runtime_c__String room;
} comp3431_interfaces__action__MoveObjectToRoom_Goal;

// Struct for a sequence of comp3431_interfaces__action__MoveObjectToRoom_Goal.
typedef struct comp3431_interfaces__action__MoveObjectToRoom_Goal__Sequence
{
  comp3431_interfaces__action__MoveObjectToRoom_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} comp3431_interfaces__action__MoveObjectToRoom_Goal__Sequence;


// Constants defined in the message

// Struct defined in action/MoveObjectToRoom in the package comp3431_interfaces.
typedef struct comp3431_interfaces__action__MoveObjectToRoom_Result
{
  uint8_t structure_needs_at_least_one_member;
} comp3431_interfaces__action__MoveObjectToRoom_Result;

// Struct for a sequence of comp3431_interfaces__action__MoveObjectToRoom_Result.
typedef struct comp3431_interfaces__action__MoveObjectToRoom_Result__Sequence
{
  comp3431_interfaces__action__MoveObjectToRoom_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} comp3431_interfaces__action__MoveObjectToRoom_Result__Sequence;


// Constants defined in the message

// Struct defined in action/MoveObjectToRoom in the package comp3431_interfaces.
typedef struct comp3431_interfaces__action__MoveObjectToRoom_Feedback
{
  uint8_t structure_needs_at_least_one_member;
} comp3431_interfaces__action__MoveObjectToRoom_Feedback;

// Struct for a sequence of comp3431_interfaces__action__MoveObjectToRoom_Feedback.
typedef struct comp3431_interfaces__action__MoveObjectToRoom_Feedback__Sequence
{
  comp3431_interfaces__action__MoveObjectToRoom_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} comp3431_interfaces__action__MoveObjectToRoom_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "comp3431_interfaces/action/detail/move_object_to_room__struct.h"

// Struct defined in action/MoveObjectToRoom in the package comp3431_interfaces.
typedef struct comp3431_interfaces__action__MoveObjectToRoom_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  comp3431_interfaces__action__MoveObjectToRoom_Goal goal;
} comp3431_interfaces__action__MoveObjectToRoom_SendGoal_Request;

// Struct for a sequence of comp3431_interfaces__action__MoveObjectToRoom_SendGoal_Request.
typedef struct comp3431_interfaces__action__MoveObjectToRoom_SendGoal_Request__Sequence
{
  comp3431_interfaces__action__MoveObjectToRoom_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} comp3431_interfaces__action__MoveObjectToRoom_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

// Struct defined in action/MoveObjectToRoom in the package comp3431_interfaces.
typedef struct comp3431_interfaces__action__MoveObjectToRoom_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} comp3431_interfaces__action__MoveObjectToRoom_SendGoal_Response;

// Struct for a sequence of comp3431_interfaces__action__MoveObjectToRoom_SendGoal_Response.
typedef struct comp3431_interfaces__action__MoveObjectToRoom_SendGoal_Response__Sequence
{
  comp3431_interfaces__action__MoveObjectToRoom_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} comp3431_interfaces__action__MoveObjectToRoom_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

// Struct defined in action/MoveObjectToRoom in the package comp3431_interfaces.
typedef struct comp3431_interfaces__action__MoveObjectToRoom_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} comp3431_interfaces__action__MoveObjectToRoom_GetResult_Request;

// Struct for a sequence of comp3431_interfaces__action__MoveObjectToRoom_GetResult_Request.
typedef struct comp3431_interfaces__action__MoveObjectToRoom_GetResult_Request__Sequence
{
  comp3431_interfaces__action__MoveObjectToRoom_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} comp3431_interfaces__action__MoveObjectToRoom_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "comp3431_interfaces/action/detail/move_object_to_room__struct.h"

// Struct defined in action/MoveObjectToRoom in the package comp3431_interfaces.
typedef struct comp3431_interfaces__action__MoveObjectToRoom_GetResult_Response
{
  int8_t status;
  comp3431_interfaces__action__MoveObjectToRoom_Result result;
} comp3431_interfaces__action__MoveObjectToRoom_GetResult_Response;

// Struct for a sequence of comp3431_interfaces__action__MoveObjectToRoom_GetResult_Response.
typedef struct comp3431_interfaces__action__MoveObjectToRoom_GetResult_Response__Sequence
{
  comp3431_interfaces__action__MoveObjectToRoom_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} comp3431_interfaces__action__MoveObjectToRoom_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "comp3431_interfaces/action/detail/move_object_to_room__struct.h"

// Struct defined in action/MoveObjectToRoom in the package comp3431_interfaces.
typedef struct comp3431_interfaces__action__MoveObjectToRoom_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  comp3431_interfaces__action__MoveObjectToRoom_Feedback feedback;
} comp3431_interfaces__action__MoveObjectToRoom_FeedbackMessage;

// Struct for a sequence of comp3431_interfaces__action__MoveObjectToRoom_FeedbackMessage.
typedef struct comp3431_interfaces__action__MoveObjectToRoom_FeedbackMessage__Sequence
{
  comp3431_interfaces__action__MoveObjectToRoom_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} comp3431_interfaces__action__MoveObjectToRoom_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // COMP3431_INTERFACES__ACTION__DETAIL__MOVE_OBJECT_TO_ROOM__STRUCT_H_
