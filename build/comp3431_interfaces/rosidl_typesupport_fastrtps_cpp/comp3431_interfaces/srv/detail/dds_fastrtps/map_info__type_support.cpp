// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from comp3431_interfaces:srv/MapInfo.idl
// generated code does not contain a copyright notice
#include "comp3431_interfaces/srv/detail/map_info__rosidl_typesupport_fastrtps_cpp.hpp"
#include "comp3431_interfaces/srv/detail/map_info__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace comp3431_interfaces
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const comp3431_interfaces::msg::QRCodeBlock &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  comp3431_interfaces::msg::QRCodeBlock &);
size_t get_serialized_size(
  const comp3431_interfaces::msg::QRCodeBlock &,
  size_t current_alignment);
size_t
max_serialized_size_QRCodeBlock(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace comp3431_interfaces


namespace comp3431_interfaces
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_comp3431_interfaces
cdr_serialize(
  const comp3431_interfaces::srv::MapInfo_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: blocks
  {
    size_t size = ros_message.blocks.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      comp3431_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.blocks[i],
        cdr);
    }
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_comp3431_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  comp3431_interfaces::srv::MapInfo_Request & ros_message)
{
  // Member: blocks
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.blocks.resize(size);
    for (size_t i = 0; i < size; i++) {
      comp3431_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.blocks[i]);
    }
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_comp3431_interfaces
get_serialized_size(
  const comp3431_interfaces::srv::MapInfo_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: blocks
  {
    size_t array_size = ros_message.blocks.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        comp3431_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.blocks[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_comp3431_interfaces
max_serialized_size_MapInfo_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: blocks
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        comp3431_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_QRCodeBlock(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _MapInfo_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const comp3431_interfaces::srv::MapInfo_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _MapInfo_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<comp3431_interfaces::srv::MapInfo_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _MapInfo_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const comp3431_interfaces::srv::MapInfo_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _MapInfo_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_MapInfo_Request(full_bounded, 0);
}

static message_type_support_callbacks_t _MapInfo_Request__callbacks = {
  "comp3431_interfaces::srv",
  "MapInfo_Request",
  _MapInfo_Request__cdr_serialize,
  _MapInfo_Request__cdr_deserialize,
  _MapInfo_Request__get_serialized_size,
  _MapInfo_Request__max_serialized_size
};

static rosidl_message_type_support_t _MapInfo_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_MapInfo_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace comp3431_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_comp3431_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<comp3431_interfaces::srv::MapInfo_Request>()
{
  return &comp3431_interfaces::srv::typesupport_fastrtps_cpp::_MapInfo_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, comp3431_interfaces, srv, MapInfo_Request)() {
  return &comp3431_interfaces::srv::typesupport_fastrtps_cpp::_MapInfo_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace comp3431_interfaces
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_comp3431_interfaces
cdr_serialize(
  const comp3431_interfaces::srv::MapInfo_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: structure_needs_at_least_one_member
  cdr << ros_message.structure_needs_at_least_one_member;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_comp3431_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  comp3431_interfaces::srv::MapInfo_Response & ros_message)
{
  // Member: structure_needs_at_least_one_member
  cdr >> ros_message.structure_needs_at_least_one_member;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_comp3431_interfaces
get_serialized_size(
  const comp3431_interfaces::srv::MapInfo_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: structure_needs_at_least_one_member
  {
    size_t item_size = sizeof(ros_message.structure_needs_at_least_one_member);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_comp3431_interfaces
max_serialized_size_MapInfo_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: structure_needs_at_least_one_member
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _MapInfo_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const comp3431_interfaces::srv::MapInfo_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _MapInfo_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<comp3431_interfaces::srv::MapInfo_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _MapInfo_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const comp3431_interfaces::srv::MapInfo_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _MapInfo_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_MapInfo_Response(full_bounded, 0);
}

static message_type_support_callbacks_t _MapInfo_Response__callbacks = {
  "comp3431_interfaces::srv",
  "MapInfo_Response",
  _MapInfo_Response__cdr_serialize,
  _MapInfo_Response__cdr_deserialize,
  _MapInfo_Response__get_serialized_size,
  _MapInfo_Response__max_serialized_size
};

static rosidl_message_type_support_t _MapInfo_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_MapInfo_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace comp3431_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_comp3431_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<comp3431_interfaces::srv::MapInfo_Response>()
{
  return &comp3431_interfaces::srv::typesupport_fastrtps_cpp::_MapInfo_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, comp3431_interfaces, srv, MapInfo_Response)() {
  return &comp3431_interfaces::srv::typesupport_fastrtps_cpp::_MapInfo_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace comp3431_interfaces
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _MapInfo__callbacks = {
  "comp3431_interfaces::srv",
  "MapInfo",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, comp3431_interfaces, srv, MapInfo_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, comp3431_interfaces, srv, MapInfo_Response)(),
};

static rosidl_service_type_support_t _MapInfo__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_MapInfo__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace comp3431_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_comp3431_interfaces
const rosidl_service_type_support_t *
get_service_type_support_handle<comp3431_interfaces::srv::MapInfo>()
{
  return &comp3431_interfaces::srv::typesupport_fastrtps_cpp::_MapInfo__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, comp3431_interfaces, srv, MapInfo)() {
  return &comp3431_interfaces::srv::typesupport_fastrtps_cpp::_MapInfo__handle;
}

#ifdef __cplusplus
}
#endif
