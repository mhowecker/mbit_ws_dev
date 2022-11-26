// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mbit_interfaces:srv/HeadState.idl
// generated code does not contain a copyright notice

#ifndef MBIT_INTERFACES__SRV__DETAIL__HEAD_STATE__BUILDER_HPP_
#define MBIT_INTERFACES__SRV__DETAIL__HEAD_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mbit_interfaces/srv/detail/head_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mbit_interfaces
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mbit_interfaces::srv::HeadState_Request>()
{
  return ::mbit_interfaces::srv::HeadState_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace mbit_interfaces


namespace mbit_interfaces
{

namespace srv
{

namespace builder
{

class Init_HeadState_Response_lasty
{
public:
  explicit Init_HeadState_Response_lasty(::mbit_interfaces::srv::HeadState_Response & msg)
  : msg_(msg)
  {}
  ::mbit_interfaces::srv::HeadState_Response lasty(::mbit_interfaces::srv::HeadState_Response::_lasty_type arg)
  {
    msg_.lasty = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mbit_interfaces::srv::HeadState_Response msg_;
};

class Init_HeadState_Response_lastx
{
public:
  Init_HeadState_Response_lastx()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HeadState_Response_lasty lastx(::mbit_interfaces::srv::HeadState_Response::_lastx_type arg)
  {
    msg_.lastx = std::move(arg);
    return Init_HeadState_Response_lasty(msg_);
  }

private:
  ::mbit_interfaces::srv::HeadState_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mbit_interfaces::srv::HeadState_Response>()
{
  return mbit_interfaces::srv::builder::Init_HeadState_Response_lastx();
}

}  // namespace mbit_interfaces

#endif  // MBIT_INTERFACES__SRV__DETAIL__HEAD_STATE__BUILDER_HPP_
