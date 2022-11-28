// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mbit_interfaces:msg/HeadState.idl
// generated code does not contain a copyright notice

#ifndef MBIT_INTERFACES__MSG__DETAIL__HEAD_STATE__STRUCT_H_
#define MBIT_INTERFACES__MSG__DETAIL__HEAD_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'lastx'
// Member 'lasty'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/HeadState in the package mbit_interfaces.
typedef struct mbit_interfaces__msg__HeadState
{
  rosidl_runtime_c__String lastx;
  rosidl_runtime_c__String lasty;
} mbit_interfaces__msg__HeadState;

// Struct for a sequence of mbit_interfaces__msg__HeadState.
typedef struct mbit_interfaces__msg__HeadState__Sequence
{
  mbit_interfaces__msg__HeadState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mbit_interfaces__msg__HeadState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MBIT_INTERFACES__MSG__DETAIL__HEAD_STATE__STRUCT_H_
