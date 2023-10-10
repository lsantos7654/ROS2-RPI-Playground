// File: gpio_talker.cpp

#include <rclcpp/rclcpp.hpp>
#include <std_msgs/msg/bool.hpp>

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    auto node = rclcpp::Node::make_shared("gpio_talker");

    auto gpio_pub = node->create_publisher<std_msgs::msg::Bool>("gpio_signal", 10);

    rclcpp::Rate loop_rate(1); // 1 Hz

    bool state = false;

    while (rclcpp::ok())
    {
        std_msgs::msg::Bool msg;
        msg.data = state;
        gpio_pub->publish(msg);

        state = !state;

        rclcpp::spin_some(node);
        loop_rate.sleep();
    }

    rclcpp::shutdown();
    return 0;
}
