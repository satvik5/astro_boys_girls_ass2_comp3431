// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from comp3431_interfaces:srv/MapInfo.idl
// generated code does not contain a copyright notice
#include "comp3431_interfaces/srv/detail/map_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// Include directives for member types
// Member `blocks`
#include "comp3431_interfaces/msg/detail/qr_code_block__functions.h"

bool
comp3431_interfaces__srv__MapInfo_Request__init(comp3431_interfaces__srv__MapInfo_Request * msg)
{
  if (!msg) {
    return false;
  }
  // blocks
  if (!comp3431_interfaces__msg__QRCodeBlock__Sequence__init(&msg->blocks, 0)) {
    comp3431_interfaces__srv__MapInfo_Request__fini(msg);
    return false;
  }
  return true;
}

void
comp3431_interfaces__srv__MapInfo_Request__fini(comp3431_interfaces__srv__MapInfo_Request * msg)
{
  if (!msg) {
    return;
  }
  // blocks
  comp3431_interfaces__msg__QRCodeBlock__Sequence__fini(&msg->blocks);
}

comp3431_interfaces__srv__MapInfo_Request *
comp3431_interfaces__srv__MapInfo_Request__create()
{
  comp3431_interfaces__srv__MapInfo_Request * msg = (comp3431_interfaces__srv__MapInfo_Request *)malloc(sizeof(comp3431_interfaces__srv__MapInfo_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(comp3431_interfaces__srv__MapInfo_Request));
  bool success = comp3431_interfaces__srv__MapInfo_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
comp3431_interfaces__srv__MapInfo_Request__destroy(comp3431_interfaces__srv__MapInfo_Request * msg)
{
  if (msg) {
    comp3431_interfaces__srv__MapInfo_Request__fini(msg);
  }
  free(msg);
}


bool
comp3431_interfaces__srv__MapInfo_Request__Sequence__init(comp3431_interfaces__srv__MapInfo_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  comp3431_interfaces__srv__MapInfo_Request * data = NULL;
  if (size) {
    data = (comp3431_interfaces__srv__MapInfo_Request *)calloc(size, sizeof(comp3431_interfaces__srv__MapInfo_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = comp3431_interfaces__srv__MapInfo_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        comp3431_interfaces__srv__MapInfo_Request__fini(&data[i - 1]);
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
comp3431_interfaces__srv__MapInfo_Request__Sequence__fini(comp3431_interfaces__srv__MapInfo_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      comp3431_interfaces__srv__MapInfo_Request__fini(&array->data[i]);
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

comp3431_interfaces__srv__MapInfo_Request__Sequence *
comp3431_interfaces__srv__MapInfo_Request__Sequence__create(size_t size)
{
  comp3431_interfaces__srv__MapInfo_Request__Sequence * array = (comp3431_interfaces__srv__MapInfo_Request__Sequence *)malloc(sizeof(comp3431_interfaces__srv__MapInfo_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = comp3431_interfaces__srv__MapInfo_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
comp3431_interfaces__srv__MapInfo_Request__Sequence__destroy(comp3431_interfaces__srv__MapInfo_Request__Sequence * array)
{
  if (array) {
    comp3431_interfaces__srv__MapInfo_Request__Sequence__fini(array);
  }
  free(array);
}


bool
comp3431_interfaces__srv__MapInfo_Response__init(comp3431_interfaces__srv__MapInfo_Response * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
comp3431_interfaces__srv__MapInfo_Response__fini(comp3431_interfaces__srv__MapInfo_Response * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

comp3431_interfaces__srv__MapInfo_Response *
comp3431_interfaces__srv__MapInfo_Response__create()
{
  comp3431_interfaces__srv__MapInfo_Response * msg = (comp3431_interfaces__srv__MapInfo_Response *)malloc(sizeof(comp3431_interfaces__srv__MapInfo_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(comp3431_interfaces__srv__MapInfo_Response));
  bool success = comp3431_interfaces__srv__MapInfo_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
comp3431_interfaces__srv__MapInfo_Response__destroy(comp3431_interfaces__srv__MapInfo_Response * msg)
{
  if (msg) {
    comp3431_interfaces__srv__MapInfo_Response__fini(msg);
  }
  free(msg);
}


bool
comp3431_interfaces__srv__MapInfo_Response__Sequence__init(comp3431_interfaces__srv__MapInfo_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  comp3431_interfaces__srv__MapInfo_Response * data = NULL;
  if (size) {
    data = (comp3431_interfaces__srv__MapInfo_Response *)calloc(size, sizeof(comp3431_interfaces__srv__MapInfo_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = comp3431_interfaces__srv__MapInfo_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        comp3431_interfaces__srv__MapInfo_Response__fini(&data[i - 1]);
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
comp3431_interfaces__srv__MapInfo_Response__Sequence__fini(comp3431_interfaces__srv__MapInfo_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      comp3431_interfaces__srv__MapInfo_Response__fini(&array->data[i]);
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

comp3431_interfaces__srv__MapInfo_Response__Sequence *
comp3431_interfaces__srv__MapInfo_Response__Sequence__create(size_t size)
{
  comp3431_interfaces__srv__MapInfo_Response__Sequence * array = (comp3431_interfaces__srv__MapInfo_Response__Sequence *)malloc(sizeof(comp3431_interfaces__srv__MapInfo_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = comp3431_interfaces__srv__MapInfo_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
comp3431_interfaces__srv__MapInfo_Response__Sequence__destroy(comp3431_interfaces__srv__MapInfo_Response__Sequence * array)
{
  if (array) {
    comp3431_interfaces__srv__MapInfo_Response__Sequence__fini(array);
  }
  free(array);
}
