// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mbit_interfaces:srv/HeadState.idl
// generated code does not contain a copyright notice

#ifndef MBIT_INTERFACES__SRV__DETAIL__HEAD_STATE__TRAITS_HPP_
#define MBIT_INTERFACES__SRV__DETAIL__HEAD_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mbit_interfaces/srv/detail/head_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace mbit_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const HeadState_Request & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const HeadState_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const HeadState_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace mbit_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use mbit_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const mbit_interfaces::srv::HeadState_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  mbit_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mbit_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const mbit_interfaces::srv::HeadState_Request & msg)
{
  return mbit_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<mbit_interfaces::srv::HeadState_Request>()
{
  return "mbit_interfaces::srv::HeadState_Request";
}

template<>
inline const char * name<mbit_interfaces::srv::HeadState_Request>()
{
  return "mbit_interfaces/srv/HeadState_Request";
}

template<>
struct has_fixed_size<mbit_interfaces::srv::HeadState_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<mbit_interfaces::srv::HeadState_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<mbit_interfaces::srv::HeadState_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace mbit_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const HeadState_Response & msg,
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
  const HeadState_Response & msg,
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

inline std::string to_yaml(const HeadState_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace mbit_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use mbit_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const mbit_interfaces::srv::HeadState_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  mbit_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mbit_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const mbit_interfaces::srv::HeadState_Response & msg)
{
  return mbit_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<mbit_interfaces::srv::HeadState_Response>()
{
  return "mbit_interfaces::srv::HeadState_Response";
}

template<>
inline const char * name<mbit_interfaces::srv::HeadState_Response>()
{
  return "mbit_interfaces/srv/HeadState_Response";
}

template<>
struct has_fixed_size<mbit_interfaces::srv::HeadState_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mbit_interfaces::srv::HeadState_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mbit_interfaces::srv::HeadState_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<mbit_interfaces::srv::HeadState>()
{
  return "mbit_interfaces::srv::HeadState";
}

template<>
inline const char * name<mbit_interfaces::srv::HeadState>()
{
  return "mbit_interfaces/srv/HeadState";
}

template<>
struct has_fixed_size<mbit_interfaces::srv::HeadState>
  : std::integral_constant<
    bool,
    has_fixed_size<mbit_interfaces::srv::HeadState_Request>::value &&
    has_fixed_size<mbit_interfaces::srv::HeadState_Response>::value
  >
{
};

template<>
struct has_bounded_size<mbit_interfaces::srv::HeadState>
  : std::integral_constant<
    bool,
    has_bounded_size<mbit_interfaces::srv::HeadState_Request>::value &&
    has_bounded_size<mbit_interfaces::srv::HeadState_Response>::value
  >
{
};

template<>
struct is_service<mbit_interfaces::srv::HeadState>
  : std::true_type
{
};

template<>
struct is_service_request<mbit_interfaces::srv::HeadState_Request>
  : std::true_type
{
};

template<>
struct is_service_response<mbit_interfaces::srv::HeadState_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MBIT_INTERFACES__SRV__DETAIL__HEAD_STATE__TRAITS_HPP_
