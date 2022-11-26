// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from mbit_interfaces:srv/HeadState.idl
// generated code does not contain a copyright notice
#include "mbit_interfaces/srv/detail/head_state__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "mbit_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "mbit_interfaces/srv/detail/head_state__struct.h"
#include "mbit_interfaces/srv/detail/head_state__functions.h"
#include "fastcdr/Cdr.h"

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

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _HeadState_Request__ros_msg_type = mbit_interfaces__srv__HeadState_Request;

static bool _HeadState_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _HeadState_Request__ros_msg_type * ros_message = static_cast<const _HeadState_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: structure_needs_at_least_one_member
  {
    cdr << ros_message->structure_needs_at_least_one_member;
  }

  return true;
}

static bool _HeadState_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _HeadState_Request__ros_msg_type * ros_message = static_cast<_HeadState_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: structure_needs_at_least_one_member
  {
    cdr >> ros_message->structure_needs_at_least_one_member;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mbit_interfaces
size_t get_serialized_size_mbit_interfaces__srv__HeadState_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _HeadState_Request__ros_msg_type * ros_message = static_cast<const _HeadState_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name structure_needs_at_least_one_member
  {
    size_t item_size = sizeof(ros_message->structure_needs_at_least_one_member);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _HeadState_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_mbit_interfaces__srv__HeadState_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mbit_interfaces
size_t max_serialized_size_mbit_interfaces__srv__HeadState_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: structure_needs_at_least_one_member
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _HeadState_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_mbit_interfaces__srv__HeadState_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_HeadState_Request = {
  "mbit_interfaces::srv",
  "HeadState_Request",
  _HeadState_Request__cdr_serialize,
  _HeadState_Request__cdr_deserialize,
  _HeadState_Request__get_serialized_size,
  _HeadState_Request__max_serialized_size
};

static rosidl_message_type_support_t _HeadState_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_HeadState_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mbit_interfaces, srv, HeadState_Request)() {
  return &_HeadState_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "mbit_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "mbit_interfaces/srv/detail/head_state__struct.h"
// already included above
// #include "mbit_interfaces/srv/detail/head_state__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

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

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // lastx, lasty
#include "rosidl_runtime_c/string_functions.h"  // lastx, lasty

// forward declare type support functions


using _HeadState_Response__ros_msg_type = mbit_interfaces__srv__HeadState_Response;

static bool _HeadState_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _HeadState_Response__ros_msg_type * ros_message = static_cast<const _HeadState_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: lastx
  {
    const rosidl_runtime_c__String * str = &ros_message->lastx;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: lasty
  {
    const rosidl_runtime_c__String * str = &ros_message->lasty;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _HeadState_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _HeadState_Response__ros_msg_type * ros_message = static_cast<_HeadState_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: lastx
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->lastx.data) {
      rosidl_runtime_c__String__init(&ros_message->lastx);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->lastx,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'lastx'\n");
      return false;
    }
  }

  // Field name: lasty
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->lasty.data) {
      rosidl_runtime_c__String__init(&ros_message->lasty);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->lasty,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'lasty'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mbit_interfaces
size_t get_serialized_size_mbit_interfaces__srv__HeadState_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _HeadState_Response__ros_msg_type * ros_message = static_cast<const _HeadState_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name lastx
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->lastx.size + 1);
  // field.name lasty
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->lasty.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _HeadState_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_mbit_interfaces__srv__HeadState_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mbit_interfaces
size_t max_serialized_size_mbit_interfaces__srv__HeadState_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: lastx
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: lasty
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _HeadState_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_mbit_interfaces__srv__HeadState_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_HeadState_Response = {
  "mbit_interfaces::srv",
  "HeadState_Response",
  _HeadState_Response__cdr_serialize,
  _HeadState_Response__cdr_deserialize,
  _HeadState_Response__get_serialized_size,
  _HeadState_Response__max_serialized_size
};

static rosidl_message_type_support_t _HeadState_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_HeadState_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mbit_interfaces, srv, HeadState_Response)() {
  return &_HeadState_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "mbit_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "mbit_interfaces/srv/head_state.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t HeadState__callbacks = {
  "mbit_interfaces::srv",
  "HeadState",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mbit_interfaces, srv, HeadState_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mbit_interfaces, srv, HeadState_Response)(),
};

static rosidl_service_type_support_t HeadState__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &HeadState__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mbit_interfaces, srv, HeadState)() {
  return &HeadState__handle;
}

#if defined(__cplusplus)
}
#endif
