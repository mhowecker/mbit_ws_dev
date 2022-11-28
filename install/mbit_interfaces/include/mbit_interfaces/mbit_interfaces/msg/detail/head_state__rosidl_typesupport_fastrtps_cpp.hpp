// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from mbit_interfaces:msg/HeadState.idl
// generated code does not contain a copyright notice

#ifndef MBIT_INTERFACES__MSG__DETAIL__HEAD_STATE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define MBIT_INTERFACES__MSG__DETAIL__HEAD_STATE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "mbit_interfaces/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "mbit_interfaces/msg/detail/head_state__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace mbit_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mbit_interfaces
cdr_serialize(
  const mbit_interfaces::msg::HeadState & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mbit_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  mbit_interfaces::msg::HeadState & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mbit_interfaces
get_serialized_size(
  const mbit_interfaces::msg::HeadState & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mbit_interfaces
max_serialized_size_HeadState(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace mbit_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mbit_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mbit_interfaces, msg, HeadState)();

#ifdef __cplusplus
}
#endif

#endif  // MBIT_INTERFACES__MSG__DETAIL__HEAD_STATE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
