// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mbit_interfaces:msg/HeadState.idl
// generated code does not contain a copyright notice

#ifndef MBIT_INTERFACES__MSG__DETAIL__HEAD_STATE__TRAITS_HPP_
#define MBIT_INTERFACES__MSG__DETAIL__HEAD_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mbit_interfaces/msg/detail/head_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace mbit_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const HeadState & msg,
  std::ostream & out)
{
  out << "{";
  // member: lastx
  {
    out << "lastx: ";
    rosidl_generator_traits::value_to_yaml(msg.lastx, out);
    out << ", ";
  }

  // member: lasty
  {
    out << "lasty: ";
    rosidl_generator_traits::value_to_yaml(msg.lasty, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const HeadState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: lastx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lastx: ";
    rosidl_generator_traits::value_to_yaml(msg.lastx, out);
    out << "\n";
  }

  // member: lasty
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lasty: ";
    rosidl_generator_traits::value_to_yaml(msg.lasty, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const HeadState & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace mbit_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use mbit_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const mbit_interfaces::msg::HeadState & msg,
  std::ostream & out, size_t indentation = 0)
{
  mbit_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mbit_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const mbit_interfaces::msg::HeadState & msg)
{
  return mbit_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mbit_interfaces::msg::HeadState>()
{
  return "mbit_interfaces::msg::HeadState";
}

template<>
inline const char * name<mbit_interfaces::msg::HeadState>()
{
  return "mbit_interfaces/msg/HeadState";
}

template<>
struct has_fixed_size<mbit_interfaces::msg::HeadState>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mbit_interfaces::msg::HeadState>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mbit_interfaces::msg::HeadState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MBIT_INTERFACES__MSG__DETAIL__HEAD_STATE__TRAITS_HPP_
