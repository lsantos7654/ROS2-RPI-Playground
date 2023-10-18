#include <rclcpp/rclcpp.hpp>
#include "rpi_gpio_msgs/srv/led_toggle.hpp"

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    auto node = rclcpp::Node::make_shared("gpio_client");
    auto client = node->create_client<rpi_gpio_msgs::srv::LEDToggle>("toggle_gpio");
    
    auto request = std::make_shared<rpi_gpio_msgs::srv::LEDToggle::Request>();

    int gpioChoice = 0;
    bool gpioStatus = 0;

    if (argc > 1){
        gpioChoice = std::stoi(argv[1]);
        gpioStatus = std::stoi(argv[2]);
    }

    request->toggle = gpioStatus;

    if (gpioChoice == 17)
    {
        request->gpiochoice = 17; 
    }
    else if (gpioChoice == 27)
    {
        request->gpiochoice = 27;
    }

    if(client->wait_for_service(std::chrono::seconds(1)))
    {
        auto result = client->async_send_request(request);
        if(rclcpp::spin_until_future_complete(node, result) == rclcpp::FutureReturnCode::SUCCESS)
        {
            RCLCPP_INFO(node->get_logger(), "GPIO toggled successfully");
        }
        else
        {
            RCLCPP_ERROR(node->get_logger(), "Failed to call service");
        }
    }
    else
    {
        RCLCPP_ERROR(node->get_logger(), "Service not available");
    }

    rclcpp::shutdown();
    return 0;
}
