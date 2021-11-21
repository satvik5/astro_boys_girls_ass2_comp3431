// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from comp3431_interfaces:srv/MapInfo.idl
// generated code does not contain a copyright notice

#ifndef COMP3431_INTERFACES__SRV__DETAIL__MAP_INFO__TRAITS_HPP_
#define COMP3431_INTERFACES__SRV__DETAIL__MAP_INFO__TRAITS_HPP_

#include "comp3431_interfaces/srv/detail/map_info__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<comp3431_interfaces::srv::MapInfo_Request>()
{
  return "comp3431_interfaces::srv::MapInfo_Request";
}

template<>
inline const char * name<comp3431_interfaces::srv::MapInfo_Request>()
{
  return "comp3431_interfaces/srv/MapInfo_Request";
}

template<>
struct has_fixed_size<comp3431_interfaces::srv::MapInfo_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<comp3431_interfaces::srv::MapInfo_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<comp3431_interfaces::srv::MapInfo_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<comp3431_interfaces::srv::MapInfo_Response>()
{
  return "comp3431_interfaces::srv::MapInfo_Response";
}

template<>
inline const char * name<comp3431_interfaces::srv::MapInfo_Response>()
{
  return "comp3431_interfaces/srv/MapInfo_Response";
}

template<>
struct has_fixed_size<comp3431_interfaces::srv::MapInfo_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<comp3431_interfaces::srv::MapInfo_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<comp3431_interfaces::srv::MapInfo_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<comp3431_interfaces::srv::MapInfo>()
{
  return "comp3431_interfaces::srv::MapInfo";
}

template<>
inline const char * name<comp3431_interfaces::srv::MapInfo>()
{
  return "comp3431_interfaces/srv/MapInfo";
}

template<>
struct has_fixed_size<comp3431_interfaces::srv::MapInfo>
  : std::integral_constant<
    bool,
    has_fixed_size<comp3431_interfaces::srv::MapInfo_Request>::value &&
    has_fixed_size<comp3431_interfaces::srv::MapInfo_Response>::value
  >
{
};

template<>
struct has_bounded_size<comp3431_interfaces::srv::MapInfo>
  : std::integral_constant<
    bool,
    has_bounded_size<comp3431_interfaces::srv::MapInfo_Request>::value &&
    has_bounded_size<comp3431_interfaces::srv::MapInfo_Response>::value
  >
{
};

template<>
struct is_service<comp3431_interfaces::srv::MapInfo>
  : std::true_type
{
};

template<>
struct is_service_request<comp3431_interfaces::srv::MapInfo_Request>
  : std::true_type
{
};

template<>
struct is_service_response<comp3431_interfaces::srv::MapInfo_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // COMP3431_INTERFACES__SRV__DETAIL__MAP_INFO__TRAITS_HPP_
