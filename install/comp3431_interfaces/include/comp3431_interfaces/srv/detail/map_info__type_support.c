// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from comp3431_interfaces:srv/MapInfo.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "comp3431_interfaces/srv/detail/map_info__rosidl_typesupport_introspection_c.h"
#include "comp3431_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "comp3431_interfaces/srv/detail/map_info__functions.h"
#include "comp3431_interfaces/srv/detail/map_info__struct.h"


// Include directives for member types
// Member `blocks`
#include "comp3431_interfaces/msg/qr_code_block.h"
// Member `blocks`
#include "comp3431_interfaces/msg/detail/qr_code_block__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void MapInfo_Request__rosidl_typesupport_introspection_c__MapInfo_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  comp3431_interfaces__srv__MapInfo_Request__init(message_memory);
}

void MapInfo_Request__rosidl_typesupport_introspection_c__MapInfo_Request_fini_function(void * message_memory)
{
  comp3431_interfaces__srv__MapInfo_Request__fini(message_memory);
}

size_t MapInfo_Request__rosidl_typesupport_introspection_c__size_function__QRCodeBlock__blocks(
  const void * untyped_member)
{
  const comp3431_interfaces__msg__QRCodeBlock__Sequence * member =
    (const comp3431_interfaces__msg__QRCodeBlock__Sequence *)(untyped_member);
  return member->size;
}

const void * MapInfo_Request__rosidl_typesupport_introspection_c__get_const_function__QRCodeBlock__blocks(
  const void * untyped_member, size_t index)
{
  const comp3431_interfaces__msg__QRCodeBlock__Sequence * member =
    (const comp3431_interfaces__msg__QRCodeBlock__Sequence *)(untyped_member);
  return &member->data[index];
}

void * MapInfo_Request__rosidl_typesupport_introspection_c__get_function__QRCodeBlock__blocks(
  void * untyped_member, size_t index)
{
  comp3431_interfaces__msg__QRCodeBlock__Sequence * member =
    (comp3431_interfaces__msg__QRCodeBlock__Sequence *)(untyped_member);
  return &member->data[index];
}

bool MapInfo_Request__rosidl_typesupport_introspection_c__resize_function__QRCodeBlock__blocks(
  void * untyped_member, size_t size)
{
  comp3431_interfaces__msg__QRCodeBlock__Sequence * member =
    (comp3431_interfaces__msg__QRCodeBlock__Sequence *)(untyped_member);
  comp3431_interfaces__msg__QRCodeBlock__Sequence__fini(member);
  return comp3431_interfaces__msg__QRCodeBlock__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember MapInfo_Request__rosidl_typesupport_introspection_c__MapInfo_Request_message_member_array[1] = {
  {
    "blocks",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(comp3431_interfaces__srv__MapInfo_Request, blocks),  // bytes offset in struct
    NULL,  // default value
    MapInfo_Request__rosidl_typesupport_introspection_c__size_function__QRCodeBlock__blocks,  // size() function pointer
    MapInfo_Request__rosidl_typesupport_introspection_c__get_const_function__QRCodeBlock__blocks,  // get_const(index) function pointer
    MapInfo_Request__rosidl_typesupport_introspection_c__get_function__QRCodeBlock__blocks,  // get(index) function pointer
    MapInfo_Request__rosidl_typesupport_introspection_c__resize_function__QRCodeBlock__blocks  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers MapInfo_Request__rosidl_typesupport_introspection_c__MapInfo_Request_message_members = {
  "comp3431_interfaces__srv",  // message namespace
  "MapInfo_Request",  // message name
  1,  // number of fields
  sizeof(comp3431_interfaces__srv__MapInfo_Request),
  MapInfo_Request__rosidl_typesupport_introspection_c__MapInfo_Request_message_member_array,  // message members
  MapInfo_Request__rosidl_typesupport_introspection_c__MapInfo_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  MapInfo_Request__rosidl_typesupport_introspection_c__MapInfo_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t MapInfo_Request__rosidl_typesupport_introspection_c__MapInfo_Request_message_type_support_handle = {
  0,
  &MapInfo_Request__rosidl_typesupport_introspection_c__MapInfo_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_comp3431_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, comp3431_interfaces, srv, MapInfo_Request)() {
  MapInfo_Request__rosidl_typesupport_introspection_c__MapInfo_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, comp3431_interfaces, msg, QRCodeBlock)();
  if (!MapInfo_Request__rosidl_typesupport_introspection_c__MapInfo_Request_message_type_support_handle.typesupport_identifier) {
    MapInfo_Request__rosidl_typesupport_introspection_c__MapInfo_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &MapInfo_Request__rosidl_typesupport_introspection_c__MapInfo_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "comp3431_interfaces/srv/detail/map_info__rosidl_typesupport_introspection_c.h"
// already included above
// #include "comp3431_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "comp3431_interfaces/srv/detail/map_info__functions.h"
// already included above
// #include "comp3431_interfaces/srv/detail/map_info__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void MapInfo_Response__rosidl_typesupport_introspection_c__MapInfo_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  comp3431_interfaces__srv__MapInfo_Response__init(message_memory);
}

void MapInfo_Response__rosidl_typesupport_introspection_c__MapInfo_Response_fini_function(void * message_memory)
{
  comp3431_interfaces__srv__MapInfo_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember MapInfo_Response__rosidl_typesupport_introspection_c__MapInfo_Response_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(comp3431_interfaces__srv__MapInfo_Response, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers MapInfo_Response__rosidl_typesupport_introspection_c__MapInfo_Response_message_members = {
  "comp3431_interfaces__srv",  // message namespace
  "MapInfo_Response",  // message name
  1,  // number of fields
  sizeof(comp3431_interfaces__srv__MapInfo_Response),
  MapInfo_Response__rosidl_typesupport_introspection_c__MapInfo_Response_message_member_array,  // message members
  MapInfo_Response__rosidl_typesupport_introspection_c__MapInfo_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  MapInfo_Response__rosidl_typesupport_introspection_c__MapInfo_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t MapInfo_Response__rosidl_typesupport_introspection_c__MapInfo_Response_message_type_support_handle = {
  0,
  &MapInfo_Response__rosidl_typesupport_introspection_c__MapInfo_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_comp3431_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, comp3431_interfaces, srv, MapInfo_Response)() {
  if (!MapInfo_Response__rosidl_typesupport_introspection_c__MapInfo_Response_message_type_support_handle.typesupport_identifier) {
    MapInfo_Response__rosidl_typesupport_introspection_c__MapInfo_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &MapInfo_Response__rosidl_typesupport_introspection_c__MapInfo_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "comp3431_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "comp3431_interfaces/srv/detail/map_info__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers comp3431_interfaces__srv__detail__map_info__rosidl_typesupport_introspection_c__MapInfo_service_members = {
  "comp3431_interfaces__srv",  // service namespace
  "MapInfo",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // comp3431_interfaces__srv__detail__map_info__rosidl_typesupport_introspection_c__MapInfo_Request_message_type_support_handle,
  NULL  // response message
  // comp3431_interfaces__srv__detail__map_info__rosidl_typesupport_introspection_c__MapInfo_Response_message_type_support_handle
};

static rosidl_service_type_support_t comp3431_interfaces__srv__detail__map_info__rosidl_typesupport_introspection_c__MapInfo_service_type_support_handle = {
  0,
  &comp3431_interfaces__srv__detail__map_info__rosidl_typesupport_introspection_c__MapInfo_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, comp3431_interfaces, srv, MapInfo_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, comp3431_interfaces, srv, MapInfo_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_comp3431_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, comp3431_interfaces, srv, MapInfo)() {
  if (!comp3431_interfaces__srv__detail__map_info__rosidl_typesupport_introspection_c__MapInfo_service_type_support_handle.typesupport_identifier) {
    comp3431_interfaces__srv__detail__map_info__rosidl_typesupport_introspection_c__MapInfo_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)comp3431_interfaces__srv__detail__map_info__rosidl_typesupport_introspection_c__MapInfo_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, comp3431_interfaces, srv, MapInfo_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, comp3431_interfaces, srv, MapInfo_Response)()->data;
  }

  return &comp3431_interfaces__srv__detail__map_info__rosidl_typesupport_introspection_c__MapInfo_service_type_support_handle;
}
