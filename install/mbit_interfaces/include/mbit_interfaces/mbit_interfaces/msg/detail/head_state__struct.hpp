// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mbit_interfaces:msg/HeadState.idl
// generated code does not contain a copyright notice

#ifndef MBIT_INTERFACES__MSG__DETAIL__HEAD_STATE__STRUCT_HPP_
#define MBIT_INTERFACES__MSG__DETAIL__HEAD_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__mbit_interfaces__msg__HeadState __attribute__((deprecated))
#else
# define DEPRECATED__mbit_interfaces__msg__HeadState __declspec(deprecated)
#endif

namespace mbit_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct HeadState_
{
  using Type = HeadState_<ContainerAllocator>;

  explicit HeadState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->lastx = "";
      this->lasty = "";
    }
  }

  explicit HeadState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : lastx(_alloc),
    lasty(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->lastx = "";
      this->lasty = "";
    }
  }

  // field types and members
  using _lastx_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _lastx_type lastx;
  using _lasty_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _lasty_type lasty;

  // setters for named parameter idiom
  Type & set__lastx(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->lastx = _arg;
    return *this;
  }
  Type & set__lasty(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->lasty = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mbit_interfaces::msg::HeadState_<ContainerAllocator> *;
  using ConstRawPtr =
    const mbit_interfaces::msg::HeadState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mbit_interfaces::msg::HeadState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mbit_interfaces::msg::HeadState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mbit_interfaces::msg::HeadState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mbit_interfaces::msg::HeadState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mbit_interfaces::msg::HeadState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mbit_interfaces::msg::HeadState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mbit_interfaces::msg::HeadState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mbit_interfaces::msg::HeadState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mbit_interfaces__msg__HeadState
    std::shared_ptr<mbit_interfaces::msg::HeadState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mbit_interfaces__msg__HeadState
    std::shared_ptr<mbit_interfaces::msg::HeadState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const HeadState_ & other) const
  {
    if (this->lastx != other.lastx) {
      return false;
    }
    if (this->lasty != other.lasty) {
      return false;
    }
    return true;
  }
  bool operator!=(const HeadState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct HeadState_

// alias to use template instance with default allocator
using HeadState =
  mbit_interfaces::msg::HeadState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mbit_interfaces

#endif  // MBIT_INTERFACES__MSG__DETAIL__HEAD_STATE__STRUCT_HPP_
