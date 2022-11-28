// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mbit_interfaces:msg/HeadState.idl
// generated code does not contain a copyright notice

#ifndef MBIT_INTERFACES__MSG__DETAIL__HEAD_STATE__BUILDER_HPP_
#define MBIT_INTERFACES__MSG__DETAIL__HEAD_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mbit_interfaces/msg/detail/head_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mbit_interfaces
{

namespace msg
{

namespace builder
{

class Init_HeadState_lasty
{
public:
  explicit Init_HeadState_lasty(::mbit_interfaces::msg::HeadState & msg)
  : msg_(msg)
  {}
  ::mbit_interfaces::msg::HeadState lasty(::mbit_interfaces::msg::HeadState::_lasty_type arg)
  {
    msg_.lasty = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mbit_interfaces::msg::HeadState msg_;
};

class Init_HeadState_lastx
{
public:
  Init_HeadState_lastx()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HeadState_lasty lastx(::mbit_interfaces::msg::HeadState::_lastx_type arg)
  {
    msg_.lastx = std::move(arg);
    return Init_HeadState_lasty(msg_);
  }

private:
  ::mbit_interfaces::msg::HeadState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mbit_interfaces::msg::HeadState>()
{
  return mbit_interfaces::msg::builder::Init_HeadState_lastx();
}

}  // namespace mbit_interfaces

#endif  // MBIT_INTERFACES__MSG__DETAIL__HEAD_STATE__BUILDER_HPP_
