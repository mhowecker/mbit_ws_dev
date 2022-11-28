// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from mbit_interfaces:msg/HeadState.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "mbit_interfaces/msg/detail/head_state__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace mbit_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void HeadState_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) mbit_interfaces::msg::HeadState(_init);
}

void HeadState_fini_function(void * message_memory)
{
  auto typed_message = static_cast<mbit_interfaces::msg::HeadState *>(message_memory);
  typed_message->~HeadState();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember HeadState_message_member_array[2] = {
  {
    "lastx",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mbit_interfaces::msg::HeadState, lastx),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "lasty",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mbit_interfaces::msg::HeadState, lasty),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers HeadState_message_members = {
  "mbit_interfaces::msg",  // message namespace
  "HeadState",  // message name
  2,  // number of fields
  sizeof(mbit_interfaces::msg::HeadState),
  HeadState_message_member_array,  // message members
  HeadState_init_function,  // function to initialize message memory (memory has to be allocated)
  HeadState_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t HeadState_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &HeadState_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace mbit_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<mbit_interfaces::msg::HeadState>()
{
  return &::mbit_interfaces::msg::rosidl_typesupport_introspection_cpp::HeadState_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mbit_interfaces, msg, HeadState)() {
  return &::mbit_interfaces::msg::rosidl_typesupport_introspection_cpp::HeadState_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
