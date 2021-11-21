// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from comp3431_interfaces:action/MoveObjectToRoom.idl
// generated code does not contain a copyright notice
#include "comp3431_interfaces/action/detail/move_object_to_room__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `object`
// Member `room`
#include "rosidl_runtime_c/string_functions.h"

bool
comp3431_interfaces__action__MoveObjectToRoom_Goal__init(comp3431_interfaces__action__MoveObjectToRoom_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // object
  if (!rosidl_runtime_c__String__init(&msg->object)) {
    comp3431_interfaces__action__MoveObjectToRoom_Goal__fini(msg);
    return false;
  }
  // room
  if (!rosidl_runtime_c__String__init(&msg->room)) {
    comp3431_interfaces__action__MoveObjectToRoom_Goal__fini(msg);
    return false;
  }
  return true;
}

void
comp3431_interfaces__action__MoveObjectToRoom_Goal__fini(comp3431_interfaces__action__MoveObjectToRoom_Goal * msg)
{
  if (!msg) {
    return;
  }
  // object
  rosidl_runtime_c__String__fini(&msg->object);
  // room
  rosidl_runtime_c__String__fini(&msg->room);
}

comp3431_interfaces__action__MoveObjectToRoom_Goal *
comp3431_interfaces__action__MoveObjectToRoom_Goal__create()
{
  comp3431_interfaces__action__MoveObjectToRoom_Goal * msg = (comp3431_interfaces__action__MoveObjectToRoom_Goal *)malloc(sizeof(comp3431_interfaces__action__MoveObjectToRoom_Goal));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(comp3431_interfaces__action__MoveObjectToRoom_Goal));
  bool success = comp3431_interfaces__action__MoveObjectToRoom_Goal__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
comp3431_interfaces__action__MoveObjectToRoom_Goal__destroy(comp3431_interfaces__action__MoveObjectToRoom_Goal * msg)
{
  if (msg) {
    comp3431_interfaces__action__MoveObjectToRoom_Goal__fini(msg);
  }
  free(msg);
}


bool
comp3431_interfaces__action__MoveObjectToRoom_Goal__Sequence__init(comp3431_interfaces__action__MoveObjectToRoom_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  comp3431_interfaces__action__MoveObjectToRoom_Goal * data = NULL;
  if (size) {
    data = (comp3431_interfaces__action__MoveObjectToRoom_Goal *)calloc(size, sizeof(comp3431_interfaces__action__MoveObjectToRoom_Goal));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = comp3431_interfaces__action__MoveObjectToRoom_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        comp3431_interfaces__action__MoveObjectToRoom_Goal__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
comp3431_interfaces__action__MoveObjectToRoom_Goal__Sequence__fini(comp3431_interfaces__action__MoveObjectToRoom_Goal__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      comp3431_interfaces__action__MoveObjectToRoom_Goal__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

comp3431_interfaces__action__MoveObjectToRoom_Goal__Sequence *
comp3431_interfaces__action__MoveObjectToRoom_Goal__Sequence__create(size_t size)
{
  comp3431_interfaces__action__MoveObjectToRoom_Goal__Sequence * array = (comp3431_interfaces__action__MoveObjectToRoom_Goal__Sequence *)malloc(sizeof(comp3431_interfaces__action__MoveObjectToRoom_Goal__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = comp3431_interfaces__action__MoveObjectToRoom_Goal__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
comp3431_interfaces__action__MoveObjectToRoom_Goal__Sequence__destroy(comp3431_interfaces__action__MoveObjectToRoom_Goal__Sequence * array)
{
  if (array) {
    comp3431_interfaces__action__MoveObjectToRoom_Goal__Sequence__fini(array);
  }
  free(array);
}


bool
comp3431_interfaces__action__MoveObjectToRoom_Result__init(comp3431_interfaces__action__MoveObjectToRoom_Result * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
comp3431_interfaces__action__MoveObjectToRoom_Result__fini(comp3431_interfaces__action__MoveObjectToRoom_Result * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

comp3431_interfaces__action__MoveObjectToRoom_Result *
comp3431_interfaces__action__MoveObjectToRoom_Result__create()
{
  comp3431_interfaces__action__MoveObjectToRoom_Result * msg = (comp3431_interfaces__action__MoveObjectToRoom_Result *)malloc(sizeof(comp3431_interfaces__action__MoveObjectToRoom_Result));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(comp3431_interfaces__action__MoveObjectToRoom_Result));
  bool success = comp3431_interfaces__action__MoveObjectToRoom_Result__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
comp3431_interfaces__action__MoveObjectToRoom_Result__destroy(comp3431_interfaces__action__MoveObjectToRoom_Result * msg)
{
  if (msg) {
    comp3431_interfaces__action__MoveObjectToRoom_Result__fini(msg);
  }
  free(msg);
}


bool
comp3431_interfaces__action__MoveObjectToRoom_Result__Sequence__init(comp3431_interfaces__action__MoveObjectToRoom_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  comp3431_interfaces__action__MoveObjectToRoom_Result * data = NULL;
  if (size) {
    data = (comp3431_interfaces__action__MoveObjectToRoom_Result *)calloc(size, sizeof(comp3431_interfaces__action__MoveObjectToRoom_Result));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = comp3431_interfaces__action__MoveObjectToRoom_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        comp3431_interfaces__action__MoveObjectToRoom_Result__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
comp3431_interfaces__action__MoveObjectToRoom_Result__Sequence__fini(comp3431_interfaces__action__MoveObjectToRoom_Result__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      comp3431_interfaces__action__MoveObjectToRoom_Result__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

comp3431_interfaces__action__MoveObjectToRoom_Result__Sequence *
comp3431_interfaces__action__MoveObjectToRoom_Result__Sequence__create(size_t size)
{
  comp3431_interfaces__action__MoveObjectToRoom_Result__Sequence * array = (comp3431_interfaces__action__MoveObjectToRoom_Result__Sequence *)malloc(sizeof(comp3431_interfaces__action__MoveObjectToRoom_Result__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = comp3431_interfaces__action__MoveObjectToRoom_Result__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
comp3431_interfaces__action__MoveObjectToRoom_Result__Sequence__destroy(comp3431_interfaces__action__MoveObjectToRoom_Result__Sequence * array)
{
  if (array) {
    comp3431_interfaces__action__MoveObjectToRoom_Result__Sequence__fini(array);
  }
  free(array);
}


bool
comp3431_interfaces__action__MoveObjectToRoom_Feedback__init(comp3431_interfaces__action__MoveObjectToRoom_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
comp3431_interfaces__action__MoveObjectToRoom_Feedback__fini(comp3431_interfaces__action__MoveObjectToRoom_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

comp3431_interfaces__action__MoveObjectToRoom_Feedback *
comp3431_interfaces__action__MoveObjectToRoom_Feedback__create()
{
  comp3431_interfaces__action__MoveObjectToRoom_Feedback * msg = (comp3431_interfaces__action__MoveObjectToRoom_Feedback *)malloc(sizeof(comp3431_interfaces__action__MoveObjectToRoom_Feedback));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(comp3431_interfaces__action__MoveObjectToRoom_Feedback));
  bool success = comp3431_interfaces__action__MoveObjectToRoom_Feedback__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
comp3431_interfaces__action__MoveObjectToRoom_Feedback__destroy(comp3431_interfaces__action__MoveObjectToRoom_Feedback * msg)
{
  if (msg) {
    comp3431_interfaces__action__MoveObjectToRoom_Feedback__fini(msg);
  }
  free(msg);
}


bool
comp3431_interfaces__action__MoveObjectToRoom_Feedback__Sequence__init(comp3431_interfaces__action__MoveObjectToRoom_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  comp3431_interfaces__action__MoveObjectToRoom_Feedback * data = NULL;
  if (size) {
    data = (comp3431_interfaces__action__MoveObjectToRoom_Feedback *)calloc(size, sizeof(comp3431_interfaces__action__MoveObjectToRoom_Feedback));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = comp3431_interfaces__action__MoveObjectToRoom_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        comp3431_interfaces__action__MoveObjectToRoom_Feedback__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
comp3431_interfaces__action__MoveObjectToRoom_Feedback__Sequence__fini(comp3431_interfaces__action__MoveObjectToRoom_Feedback__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      comp3431_interfaces__action__MoveObjectToRoom_Feedback__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

comp3431_interfaces__action__MoveObjectToRoom_Feedback__Sequence *
comp3431_interfaces__action__MoveObjectToRoom_Feedback__Sequence__create(size_t size)
{
  comp3431_interfaces__action__MoveObjectToRoom_Feedback__Sequence * array = (comp3431_interfaces__action__MoveObjectToRoom_Feedback__Sequence *)malloc(sizeof(comp3431_interfaces__action__MoveObjectToRoom_Feedback__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = comp3431_interfaces__action__MoveObjectToRoom_Feedback__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
comp3431_interfaces__action__MoveObjectToRoom_Feedback__Sequence__destroy(comp3431_interfaces__action__MoveObjectToRoom_Feedback__Sequence * array)
{
  if (array) {
    comp3431_interfaces__action__MoveObjectToRoom_Feedback__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "comp3431_interfaces/action/detail/move_object_to_room__functions.h"

bool
comp3431_interfaces__action__MoveObjectToRoom_SendGoal_Request__init(comp3431_interfaces__action__MoveObjectToRoom_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    comp3431_interfaces__action__MoveObjectToRoom_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!comp3431_interfaces__action__MoveObjectToRoom_Goal__init(&msg->goal)) {
    comp3431_interfaces__action__MoveObjectToRoom_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
comp3431_interfaces__action__MoveObjectToRoom_SendGoal_Request__fini(comp3431_interfaces__action__MoveObjectToRoom_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  comp3431_interfaces__action__MoveObjectToRoom_Goal__fini(&msg->goal);
}

comp3431_interfaces__action__MoveObjectToRoom_SendGoal_Request *
comp3431_interfaces__action__MoveObjectToRoom_SendGoal_Request__create()
{
  comp3431_interfaces__action__MoveObjectToRoom_SendGoal_Request * msg = (comp3431_interfaces__action__MoveObjectToRoom_SendGoal_Request *)malloc(sizeof(comp3431_interfaces__action__MoveObjectToRoom_SendGoal_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(comp3431_interfaces__action__MoveObjectToRoom_SendGoal_Request));
  bool success = comp3431_interfaces__action__MoveObjectToRoom_SendGoal_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
comp3431_interfaces__action__MoveObjectToRoom_SendGoal_Request__destroy(comp3431_interfaces__action__MoveObjectToRoom_SendGoal_Request * msg)
{
  if (msg) {
    comp3431_interfaces__action__MoveObjectToRoom_SendGoal_Request__fini(msg);
  }
  free(msg);
}


bool
comp3431_interfaces__action__MoveObjectToRoom_SendGoal_Request__Sequence__init(comp3431_interfaces__action__MoveObjectToRoom_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  comp3431_interfaces__action__MoveObjectToRoom_SendGoal_Request * data = NULL;
  if (size) {
    data = (comp3431_interfaces__action__MoveObjectToRoom_SendGoal_Request *)calloc(size, sizeof(comp3431_interfaces__action__MoveObjectToRoom_SendGoal_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = comp3431_interfaces__action__MoveObjectToRoom_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        comp3431_interfaces__action__MoveObjectToRoom_SendGoal_Request__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
comp3431_interfaces__action__MoveObjectToRoom_SendGoal_Request__Sequence__fini(comp3431_interfaces__action__MoveObjectToRoom_SendGoal_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      comp3431_interfaces__action__MoveObjectToRoom_SendGoal_Request__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

comp3431_interfaces__action__MoveObjectToRoom_SendGoal_Request__Sequence *
comp3431_interfaces__action__MoveObjectToRoom_SendGoal_Request__Sequence__create(size_t size)
{
  comp3431_interfaces__action__MoveObjectToRoom_SendGoal_Request__Sequence * array = (comp3431_interfaces__action__MoveObjectToRoom_SendGoal_Request__Sequence *)malloc(sizeof(comp3431_interfaces__action__MoveObjectToRoom_SendGoal_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = comp3431_interfaces__action__MoveObjectToRoom_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
comp3431_interfaces__action__MoveObjectToRoom_SendGoal_Request__Sequence__destroy(comp3431_interfaces__action__MoveObjectToRoom_SendGoal_Request__Sequence * array)
{
  if (array) {
    comp3431_interfaces__action__MoveObjectToRoom_SendGoal_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
comp3431_interfaces__action__MoveObjectToRoom_SendGoal_Response__init(comp3431_interfaces__action__MoveObjectToRoom_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    comp3431_interfaces__action__MoveObjectToRoom_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
comp3431_interfaces__action__MoveObjectToRoom_SendGoal_Response__fini(comp3431_interfaces__action__MoveObjectToRoom_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

comp3431_interfaces__action__MoveObjectToRoom_SendGoal_Response *
comp3431_interfaces__action__MoveObjectToRoom_SendGoal_Response__create()
{
  comp3431_interfaces__action__MoveObjectToRoom_SendGoal_Response * msg = (comp3431_interfaces__action__MoveObjectToRoom_SendGoal_Response *)malloc(sizeof(comp3431_interfaces__action__MoveObjectToRoom_SendGoal_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(comp3431_interfaces__action__MoveObjectToRoom_SendGoal_Response));
  bool success = comp3431_interfaces__action__MoveObjectToRoom_SendGoal_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
comp3431_interfaces__action__MoveObjectToRoom_SendGoal_Response__destroy(comp3431_interfaces__action__MoveObjectToRoom_SendGoal_Response * msg)
{
  if (msg) {
    comp3431_interfaces__action__MoveObjectToRoom_SendGoal_Response__fini(msg);
  }
  free(msg);
}


bool
comp3431_interfaces__action__MoveObjectToRoom_SendGoal_Response__Sequence__init(comp3431_interfaces__action__MoveObjectToRoom_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  comp3431_interfaces__action__MoveObjectToRoom_SendGoal_Response * data = NULL;
  if (size) {
    data = (comp3431_interfaces__action__MoveObjectToRoom_SendGoal_Response *)calloc(size, sizeof(comp3431_interfaces__action__MoveObjectToRoom_SendGoal_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = comp3431_interfaces__action__MoveObjectToRoom_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        comp3431_interfaces__action__MoveObjectToRoom_SendGoal_Response__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
comp3431_interfaces__action__MoveObjectToRoom_SendGoal_Response__Sequence__fini(comp3431_interfaces__action__MoveObjectToRoom_SendGoal_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      comp3431_interfaces__action__MoveObjectToRoom_SendGoal_Response__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

comp3431_interfaces__action__MoveObjectToRoom_SendGoal_Response__Sequence *
comp3431_interfaces__action__MoveObjectToRoom_SendGoal_Response__Sequence__create(size_t size)
{
  comp3431_interfaces__action__MoveObjectToRoom_SendGoal_Response__Sequence * array = (comp3431_interfaces__action__MoveObjectToRoom_SendGoal_Response__Sequence *)malloc(sizeof(comp3431_interfaces__action__MoveObjectToRoom_SendGoal_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = comp3431_interfaces__action__MoveObjectToRoom_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
comp3431_interfaces__action__MoveObjectToRoom_SendGoal_Response__Sequence__destroy(comp3431_interfaces__action__MoveObjectToRoom_SendGoal_Response__Sequence * array)
{
  if (array) {
    comp3431_interfaces__action__MoveObjectToRoom_SendGoal_Response__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
comp3431_interfaces__action__MoveObjectToRoom_GetResult_Request__init(comp3431_interfaces__action__MoveObjectToRoom_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    comp3431_interfaces__action__MoveObjectToRoom_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
comp3431_interfaces__action__MoveObjectToRoom_GetResult_Request__fini(comp3431_interfaces__action__MoveObjectToRoom_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

comp3431_interfaces__action__MoveObjectToRoom_GetResult_Request *
comp3431_interfaces__action__MoveObjectToRoom_GetResult_Request__create()
{
  comp3431_interfaces__action__MoveObjectToRoom_GetResult_Request * msg = (comp3431_interfaces__action__MoveObjectToRoom_GetResult_Request *)malloc(sizeof(comp3431_interfaces__action__MoveObjectToRoom_GetResult_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(comp3431_interfaces__action__MoveObjectToRoom_GetResult_Request));
  bool success = comp3431_interfaces__action__MoveObjectToRoom_GetResult_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
comp3431_interfaces__action__MoveObjectToRoom_GetResult_Request__destroy(comp3431_interfaces__action__MoveObjectToRoom_GetResult_Request * msg)
{
  if (msg) {
    comp3431_interfaces__action__MoveObjectToRoom_GetResult_Request__fini(msg);
  }
  free(msg);
}


bool
comp3431_interfaces__action__MoveObjectToRoom_GetResult_Request__Sequence__init(comp3431_interfaces__action__MoveObjectToRoom_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  comp3431_interfaces__action__MoveObjectToRoom_GetResult_Request * data = NULL;
  if (size) {
    data = (comp3431_interfaces__action__MoveObjectToRoom_GetResult_Request *)calloc(size, sizeof(comp3431_interfaces__action__MoveObjectToRoom_GetResult_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = comp3431_interfaces__action__MoveObjectToRoom_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        comp3431_interfaces__action__MoveObjectToRoom_GetResult_Request__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
comp3431_interfaces__action__MoveObjectToRoom_GetResult_Request__Sequence__fini(comp3431_interfaces__action__MoveObjectToRoom_GetResult_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      comp3431_interfaces__action__MoveObjectToRoom_GetResult_Request__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

comp3431_interfaces__action__MoveObjectToRoom_GetResult_Request__Sequence *
comp3431_interfaces__action__MoveObjectToRoom_GetResult_Request__Sequence__create(size_t size)
{
  comp3431_interfaces__action__MoveObjectToRoom_GetResult_Request__Sequence * array = (comp3431_interfaces__action__MoveObjectToRoom_GetResult_Request__Sequence *)malloc(sizeof(comp3431_interfaces__action__MoveObjectToRoom_GetResult_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = comp3431_interfaces__action__MoveObjectToRoom_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
comp3431_interfaces__action__MoveObjectToRoom_GetResult_Request__Sequence__destroy(comp3431_interfaces__action__MoveObjectToRoom_GetResult_Request__Sequence * array)
{
  if (array) {
    comp3431_interfaces__action__MoveObjectToRoom_GetResult_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `result`
// already included above
// #include "comp3431_interfaces/action/detail/move_object_to_room__functions.h"

bool
comp3431_interfaces__action__MoveObjectToRoom_GetResult_Response__init(comp3431_interfaces__action__MoveObjectToRoom_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!comp3431_interfaces__action__MoveObjectToRoom_Result__init(&msg->result)) {
    comp3431_interfaces__action__MoveObjectToRoom_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
comp3431_interfaces__action__MoveObjectToRoom_GetResult_Response__fini(comp3431_interfaces__action__MoveObjectToRoom_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  comp3431_interfaces__action__MoveObjectToRoom_Result__fini(&msg->result);
}

comp3431_interfaces__action__MoveObjectToRoom_GetResult_Response *
comp3431_interfaces__action__MoveObjectToRoom_GetResult_Response__create()
{
  comp3431_interfaces__action__MoveObjectToRoom_GetResult_Response * msg = (comp3431_interfaces__action__MoveObjectToRoom_GetResult_Response *)malloc(sizeof(comp3431_interfaces__action__MoveObjectToRoom_GetResult_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(comp3431_interfaces__action__MoveObjectToRoom_GetResult_Response));
  bool success = comp3431_interfaces__action__MoveObjectToRoom_GetResult_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
comp3431_interfaces__action__MoveObjectToRoom_GetResult_Response__destroy(comp3431_interfaces__action__MoveObjectToRoom_GetResult_Response * msg)
{
  if (msg) {
    comp3431_interfaces__action__MoveObjectToRoom_GetResult_Response__fini(msg);
  }
  free(msg);
}


bool
comp3431_interfaces__action__MoveObjectToRoom_GetResult_Response__Sequence__init(comp3431_interfaces__action__MoveObjectToRoom_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  comp3431_interfaces__action__MoveObjectToRoom_GetResult_Response * data = NULL;
  if (size) {
    data = (comp3431_interfaces__action__MoveObjectToRoom_GetResult_Response *)calloc(size, sizeof(comp3431_interfaces__action__MoveObjectToRoom_GetResult_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = comp3431_interfaces__action__MoveObjectToRoom_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        comp3431_interfaces__action__MoveObjectToRoom_GetResult_Response__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
comp3431_interfaces__action__MoveObjectToRoom_GetResult_Response__Sequence__fini(comp3431_interfaces__action__MoveObjectToRoom_GetResult_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      comp3431_interfaces__action__MoveObjectToRoom_GetResult_Response__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

comp3431_interfaces__action__MoveObjectToRoom_GetResult_Response__Sequence *
comp3431_interfaces__action__MoveObjectToRoom_GetResult_Response__Sequence__create(size_t size)
{
  comp3431_interfaces__action__MoveObjectToRoom_GetResult_Response__Sequence * array = (comp3431_interfaces__action__MoveObjectToRoom_GetResult_Response__Sequence *)malloc(sizeof(comp3431_interfaces__action__MoveObjectToRoom_GetResult_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = comp3431_interfaces__action__MoveObjectToRoom_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
comp3431_interfaces__action__MoveObjectToRoom_GetResult_Response__Sequence__destroy(comp3431_interfaces__action__MoveObjectToRoom_GetResult_Response__Sequence * array)
{
  if (array) {
    comp3431_interfaces__action__MoveObjectToRoom_GetResult_Response__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "comp3431_interfaces/action/detail/move_object_to_room__functions.h"

bool
comp3431_interfaces__action__MoveObjectToRoom_FeedbackMessage__init(comp3431_interfaces__action__MoveObjectToRoom_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    comp3431_interfaces__action__MoveObjectToRoom_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!comp3431_interfaces__action__MoveObjectToRoom_Feedback__init(&msg->feedback)) {
    comp3431_interfaces__action__MoveObjectToRoom_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
comp3431_interfaces__action__MoveObjectToRoom_FeedbackMessage__fini(comp3431_interfaces__action__MoveObjectToRoom_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  comp3431_interfaces__action__MoveObjectToRoom_Feedback__fini(&msg->feedback);
}

comp3431_interfaces__action__MoveObjectToRoom_FeedbackMessage *
comp3431_interfaces__action__MoveObjectToRoom_FeedbackMessage__create()
{
  comp3431_interfaces__action__MoveObjectToRoom_FeedbackMessage * msg = (comp3431_interfaces__action__MoveObjectToRoom_FeedbackMessage *)malloc(sizeof(comp3431_interfaces__action__MoveObjectToRoom_FeedbackMessage));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(comp3431_interfaces__action__MoveObjectToRoom_FeedbackMessage));
  bool success = comp3431_interfaces__action__MoveObjectToRoom_FeedbackMessage__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
comp3431_interfaces__action__MoveObjectToRoom_FeedbackMessage__destroy(comp3431_interfaces__action__MoveObjectToRoom_FeedbackMessage * msg)
{
  if (msg) {
    comp3431_interfaces__action__MoveObjectToRoom_FeedbackMessage__fini(msg);
  }
  free(msg);
}


bool
comp3431_interfaces__action__MoveObjectToRoom_FeedbackMessage__Sequence__init(comp3431_interfaces__action__MoveObjectToRoom_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  comp3431_interfaces__action__MoveObjectToRoom_FeedbackMessage * data = NULL;
  if (size) {
    data = (comp3431_interfaces__action__MoveObjectToRoom_FeedbackMessage *)calloc(size, sizeof(comp3431_interfaces__action__MoveObjectToRoom_FeedbackMessage));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = comp3431_interfaces__action__MoveObjectToRoom_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        comp3431_interfaces__action__MoveObjectToRoom_FeedbackMessage__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
comp3431_interfaces__action__MoveObjectToRoom_FeedbackMessage__Sequence__fini(comp3431_interfaces__action__MoveObjectToRoom_FeedbackMessage__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      comp3431_interfaces__action__MoveObjectToRoom_FeedbackMessage__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

comp3431_interfaces__action__MoveObjectToRoom_FeedbackMessage__Sequence *
comp3431_interfaces__action__MoveObjectToRoom_FeedbackMessage__Sequence__create(size_t size)
{
  comp3431_interfaces__action__MoveObjectToRoom_FeedbackMessage__Sequence * array = (comp3431_interfaces__action__MoveObjectToRoom_FeedbackMessage__Sequence *)malloc(sizeof(comp3431_interfaces__action__MoveObjectToRoom_FeedbackMessage__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = comp3431_interfaces__action__MoveObjectToRoom_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
comp3431_interfaces__action__MoveObjectToRoom_FeedbackMessage__Sequence__destroy(comp3431_interfaces__action__MoveObjectToRoom_FeedbackMessage__Sequence * array)
{
  if (array) {
    comp3431_interfaces__action__MoveObjectToRoom_FeedbackMessage__Sequence__fini(array);
  }
  free(array);
}
