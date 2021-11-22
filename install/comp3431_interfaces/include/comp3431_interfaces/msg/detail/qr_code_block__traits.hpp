// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from comp3431_interfaces:msg/QRCodeBlock.idl
// generated code does not contain a copyright notice

#ifndef COMP3431_INTERFACES__MSG__DETAIL__QR_CODE_BLOCK__TRAITS_HPP_
#define COMP3431_INTERFACES__MSG__DETAIL__QR_CODE_BLOCK__TRAITS_HPP_

#include "comp3431_interfaces/msg/detail/qr_code_block__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<comp3431_interfaces::msg::QRCodeBlock>()
{
  return "comp3431_interfaces::msg::QRCodeBlock";
}

template<>
inline const char * name<comp3431_interfaces::msg::QRCodeBlock>()
{
  return "comp3431_interfaces/msg/QRCodeBlock";
}

template<>
struct has_fixed_size<comp3431_interfaces::msg::QRCodeBlock>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<comp3431_interfaces::msg::QRCodeBlock>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<comp3431_interfaces::msg::QRCodeBlock>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // COMP3431_INTERFACES__MSG__DETAIL__QR_CODE_BLOCK__TRAITS_HPP_
