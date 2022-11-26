// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mbit_interfaces:srv/HeadState.idl
// generated code does not contain a copyright notice

#ifndef MBIT_INTERFACES__SRV__DETAIL__HEAD_STATE__STRUCT_H_
#define MBIT_INTERFACES__SRV__DETAIL__HEAD_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/HeadState in the package mbit_interfaces.
typedef struct mbit_interfaces__srv__HeadState_Request
{
  uint8_t structure_needs_at_least_one_member;
} mbit_interfaces__srv__HeadState_Request;

// Struct for a sequence of mbit_interfaces__srv__HeadState_Request.
typedef struct mbit_interfaces__srv__HeadState_Request__Sequence
{
  mbit_interfaces__srv__HeadState_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mbit_interfaces__srv__HeadState_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'lastx'
// Member 'lasty'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/HeadState in the package mbit_interfaces.
typedef struct mbit_interfaces__srv__HeadState_Response
{
  rosidl_runtime_c__String lastx;
  rosidl_runtime_c__String lasty;
} mbit_interfaces__srv__HeadState_Response;

// Struct for a sequence of mbit_interfaces__srv__HeadState_Response.
typedef struct mbit_interfaces__srv__HeadState_Response__Sequence
{
  mbit_interfaces__srv__HeadState_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mbit_interfaces__srv__HeadState_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MBIT_INTERFACES__SRV__DETAIL__HEAD_STATE__STRUCT_H_
