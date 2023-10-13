// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from rpi_gpio_msgs:srv/LEDToggle.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rpi_gpio_msgs/srv/detail/led_toggle__functions.h"
#include "rpi_gpio_msgs/srv/detail/led_toggle__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace rpi_gpio_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _LEDToggle_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _LEDToggle_Request_type_support_ids_t;

static const _LEDToggle_Request_type_support_ids_t _LEDToggle_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rpi_gpio_msgs, srv, LEDToggle_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rpi_gpio_msgs, srv, LEDToggle_Request)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_LEDToggle_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &rpi_gpio_msgs__srv__LEDToggle_Request__get_type_hash,
  &rpi_gpio_msgs__srv__LEDToggle_Request__get_type_description,
  &rpi_gpio_msgs__srv__LEDToggle_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace rpi_gpio_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<rpi_gpio_msgs::srv::LEDToggle_Request>()
{
  return &::rpi_gpio_msgs::srv::rosidl_typesupport_cpp::LEDToggle_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, rpi_gpio_msgs, srv, LEDToggle_Request)() {
  return get_message_type_support_handle<rpi_gpio_msgs::srv::LEDToggle_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rpi_gpio_msgs/srv/detail/led_toggle__functions.h"
// already included above
// #include "rpi_gpio_msgs/srv/detail/led_toggle__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace rpi_gpio_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _LEDToggle_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _LEDToggle_Response_type_support_ids_t;

static const _LEDToggle_Response_type_support_ids_t _LEDToggle_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rpi_gpio_msgs, srv, LEDToggle_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rpi_gpio_msgs, srv, LEDToggle_Response)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_LEDToggle_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &rpi_gpio_msgs__srv__LEDToggle_Response__get_type_hash,
  &rpi_gpio_msgs__srv__LEDToggle_Response__get_type_description,
  &rpi_gpio_msgs__srv__LEDToggle_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace rpi_gpio_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<rpi_gpio_msgs::srv::LEDToggle_Response>()
{
  return &::rpi_gpio_msgs::srv::rosidl_typesupport_cpp::LEDToggle_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, rpi_gpio_msgs, srv, LEDToggle_Response)() {
  return get_message_type_support_handle<rpi_gpio_msgs::srv::LEDToggle_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rpi_gpio_msgs/srv/detail/led_toggle__functions.h"
// already included above
// #include "rpi_gpio_msgs/srv/detail/led_toggle__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace rpi_gpio_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _LEDToggle_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _LEDToggle_Event_type_support_ids_t;

static const _LEDToggle_Event_type_support_ids_t _LEDToggle_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rpi_gpio_msgs, srv, LEDToggle_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rpi_gpio_msgs, srv, LEDToggle_Event)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_LEDToggle_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &rpi_gpio_msgs__srv__LEDToggle_Event__get_type_hash,
  &rpi_gpio_msgs__srv__LEDToggle_Event__get_type_description,
  &rpi_gpio_msgs__srv__LEDToggle_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace rpi_gpio_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<rpi_gpio_msgs::srv::LEDToggle_Event>()
{
  return &::rpi_gpio_msgs::srv::rosidl_typesupport_cpp::LEDToggle_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, rpi_gpio_msgs, srv, LEDToggle_Event)() {
  return get_message_type_support_handle<rpi_gpio_msgs::srv::LEDToggle_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rpi_gpio_msgs/srv/detail/led_toggle__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace rpi_gpio_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _LEDToggle_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _LEDToggle_type_support_ids_t;

static const _LEDToggle_type_support_ids_t _LEDToggle_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rpi_gpio_msgs, srv, LEDToggle)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rpi_gpio_msgs, srv, LEDToggle)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_LEDToggle_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<rpi_gpio_msgs::srv::LEDToggle_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<rpi_gpio_msgs::srv::LEDToggle_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<rpi_gpio_msgs::srv::LEDToggle_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<rpi_gpio_msgs::srv::LEDToggle>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<rpi_gpio_msgs::srv::LEDToggle>,
  &rpi_gpio_msgs__srv__LEDToggle__get_type_hash,
  &rpi_gpio_msgs__srv__LEDToggle__get_type_description,
  &rpi_gpio_msgs__srv__LEDToggle__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace rpi_gpio_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<rpi_gpio_msgs::srv::LEDToggle>()
{
  return &::rpi_gpio_msgs::srv::rosidl_typesupport_cpp::LEDToggle_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp
