// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rpi_gpio_msgs:srv/LEDToggle.idl
// generated code does not contain a copyright notice

#ifndef RPI_GPIO_MSGS__SRV__DETAIL__LED_TOGGLE__STRUCT_H_
#define RPI_GPIO_MSGS__SRV__DETAIL__LED_TOGGLE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/LEDToggle in the package rpi_gpio_msgs.
typedef struct rpi_gpio_msgs__srv__LEDToggle_Request
{
  int32_t gpiochoice;
  bool toggle;
} rpi_gpio_msgs__srv__LEDToggle_Request;

// Struct for a sequence of rpi_gpio_msgs__srv__LEDToggle_Request.
typedef struct rpi_gpio_msgs__srv__LEDToggle_Request__Sequence
{
  rpi_gpio_msgs__srv__LEDToggle_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rpi_gpio_msgs__srv__LEDToggle_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/LEDToggle in the package rpi_gpio_msgs.
typedef struct rpi_gpio_msgs__srv__LEDToggle_Response
{
  bool success;
} rpi_gpio_msgs__srv__LEDToggle_Response;

// Struct for a sequence of rpi_gpio_msgs__srv__LEDToggle_Response.
typedef struct rpi_gpio_msgs__srv__LEDToggle_Response__Sequence
{
  rpi_gpio_msgs__srv__LEDToggle_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rpi_gpio_msgs__srv__LEDToggle_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  rpi_gpio_msgs__srv__LEDToggle_Event__request__MAX_SIZE = 1
};
// response
enum
{
  rpi_gpio_msgs__srv__LEDToggle_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/LEDToggle in the package rpi_gpio_msgs.
typedef struct rpi_gpio_msgs__srv__LEDToggle_Event
{
  service_msgs__msg__ServiceEventInfo info;
  rpi_gpio_msgs__srv__LEDToggle_Request__Sequence request;
  rpi_gpio_msgs__srv__LEDToggle_Response__Sequence response;
} rpi_gpio_msgs__srv__LEDToggle_Event;

// Struct for a sequence of rpi_gpio_msgs__srv__LEDToggle_Event.
typedef struct rpi_gpio_msgs__srv__LEDToggle_Event__Sequence
{
  rpi_gpio_msgs__srv__LEDToggle_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rpi_gpio_msgs__srv__LEDToggle_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RPI_GPIO_MSGS__SRV__DETAIL__LED_TOGGLE__STRUCT_H_
