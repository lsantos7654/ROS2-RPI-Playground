// File: gpio_listener.cpp

#include <rclcpp/rclcpp.hpp>
#include <std_msgs/msg/bool.hpp>
#include <gpiod.hpp>

#define GPIO_CHIP "gpiochip0"
#define GPIO_PIN_1 17
#define GPIO_PIN_2 27

gpiod::chip chip(GPIO_CHIP);
gpiod::line line1 = chip.get_line(GPIO_PIN_1);
gpiod::line line2 = chip.get_line(GPIO_PIN_2);

void gpioCallback(const std_msgs::msg::Bool::SharedPtr msg)
{
    if(msg->data)
    {
        line1.set_value(1);
        line2.set_value(1);
    }
    else
    {
        line1.set_value(0);
        line2.set_value(0);
    }
}

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    auto node = rclcpp::Node::make_shared("gpio_listener");

    line1.request({"gpio_listener", gpiod::line_request::DIRECTION_OUTPUT, 0});
    line2.request({"gpio_listener", gpiod::line_request::DIRECTION_OUTPUT, 0});

    auto gpio_sub = node->create_subscription<std_msgs::msg::Bool>(
        "gpio_signal", 
        10, 
        gpioCallback
    );

    rclcpp::spin(node);
    rclcpp::shutdown();

    return 0;
}
