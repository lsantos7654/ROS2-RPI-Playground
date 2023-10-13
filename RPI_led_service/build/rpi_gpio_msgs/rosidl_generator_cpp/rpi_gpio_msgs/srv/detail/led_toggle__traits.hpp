// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rpi_gpio_msgs:srv/LEDToggle.idl
// generated code does not contain a copyright notice

#ifndef RPI_GPIO_MSGS__SRV__DETAIL__LED_TOGGLE__TRAITS_HPP_
#define RPI_GPIO_MSGS__SRV__DETAIL__LED_TOGGLE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rpi_gpio_msgs/srv/detail/led_toggle__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace rpi_gpio_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const LEDToggle_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: toggle
  {
    out << "toggle: ";
    rosidl_generator_traits::value_to_yaml(msg.toggle, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LEDToggle_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: toggle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "toggle: ";
    rosidl_generator_traits::value_to_yaml(msg.toggle, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LEDToggle_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace rpi_gpio_msgs

namespace rosidl_generator_traits
{

[[deprecated("use rpi_gpio_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rpi_gpio_msgs::srv::LEDToggle_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  rpi_gpio_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rpi_gpio_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const rpi_gpio_msgs::srv::LEDToggle_Request & msg)
{
  return rpi_gpio_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<rpi_gpio_msgs::srv::LEDToggle_Request>()
{
  return "rpi_gpio_msgs::srv::LEDToggle_Request";
}

template<>
inline const char * name<rpi_gpio_msgs::srv::LEDToggle_Request>()
{
  return "rpi_gpio_msgs/srv/LEDToggle_Request";
}

template<>
struct has_fixed_size<rpi_gpio_msgs::srv::LEDToggle_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<rpi_gpio_msgs::srv::LEDToggle_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<rpi_gpio_msgs::srv::LEDToggle_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rpi_gpio_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const LEDToggle_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LEDToggle_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LEDToggle_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace rpi_gpio_msgs

namespace rosidl_generator_traits
{

[[deprecated("use rpi_gpio_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rpi_gpio_msgs::srv::LEDToggle_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  rpi_gpio_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rpi_gpio_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const rpi_gpio_msgs::srv::LEDToggle_Response & msg)
{
  return rpi_gpio_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<rpi_gpio_msgs::srv::LEDToggle_Response>()
{
  return "rpi_gpio_msgs::srv::LEDToggle_Response";
}

template<>
inline const char * name<rpi_gpio_msgs::srv::LEDToggle_Response>()
{
  return "rpi_gpio_msgs/srv/LEDToggle_Response";
}

template<>
struct has_fixed_size<rpi_gpio_msgs::srv::LEDToggle_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<rpi_gpio_msgs::srv::LEDToggle_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<rpi_gpio_msgs::srv::LEDToggle_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace rpi_gpio_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const LEDToggle_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LEDToggle_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LEDToggle_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace rpi_gpio_msgs

namespace rosidl_generator_traits
{

[[deprecated("use rpi_gpio_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rpi_gpio_msgs::srv::LEDToggle_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  rpi_gpio_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rpi_gpio_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const rpi_gpio_msgs::srv::LEDToggle_Event & msg)
{
  return rpi_gpio_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<rpi_gpio_msgs::srv::LEDToggle_Event>()
{
  return "rpi_gpio_msgs::srv::LEDToggle_Event";
}

template<>
inline const char * name<rpi_gpio_msgs::srv::LEDToggle_Event>()
{
  return "rpi_gpio_msgs/srv/LEDToggle_Event";
}

template<>
struct has_fixed_size<rpi_gpio_msgs::srv::LEDToggle_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rpi_gpio_msgs::srv::LEDToggle_Event>
  : std::integral_constant<bool, has_bounded_size<rpi_gpio_msgs::srv::LEDToggle_Request>::value && has_bounded_size<rpi_gpio_msgs::srv::LEDToggle_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<rpi_gpio_msgs::srv::LEDToggle_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rpi_gpio_msgs::srv::LEDToggle>()
{
  return "rpi_gpio_msgs::srv::LEDToggle";
}

template<>
inline const char * name<rpi_gpio_msgs::srv::LEDToggle>()
{
  return "rpi_gpio_msgs/srv/LEDToggle";
}

template<>
struct has_fixed_size<rpi_gpio_msgs::srv::LEDToggle>
  : std::integral_constant<
    bool,
    has_fixed_size<rpi_gpio_msgs::srv::LEDToggle_Request>::value &&
    has_fixed_size<rpi_gpio_msgs::srv::LEDToggle_Response>::value
  >
{
};

template<>
struct has_bounded_size<rpi_gpio_msgs::srv::LEDToggle>
  : std::integral_constant<
    bool,
    has_bounded_size<rpi_gpio_msgs::srv::LEDToggle_Request>::value &&
    has_bounded_size<rpi_gpio_msgs::srv::LEDToggle_Response>::value
  >
{
};

template<>
struct is_service<rpi_gpio_msgs::srv::LEDToggle>
  : std::true_type
{
};

template<>
struct is_service_request<rpi_gpio_msgs::srv::LEDToggle_Request>
  : std::true_type
{
};

template<>
struct is_service_response<rpi_gpio_msgs::srv::LEDToggle_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // RPI_GPIO_MSGS__SRV__DETAIL__LED_TOGGLE__TRAITS_HPP_
