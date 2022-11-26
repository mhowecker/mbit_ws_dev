// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mbit_interfaces:srv/HeadState.idl
// generated code does not contain a copyright notice

#ifndef MBIT_INTERFACES__SRV__DETAIL__HEAD_STATE__STRUCT_HPP_
#define MBIT_INTERFACES__SRV__DETAIL__HEAD_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__mbit_interfaces__srv__HeadState_Request __attribute__((deprecated))
#else
# define DEPRECATED__mbit_interfaces__srv__HeadState_Request __declspec(deprecated)
#endif

namespace mbit_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct HeadState_Request_
{
  using Type = HeadState_Request_<ContainerAllocator>;

  explicit HeadState_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit HeadState_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    mbit_interfaces::srv::HeadState_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const mbit_interfaces::srv::HeadState_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mbit_interfaces::srv::HeadState_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mbit_interfaces::srv::HeadState_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mbit_interfaces::srv::HeadState_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mbit_interfaces::srv::HeadState_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mbit_interfaces::srv::HeadState_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mbit_interfaces::srv::HeadState_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mbit_interfaces::srv::HeadState_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mbit_interfaces::srv::HeadState_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mbit_interfaces__srv__HeadState_Request
    std::shared_ptr<mbit_interfaces::srv::HeadState_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mbit_interfaces__srv__HeadState_Request
    std::shared_ptr<mbit_interfaces::srv::HeadState_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const HeadState_Request_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const HeadState_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct HeadState_Request_

// alias to use template instance with default allocator
using HeadState_Request =
  mbit_interfaces::srv::HeadState_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace mbit_interfaces


#ifndef _WIN32
# define DEPRECATED__mbit_interfaces__srv__HeadState_Response __attribute__((deprecated))
#else
# define DEPRECATED__mbit_interfaces__srv__HeadState_Response __declspec(deprecated)
#endif

namespace mbit_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct HeadState_Response_
{
  using Type = HeadState_Response_<ContainerAllocator>;

  explicit HeadState_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->lastx = "";
      this->lasty = "";
    }
  }

  explicit HeadState_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    mbit_interfaces::srv::HeadState_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const mbit_interfaces::srv::HeadState_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mbit_interfaces::srv::HeadState_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mbit_interfaces::srv::HeadState_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mbit_interfaces::srv::HeadState_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mbit_interfaces::srv::HeadState_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mbit_interfaces::srv::HeadState_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mbit_interfaces::srv::HeadState_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mbit_interfaces::srv::HeadState_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mbit_interfaces::srv::HeadState_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mbit_interfaces__srv__HeadState_Response
    std::shared_ptr<mbit_interfaces::srv::HeadState_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mbit_interfaces__srv__HeadState_Response
    std::shared_ptr<mbit_interfaces::srv::HeadState_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const HeadState_Response_ & other) const
  {
    if (this->lastx != other.lastx) {
      return false;
    }
    if (this->lasty != other.lasty) {
      return false;
    }
    return true;
  }
  bool operator!=(const HeadState_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct HeadState_Response_

// alias to use template instance with default allocator
using HeadState_Response =
  mbit_interfaces::srv::HeadState_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace mbit_interfaces

namespace mbit_interfaces
{

namespace srv
{

struct HeadState
{
  using Request = mbit_interfaces::srv::HeadState_Request;
  using Response = mbit_interfaces::srv::HeadState_Response;
};

}  // namespace srv

}  // namespace mbit_interfaces

#endif  // MBIT_INTERFACES__SRV__DETAIL__HEAD_STATE__STRUCT_HPP_
