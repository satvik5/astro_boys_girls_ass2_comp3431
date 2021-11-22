// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from comp3431_interfaces:srv/MapInfo.idl
// generated code does not contain a copyright notice
#include "comp3431_interfaces/srv/detail/map_info__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "comp3431_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "comp3431_interfaces/srv/detail/map_info__struct.h"
#include "comp3431_interfaces/srv/detail/map_info__functions.h"
#include "fastcdr/Cdr.h"

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

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "comp3431_interfaces/msg/detail/qr_code_block__functions.h"  // blocks

// forward declare type support functions
size_t get_serialized_size_comp3431_interfaces__msg__QRCodeBlock(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_comp3431_interfaces__msg__QRCodeBlock(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, comp3431_interfaces, msg, QRCodeBlock)();


using _MapInfo_Request__ros_msg_type = comp3431_interfaces__srv__MapInfo_Request;

static bool _MapInfo_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _MapInfo_Request__ros_msg_type * ros_message = static_cast<const _MapInfo_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: blocks
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, comp3431_interfaces, msg, QRCodeBlock
      )()->data);
    size_t size = ros_message->blocks.size;
    auto array_ptr = ros_message->blocks.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  return true;
}

static bool _MapInfo_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _MapInfo_Request__ros_msg_type * ros_message = static_cast<_MapInfo_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: blocks
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, comp3431_interfaces, msg, QRCodeBlock
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->blocks.data) {
      comp3431_interfaces__msg__QRCodeBlock__Sequence__fini(&ros_message->blocks);
    }
    if (!comp3431_interfaces__msg__QRCodeBlock__Sequence__init(&ros_message->blocks, size)) {
      return "failed to create array for field 'blocks'";
    }
    auto array_ptr = ros_message->blocks.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_comp3431_interfaces
size_t get_serialized_size_comp3431_interfaces__srv__MapInfo_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MapInfo_Request__ros_msg_type * ros_message = static_cast<const _MapInfo_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name blocks
  {
    size_t array_size = ros_message->blocks.size;
    auto array_ptr = ros_message->blocks.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_comp3431_interfaces__msg__QRCodeBlock(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _MapInfo_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_comp3431_interfaces__srv__MapInfo_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_comp3431_interfaces
size_t max_serialized_size_comp3431_interfaces__srv__MapInfo_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: blocks
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_comp3431_interfaces__msg__QRCodeBlock(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _MapInfo_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_comp3431_interfaces__srv__MapInfo_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_MapInfo_Request = {
  "comp3431_interfaces::srv",
  "MapInfo_Request",
  _MapInfo_Request__cdr_serialize,
  _MapInfo_Request__cdr_deserialize,
  _MapInfo_Request__get_serialized_size,
  _MapInfo_Request__max_serialized_size
};

static rosidl_message_type_support_t _MapInfo_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MapInfo_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, comp3431_interfaces, srv, MapInfo_Request)() {
  return &_MapInfo_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "comp3431_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "comp3431_interfaces/srv/detail/map_info__struct.h"
// already included above
// #include "comp3431_interfaces/srv/detail/map_info__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

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

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _MapInfo_Response__ros_msg_type = comp3431_interfaces__srv__MapInfo_Response;

static bool _MapInfo_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _MapInfo_Response__ros_msg_type * ros_message = static_cast<const _MapInfo_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: structure_needs_at_least_one_member
  {
    cdr << ros_message->structure_needs_at_least_one_member;
  }

  return true;
}

static bool _MapInfo_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _MapInfo_Response__ros_msg_type * ros_message = static_cast<_MapInfo_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: structure_needs_at_least_one_member
  {
    cdr >> ros_message->structure_needs_at_least_one_member;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_comp3431_interfaces
size_t get_serialized_size_comp3431_interfaces__srv__MapInfo_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MapInfo_Response__ros_msg_type * ros_message = static_cast<const _MapInfo_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name structure_needs_at_least_one_member
  {
    size_t item_size = sizeof(ros_message->structure_needs_at_least_one_member);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _MapInfo_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_comp3431_interfaces__srv__MapInfo_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_comp3431_interfaces
size_t max_serialized_size_comp3431_interfaces__srv__MapInfo_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: structure_needs_at_least_one_member
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _MapInfo_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_comp3431_interfaces__srv__MapInfo_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_MapInfo_Response = {
  "comp3431_interfaces::srv",
  "MapInfo_Response",
  _MapInfo_Response__cdr_serialize,
  _MapInfo_Response__cdr_deserialize,
  _MapInfo_Response__get_serialized_size,
  _MapInfo_Response__max_serialized_size
};

static rosidl_message_type_support_t _MapInfo_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MapInfo_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, comp3431_interfaces, srv, MapInfo_Response)() {
  return &_MapInfo_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "comp3431_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "comp3431_interfaces/srv/map_info.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t MapInfo__callbacks = {
  "comp3431_interfaces::srv",
  "MapInfo",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, comp3431_interfaces, srv, MapInfo_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, comp3431_interfaces, srv, MapInfo_Response)(),
};

static rosidl_service_type_support_t MapInfo__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &MapInfo__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, comp3431_interfaces, srv, MapInfo)() {
  return &MapInfo__handle;
}

#if defined(__cplusplus)
}
#endif
