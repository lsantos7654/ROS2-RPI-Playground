// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from rpi_gpio_msgs:srv/LEDToggle.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rpi_gpio_msgs/srv/detail/led_toggle__struct.h"
#include "rpi_gpio_msgs/srv/detail/led_toggle__type_support.h"
#include "rpi_gpio_msgs/srv/detail/led_toggle__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace rpi_gpio_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _LEDToggle_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _LEDToggle_Request_type_support_ids_t;

static const _LEDToggle_Request_type_support_ids_t _LEDToggle_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _LEDToggle_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _LEDToggle_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _LEDToggle_Request_type_support_symbol_names_t _LEDToggle_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rpi_gpio_msgs, srv, LEDToggle_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rpi_gpio_msgs, srv, LEDToggle_Request)),
  }
};

typedef struct _LEDToggle_Request_type_support_data_t
{
  void * data[2];
} _LEDToggle_Request_type_support_data_t;

static _LEDToggle_Request_type_support_data_t _LEDToggle_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _LEDToggle_Request_message_typesupport_map = {
  2,
  "rpi_gpio_msgs",
  &_LEDToggle_Request_message_typesupport_ids.typesupport_identifier[0],
  &_LEDToggle_Request_message_typesupport_symbol_names.symbol_name[0],
  &_LEDToggle_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t LEDToggle_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_LEDToggle_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &rpi_gpio_msgs__srv__LEDToggle_Request__get_type_hash,
  &rpi_gpio_msgs__srv__LEDToggle_Request__get_type_description,
  &rpi_gpio_msgs__srv__LEDToggle_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace rpi_gpio_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, rpi_gpio_msgs, srv, LEDToggle_Request)() {
  return &::rpi_gpio_msgs::srv::rosidl_typesupport_c::LEDToggle_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rpi_gpio_msgs/srv/detail/led_toggle__struct.h"
// already included above
// #include "rpi_gpio_msgs/srv/detail/led_toggle__type_support.h"
// already included above
// #include "rpi_gpio_msgs/srv/detail/led_toggle__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace rpi_gpio_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _LEDToggle_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _LEDToggle_Response_type_support_ids_t;

static const _LEDToggle_Response_type_support_ids_t _LEDToggle_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _LEDToggle_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _LEDToggle_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _LEDToggle_Response_type_support_symbol_names_t _LEDToggle_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rpi_gpio_msgs, srv, LEDToggle_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rpi_gpio_msgs, srv, LEDToggle_Response)),
  }
};

typedef struct _LEDToggle_Response_type_support_data_t
{
  void * data[2];
} _LEDToggle_Response_type_support_data_t;

static _LEDToggle_Response_type_support_data_t _LEDToggle_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _LEDToggle_Response_message_typesupport_map = {
  2,
  "rpi_gpio_msgs",
  &_LEDToggle_Response_message_typesupport_ids.typesupport_identifier[0],
  &_LEDToggle_Response_message_typesupport_symbol_names.symbol_name[0],
  &_LEDToggle_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t LEDToggle_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_LEDToggle_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &rpi_gpio_msgs__srv__LEDToggle_Response__get_type_hash,
  &rpi_gpio_msgs__srv__LEDToggle_Response__get_type_description,
  &rpi_gpio_msgs__srv__LEDToggle_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace rpi_gpio_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, rpi_gpio_msgs, srv, LEDToggle_Response)() {
  return &::rpi_gpio_msgs::srv::rosidl_typesupport_c::LEDToggle_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rpi_gpio_msgs/srv/detail/led_toggle__struct.h"
// already included above
// #include "rpi_gpio_msgs/srv/detail/led_toggle__type_support.h"
// already included above
// #include "rpi_gpio_msgs/srv/detail/led_toggle__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace rpi_gpio_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _LEDToggle_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _LEDToggle_Event_type_support_ids_t;

static const _LEDToggle_Event_type_support_ids_t _LEDToggle_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _LEDToggle_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _LEDToggle_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _LEDToggle_Event_type_support_symbol_names_t _LEDToggle_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rpi_gpio_msgs, srv, LEDToggle_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rpi_gpio_msgs, srv, LEDToggle_Event)),
  }
};

typedef struct _LEDToggle_Event_type_support_data_t
{
  void * data[2];
} _LEDToggle_Event_type_support_data_t;

static _LEDToggle_Event_type_support_data_t _LEDToggle_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _LEDToggle_Event_message_typesupport_map = {
  2,
  "rpi_gpio_msgs",
  &_LEDToggle_Event_message_typesupport_ids.typesupport_identifier[0],
  &_LEDToggle_Event_message_typesupport_symbol_names.symbol_name[0],
  &_LEDToggle_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t LEDToggle_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_LEDToggle_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &rpi_gpio_msgs__srv__LEDToggle_Event__get_type_hash,
  &rpi_gpio_msgs__srv__LEDToggle_Event__get_type_description,
  &rpi_gpio_msgs__srv__LEDToggle_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace rpi_gpio_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, rpi_gpio_msgs, srv, LEDToggle_Event)() {
  return &::rpi_gpio_msgs::srv::rosidl_typesupport_c::LEDToggle_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rpi_gpio_msgs/srv/detail/led_toggle__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
#include "service_msgs/msg/service_event_info.h"
#include "builtin_interfaces/msg/time.h"

namespace rpi_gpio_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{
typedef struct _LEDToggle_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _LEDToggle_type_support_ids_t;

static const _LEDToggle_type_support_ids_t _LEDToggle_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _LEDToggle_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _LEDToggle_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _LEDToggle_type_support_symbol_names_t _LEDToggle_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rpi_gpio_msgs, srv, LEDToggle)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rpi_gpio_msgs, srv, LEDToggle)),
  }
};

typedef struct _LEDToggle_type_support_data_t
{
  void * data[2];
} _LEDToggle_type_support_data_t;

static _LEDToggle_type_support_data_t _LEDToggle_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _LEDToggle_service_typesupport_map = {
  2,
  "rpi_gpio_msgs",
  &_LEDToggle_service_typesupport_ids.typesupport_identifier[0],
  &_LEDToggle_service_typesupport_symbol_names.symbol_name[0],
  &_LEDToggle_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t LEDToggle_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_LEDToggle_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &LEDToggle_Request_message_type_support_handle,
  &LEDToggle_Response_message_type_support_handle,
  &LEDToggle_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    rpi_gpio_msgs,
    srv,
    LEDToggle
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    rpi_gpio_msgs,
    srv,
    LEDToggle
  ),
  &rpi_gpio_msgs__srv__LEDToggle__get_type_hash,
  &rpi_gpio_msgs__srv__LEDToggle__get_type_description,
  &rpi_gpio_msgs__srv__LEDToggle__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace rpi_gpio_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, rpi_gpio_msgs, srv, LEDToggle)() {
  return &::rpi_gpio_msgs::srv::rosidl_typesupport_c::LEDToggle_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
