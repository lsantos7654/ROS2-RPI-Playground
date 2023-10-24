// generated from rosidl_generator_c/resource/idl__type_support.c.em
// with input from rpi_gpio_msgs:srv/LEDToggle.idl
// generated code does not contain a copyright notice

#include <string.h>

#include "rosidl_typesupport_interface/macros.h"
#include "rpi_gpio_msgs/srv/detail/led_toggle__type_support.h"
#include "rpi_gpio_msgs/srv/detail/led_toggle__functions.h"
#include "rpi_gpio_msgs/srv/detail/led_toggle__struct.h"

#ifdef __cplusplus
extern "C"
{
#endif


void *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  rpi_gpio_msgs,
  srv,
  LEDToggle
)(
  const rosidl_service_introspection_info_t * info,
  rcutils_allocator_t * allocator,
  const void * request_message,
  const void * response_message)
{
  if (!allocator || !info) {
    return NULL;
  }
  rpi_gpio_msgs__srv__LEDToggle_Event * event_msg = (rpi_gpio_msgs__srv__LEDToggle_Event *)(allocator->allocate(sizeof(rpi_gpio_msgs__srv__LEDToggle_Event), allocator->state));
  if (!rpi_gpio_msgs__srv__LEDToggle_Event__init(event_msg)) {
    allocator->deallocate(event_msg, allocator->state);
    return NULL;
  }

  event_msg->info.event_type = info->event_type;
  event_msg->info.sequence_number = info->sequence_number;
  event_msg->info.stamp.sec = info->stamp_sec;
  event_msg->info.stamp.nanosec = info->stamp_nanosec;
  memcpy(event_msg->info.client_gid, info->client_gid, 16);
  if (request_message) {
    rpi_gpio_msgs__srv__LEDToggle_Request__Sequence__init(
      &event_msg->request,
      1);
    if (!rpi_gpio_msgs__srv__LEDToggle_Request__copy((const rpi_gpio_msgs__srv__LEDToggle_Request *)(request_message), event_msg->request.data)) {
      allocator->deallocate(event_msg, allocator->state);
      return NULL;
    }
  }
  if (response_message) {
    rpi_gpio_msgs__srv__LEDToggle_Response__Sequence__init(
      &event_msg->response,
      1);
    if (!rpi_gpio_msgs__srv__LEDToggle_Response__copy((const rpi_gpio_msgs__srv__LEDToggle_Response *)(response_message), event_msg->response.data)) {
      allocator->deallocate(event_msg, allocator->state);
      return NULL;
    }
  }
  return event_msg;
}

// Forward declare the get type support functions for this type.
bool
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  rpi_gpio_msgs,
  srv,
  LEDToggle
)(
  void * event_msg,
  rcutils_allocator_t * allocator)
{
  if (!allocator) {
    return false;
  }
  if (NULL == event_msg) {
    return false;
  }
  rpi_gpio_msgs__srv__LEDToggle_Event * _event_msg = (rpi_gpio_msgs__srv__LEDToggle_Event *)(event_msg);

  rpi_gpio_msgs__srv__LEDToggle_Event__fini((rpi_gpio_msgs__srv__LEDToggle_Event *)(_event_msg));
  if (_event_msg->request.data) {
    allocator->deallocate(_event_msg->request.data, allocator->state);
  }
  if (_event_msg->response.data) {
    allocator->deallocate(_event_msg->response.data, allocator->state);
  }
  allocator->deallocate(_event_msg, allocator->state);
  return true;
}

#ifdef __cplusplus
}
#endif
