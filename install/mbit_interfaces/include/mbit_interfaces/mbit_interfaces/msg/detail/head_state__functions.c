// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mbit_interfaces:msg/HeadState.idl
// generated code does not contain a copyright notice
#include "mbit_interfaces/msg/detail/head_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `lastx`
// Member `lasty`
#include "rosidl_runtime_c/string_functions.h"

bool
mbit_interfaces__msg__HeadState__init(mbit_interfaces__msg__HeadState * msg)
{
  if (!msg) {
    return false;
  }
  // lastx
  if (!rosidl_runtime_c__String__init(&msg->lastx)) {
    mbit_interfaces__msg__HeadState__fini(msg);
    return false;
  }
  // lasty
  if (!rosidl_runtime_c__String__init(&msg->lasty)) {
    mbit_interfaces__msg__HeadState__fini(msg);
    return false;
  }
  return true;
}

void
mbit_interfaces__msg__HeadState__fini(mbit_interfaces__msg__HeadState * msg)
{
  if (!msg) {
    return;
  }
  // lastx
  rosidl_runtime_c__String__fini(&msg->lastx);
  // lasty
  rosidl_runtime_c__String__fini(&msg->lasty);
}

bool
mbit_interfaces__msg__HeadState__are_equal(const mbit_interfaces__msg__HeadState * lhs, const mbit_interfaces__msg__HeadState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // lastx
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->lastx), &(rhs->lastx)))
  {
    return false;
  }
  // lasty
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->lasty), &(rhs->lasty)))
  {
    return false;
  }
  return true;
}

bool
mbit_interfaces__msg__HeadState__copy(
  const mbit_interfaces__msg__HeadState * input,
  mbit_interfaces__msg__HeadState * output)
{
  if (!input || !output) {
    return false;
  }
  // lastx
  if (!rosidl_runtime_c__String__copy(
      &(input->lastx), &(output->lastx)))
  {
    return false;
  }
  // lasty
  if (!rosidl_runtime_c__String__copy(
      &(input->lasty), &(output->lasty)))
  {
    return false;
  }
  return true;
}

mbit_interfaces__msg__HeadState *
mbit_interfaces__msg__HeadState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mbit_interfaces__msg__HeadState * msg = (mbit_interfaces__msg__HeadState *)allocator.allocate(sizeof(mbit_interfaces__msg__HeadState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mbit_interfaces__msg__HeadState));
  bool success = mbit_interfaces__msg__HeadState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mbit_interfaces__msg__HeadState__destroy(mbit_interfaces__msg__HeadState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mbit_interfaces__msg__HeadState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mbit_interfaces__msg__HeadState__Sequence__init(mbit_interfaces__msg__HeadState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mbit_interfaces__msg__HeadState * data = NULL;

  if (size) {
    data = (mbit_interfaces__msg__HeadState *)allocator.zero_allocate(size, sizeof(mbit_interfaces__msg__HeadState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mbit_interfaces__msg__HeadState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mbit_interfaces__msg__HeadState__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
mbit_interfaces__msg__HeadState__Sequence__fini(mbit_interfaces__msg__HeadState__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      mbit_interfaces__msg__HeadState__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

mbit_interfaces__msg__HeadState__Sequence *
mbit_interfaces__msg__HeadState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mbit_interfaces__msg__HeadState__Sequence * array = (mbit_interfaces__msg__HeadState__Sequence *)allocator.allocate(sizeof(mbit_interfaces__msg__HeadState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mbit_interfaces__msg__HeadState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mbit_interfaces__msg__HeadState__Sequence__destroy(mbit_interfaces__msg__HeadState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mbit_interfaces__msg__HeadState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mbit_interfaces__msg__HeadState__Sequence__are_equal(const mbit_interfaces__msg__HeadState__Sequence * lhs, const mbit_interfaces__msg__HeadState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mbit_interfaces__msg__HeadState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mbit_interfaces__msg__HeadState__Sequence__copy(
  const mbit_interfaces__msg__HeadState__Sequence * input,
  mbit_interfaces__msg__HeadState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mbit_interfaces__msg__HeadState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mbit_interfaces__msg__HeadState * data =
      (mbit_interfaces__msg__HeadState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mbit_interfaces__msg__HeadState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mbit_interfaces__msg__HeadState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mbit_interfaces__msg__HeadState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
