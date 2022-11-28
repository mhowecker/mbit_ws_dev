// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from mbit_interfaces:msg/HeadState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "mbit_interfaces/msg/detail/head_state__rosidl_typesupport_introspection_c.h"
#include "mbit_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "mbit_interfaces/msg/detail/head_state__functions.h"
#include "mbit_interfaces/msg/detail/head_state__struct.h"


// Include directives for member types
// Member `lastx`
// Member `lasty`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void mbit_interfaces__msg__HeadState__rosidl_typesupport_introspection_c__HeadState_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mbit_interfaces__msg__HeadState__init(message_memory);
}

void mbit_interfaces__msg__HeadState__rosidl_typesupport_introspection_c__HeadState_fini_function(void * message_memory)
{
  mbit_interfaces__msg__HeadState__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember mbit_interfaces__msg__HeadState__rosidl_typesupport_introspection_c__HeadState_message_member_array[2] = {
  {
    "lastx",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mbit_interfaces__msg__HeadState, lastx),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lasty",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mbit_interfaces__msg__HeadState, lasty),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers mbit_interfaces__msg__HeadState__rosidl_typesupport_introspection_c__HeadState_message_members = {
  "mbit_interfaces__msg",  // message namespace
  "HeadState",  // message name
  2,  // number of fields
  sizeof(mbit_interfaces__msg__HeadState),
  mbit_interfaces__msg__HeadState__rosidl_typesupport_introspection_c__HeadState_message_member_array,  // message members
  mbit_interfaces__msg__HeadState__rosidl_typesupport_introspection_c__HeadState_init_function,  // function to initialize message memory (memory has to be allocated)
  mbit_interfaces__msg__HeadState__rosidl_typesupport_introspection_c__HeadState_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t mbit_interfaces__msg__HeadState__rosidl_typesupport_introspection_c__HeadState_message_type_support_handle = {
  0,
  &mbit_interfaces__msg__HeadState__rosidl_typesupport_introspection_c__HeadState_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mbit_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mbit_interfaces, msg, HeadState)() {
  if (!mbit_interfaces__msg__HeadState__rosidl_typesupport_introspection_c__HeadState_message_type_support_handle.typesupport_identifier) {
    mbit_interfaces__msg__HeadState__rosidl_typesupport_introspection_c__HeadState_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &mbit_interfaces__msg__HeadState__rosidl_typesupport_introspection_c__HeadState_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
