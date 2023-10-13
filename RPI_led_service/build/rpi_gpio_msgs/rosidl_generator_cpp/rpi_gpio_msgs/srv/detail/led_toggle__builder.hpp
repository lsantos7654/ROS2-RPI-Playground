// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rpi_gpio_msgs:srv/LEDToggle.idl
// generated code does not contain a copyright notice

#ifndef RPI_GPIO_MSGS__SRV__DETAIL__LED_TOGGLE__BUILDER_HPP_
#define RPI_GPIO_MSGS__SRV__DETAIL__LED_TOGGLE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rpi_gpio_msgs/srv/detail/led_toggle__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rpi_gpio_msgs
{

namespace srv
{

namespace builder
{

class Init_LEDToggle_Request_toggle
{
public:
  Init_LEDToggle_Request_toggle()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rpi_gpio_msgs::srv::LEDToggle_Request toggle(::rpi_gpio_msgs::srv::LEDToggle_Request::_toggle_type arg)
  {
    msg_.toggle = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rpi_gpio_msgs::srv::LEDToggle_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rpi_gpio_msgs::srv::LEDToggle_Request>()
{
  return rpi_gpio_msgs::srv::builder::Init_LEDToggle_Request_toggle();
}

}  // namespace rpi_gpio_msgs


namespace rpi_gpio_msgs
{

namespace srv
{

namespace builder
{

class Init_LEDToggle_Response_success
{
public:
  Init_LEDToggle_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rpi_gpio_msgs::srv::LEDToggle_Response success(::rpi_gpio_msgs::srv::LEDToggle_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rpi_gpio_msgs::srv::LEDToggle_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rpi_gpio_msgs::srv::LEDToggle_Response>()
{
  return rpi_gpio_msgs::srv::builder::Init_LEDToggle_Response_success();
}

}  // namespace rpi_gpio_msgs


namespace rpi_gpio_msgs
{

namespace srv
{

namespace builder
{

class Init_LEDToggle_Event_response
{
public:
  explicit Init_LEDToggle_Event_response(::rpi_gpio_msgs::srv::LEDToggle_Event & msg)
  : msg_(msg)
  {}
  ::rpi_gpio_msgs::srv::LEDToggle_Event response(::rpi_gpio_msgs::srv::LEDToggle_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rpi_gpio_msgs::srv::LEDToggle_Event msg_;
};

class Init_LEDToggle_Event_request
{
public:
  explicit Init_LEDToggle_Event_request(::rpi_gpio_msgs::srv::LEDToggle_Event & msg)
  : msg_(msg)
  {}
  Init_LEDToggle_Event_response request(::rpi_gpio_msgs::srv::LEDToggle_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_LEDToggle_Event_response(msg_);
  }

private:
  ::rpi_gpio_msgs::srv::LEDToggle_Event msg_;
};

class Init_LEDToggle_Event_info
{
public:
  Init_LEDToggle_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LEDToggle_Event_request info(::rpi_gpio_msgs::srv::LEDToggle_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_LEDToggle_Event_request(msg_);
  }

private:
  ::rpi_gpio_msgs::srv::LEDToggle_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rpi_gpio_msgs::srv::LEDToggle_Event>()
{
  return rpi_gpio_msgs::srv::builder::Init_LEDToggle_Event_info();
}

}  // namespace rpi_gpio_msgs

#endif  // RPI_GPIO_MSGS__SRV__DETAIL__LED_TOGGLE__BUILDER_HPP_
