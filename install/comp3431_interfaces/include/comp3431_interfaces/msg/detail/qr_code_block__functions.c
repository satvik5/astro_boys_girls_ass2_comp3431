// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from comp3431_interfaces:msg/QRCodeBlock.idl
// generated code does not contain a copyright notice
#include "comp3431_interfaces/msg/detail/qr_code_block__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `text`
#include "rosidl_runtime_c/string_functions.h"
// Member `pose`
#include "geometry_msgs/msg/detail/pose__functions.h"

bool
comp3431_interfaces__msg__QRCodeBlock__init(comp3431_interfaces__msg__QRCodeBlock * msg)
{
  if (!msg) {
    return false;
  }
  // text
  if (!rosidl_runtime_c__String__init(&msg->text)) {
    comp3431_interfaces__msg__QRCodeBlock__fini(msg);
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__init(&msg->pose)) {
    comp3431_interfaces__msg__QRCodeBlock__fini(msg);
    return false;
  }
  return true;
}

void
comp3431_interfaces__msg__QRCodeBlock__fini(comp3431_interfaces__msg__QRCodeBlock * msg)
{
  if (!msg) {
    return;
  }
  // text
  rosidl_runtime_c__String__fini(&msg->text);
  // pose
  geometry_msgs__msg__Pose__fini(&msg->pose);
}

comp3431_interfaces__msg__QRCodeBlock *
comp3431_interfaces__msg__QRCodeBlock__create()
{
  comp3431_interfaces__msg__QRCodeBlock * msg = (comp3431_interfaces__msg__QRCodeBlock *)malloc(sizeof(comp3431_interfaces__msg__QRCodeBlock));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(comp3431_interfaces__msg__QRCodeBlock));
  bool success = comp3431_interfaces__msg__QRCodeBlock__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
comp3431_interfaces__msg__QRCodeBlock__destroy(comp3431_interfaces__msg__QRCodeBlock * msg)
{
  if (msg) {
    comp3431_interfaces__msg__QRCodeBlock__fini(msg);
  }
  free(msg);
}


bool
comp3431_interfaces__msg__QRCodeBlock__Sequence__init(comp3431_interfaces__msg__QRCodeBlock__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  comp3431_interfaces__msg__QRCodeBlock * data = NULL;
  if (size) {
    data = (comp3431_interfaces__msg__QRCodeBlock *)calloc(size, sizeof(comp3431_interfaces__msg__QRCodeBlock));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = comp3431_interfaces__msg__QRCodeBlock__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        comp3431_interfaces__msg__QRCodeBlock__fini(&data[i - 1]);
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
comp3431_interfaces__msg__QRCodeBlock__Sequence__fini(comp3431_interfaces__msg__QRCodeBlock__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      comp3431_interfaces__msg__QRCodeBlock__fini(&array->data[i]);
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

comp3431_interfaces__msg__QRCodeBlock__Sequence *
comp3431_interfaces__msg__QRCodeBlock__Sequence__create(size_t size)
{
  comp3431_interfaces__msg__QRCodeBlock__Sequence * array = (comp3431_interfaces__msg__QRCodeBlock__Sequence *)malloc(sizeof(comp3431_interfaces__msg__QRCodeBlock__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = comp3431_interfaces__msg__QRCodeBlock__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
comp3431_interfaces__msg__QRCodeBlock__Sequence__destroy(comp3431_interfaces__msg__QRCodeBlock__Sequence * array)
{
  if (array) {
    comp3431_interfaces__msg__QRCodeBlock__Sequence__fini(array);
  }
  free(array);
}
