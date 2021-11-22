// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from comp3431_interfaces:srv/MapInfo.idl
// generated code does not contain a copyright notice

#ifndef COMP3431_INTERFACES__SRV__DETAIL__MAP_INFO__STRUCT_HPP_
#define COMP3431_INTERFACES__SRV__DETAIL__MAP_INFO__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'blocks'
#include "comp3431_interfaces/msg/detail/qr_code_block__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__comp3431_interfaces__srv__MapInfo_Request __attribute__((deprecated))
#else
# define DEPRECATED__comp3431_interfaces__srv__MapInfo_Request __declspec(deprecated)
#endif

namespace comp3431_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct MapInfo_Request_
{
  using Type = MapInfo_Request_<ContainerAllocator>;

  explicit MapInfo_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit MapInfo_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _blocks_type =
    std::vector<comp3431_interfaces::msg::QRCodeBlock_<ContainerAllocator>, typename ContainerAllocator::template rebind<comp3431_interfaces::msg::QRCodeBlock_<ContainerAllocator>>::other>;
  _blocks_type blocks;

  // setters for named parameter idiom
  Type & set__blocks(
    const std::vector<comp3431_interfaces::msg::QRCodeBlock_<ContainerAllocator>, typename ContainerAllocator::template rebind<comp3431_interfaces::msg::QRCodeBlock_<ContainerAllocator>>::other> & _arg)
  {
    this->blocks = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    comp3431_interfaces::srv::MapInfo_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const comp3431_interfaces::srv::MapInfo_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<comp3431_interfaces::srv::MapInfo_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<comp3431_interfaces::srv::MapInfo_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      comp3431_interfaces::srv::MapInfo_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<comp3431_interfaces::srv::MapInfo_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      comp3431_interfaces::srv::MapInfo_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<comp3431_interfaces::srv::MapInfo_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<comp3431_interfaces::srv::MapInfo_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<comp3431_interfaces::srv::MapInfo_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__comp3431_interfaces__srv__MapInfo_Request
    std::shared_ptr<comp3431_interfaces::srv::MapInfo_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__comp3431_interfaces__srv__MapInfo_Request
    std::shared_ptr<comp3431_interfaces::srv::MapInfo_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MapInfo_Request_ & other) const
  {
    if (this->blocks != other.blocks) {
      return false;
    }
    return true;
  }
  bool operator!=(const MapInfo_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MapInfo_Request_

// alias to use template instance with default allocator
using MapInfo_Request =
  comp3431_interfaces::srv::MapInfo_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace comp3431_interfaces


#ifndef _WIN32
# define DEPRECATED__comp3431_interfaces__srv__MapInfo_Response __attribute__((deprecated))
#else
# define DEPRECATED__comp3431_interfaces__srv__MapInfo_Response __declspec(deprecated)
#endif

namespace comp3431_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct MapInfo_Response_
{
  using Type = MapInfo_Response_<ContainerAllocator>;

  explicit MapInfo_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit MapInfo_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    comp3431_interfaces::srv::MapInfo_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const comp3431_interfaces::srv::MapInfo_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<comp3431_interfaces::srv::MapInfo_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<comp3431_interfaces::srv::MapInfo_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      comp3431_interfaces::srv::MapInfo_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<comp3431_interfaces::srv::MapInfo_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      comp3431_interfaces::srv::MapInfo_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<comp3431_interfaces::srv::MapInfo_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<comp3431_interfaces::srv::MapInfo_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<comp3431_interfaces::srv::MapInfo_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__comp3431_interfaces__srv__MapInfo_Response
    std::shared_ptr<comp3431_interfaces::srv::MapInfo_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__comp3431_interfaces__srv__MapInfo_Response
    std::shared_ptr<comp3431_interfaces::srv::MapInfo_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MapInfo_Response_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const MapInfo_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MapInfo_Response_

// alias to use template instance with default allocator
using MapInfo_Response =
  comp3431_interfaces::srv::MapInfo_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace comp3431_interfaces

namespace comp3431_interfaces
{

namespace srv
{

struct MapInfo
{
  using Request = comp3431_interfaces::srv::MapInfo_Request;
  using Response = comp3431_interfaces::srv::MapInfo_Response;
};

}  // namespace srv

}  // namespace comp3431_interfaces

#endif  // COMP3431_INTERFACES__SRV__DETAIL__MAP_INFO__STRUCT_HPP_
