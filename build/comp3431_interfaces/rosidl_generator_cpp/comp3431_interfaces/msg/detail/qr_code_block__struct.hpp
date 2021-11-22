// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from comp3431_interfaces:msg/QRCodeBlock.idl
// generated code does not contain a copyright notice

#ifndef COMP3431_INTERFACES__MSG__DETAIL__QR_CODE_BLOCK__STRUCT_HPP_
#define COMP3431_INTERFACES__MSG__DETAIL__QR_CODE_BLOCK__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__comp3431_interfaces__msg__QRCodeBlock __attribute__((deprecated))
#else
# define DEPRECATED__comp3431_interfaces__msg__QRCodeBlock __declspec(deprecated)
#endif

namespace comp3431_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct QRCodeBlock_
{
  using Type = QRCodeBlock_<ContainerAllocator>;

  explicit QRCodeBlock_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->text = "";
    }
  }

  explicit QRCodeBlock_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : text(_alloc),
    pose(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->text = "";
    }
  }

  // field types and members
  using _text_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _text_type text;
  using _pose_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _pose_type pose;

  // setters for named parameter idiom
  Type & set__text(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->text = _arg;
    return *this;
  }
  Type & set__pose(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->pose = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    comp3431_interfaces::msg::QRCodeBlock_<ContainerAllocator> *;
  using ConstRawPtr =
    const comp3431_interfaces::msg::QRCodeBlock_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<comp3431_interfaces::msg::QRCodeBlock_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<comp3431_interfaces::msg::QRCodeBlock_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      comp3431_interfaces::msg::QRCodeBlock_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<comp3431_interfaces::msg::QRCodeBlock_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      comp3431_interfaces::msg::QRCodeBlock_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<comp3431_interfaces::msg::QRCodeBlock_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<comp3431_interfaces::msg::QRCodeBlock_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<comp3431_interfaces::msg::QRCodeBlock_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__comp3431_interfaces__msg__QRCodeBlock
    std::shared_ptr<comp3431_interfaces::msg::QRCodeBlock_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__comp3431_interfaces__msg__QRCodeBlock
    std::shared_ptr<comp3431_interfaces::msg::QRCodeBlock_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const QRCodeBlock_ & other) const
  {
    if (this->text != other.text) {
      return false;
    }
    if (this->pose != other.pose) {
      return false;
    }
    return true;
  }
  bool operator!=(const QRCodeBlock_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct QRCodeBlock_

// alias to use template instance with default allocator
using QRCodeBlock =
  comp3431_interfaces::msg::QRCodeBlock_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace comp3431_interfaces

#endif  // COMP3431_INTERFACES__MSG__DETAIL__QR_CODE_BLOCK__STRUCT_HPP_
