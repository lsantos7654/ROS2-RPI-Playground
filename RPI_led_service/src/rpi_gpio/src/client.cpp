#include <rclcpp/rclcpp.hpp>
#include "rpi_gpio_msgs/srv/led_toggle.hpp"

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    auto node = rclcpp::Node::make_shared("gpio_client");
    auto gpio_client = node->create_client<rpi_gpio_msgs::srv::LEDToggle>("toggle_gpio");

    // Service client for LCD update
    auto lcd_client = node->create_client<rpi_gpio_msgs::srv::LEDToggle>("update_lcd");
    
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

    // Toggle GPIO
    if(gpio_client->wait_for_service(std::chrono::seconds(1)))
    {
        auto result = gpio_client->async_send_request(request);
        if(rclcpp::spin_until_future_complete(node, result) == rclcpp::FutureReturnCode::SUCCESS)
        {
            if(result.get()->success){
                RCLCPP_INFO(node->get_logger(), ("GPIO "+std::to_string(gpioChoice)+" is on").c_str());
            }else{
                RCLCPP_INFO(node->get_logger(), ("GPIO "+std::to_string(gpioChoice)+" is off").c_str());
            }

            // Notify the LCD server of the change
            if(lcd_client->wait_for_service(std::chrono::seconds(1)))
            {
                auto lcd_result = lcd_client->async_send_request(request);
                if(rclcpp::spin_until_future_complete(node, lcd_result) != rclcpp::FutureReturnCode::SUCCESS)
                {
                    RCLCPP_ERROR(node->get_logger(), "Failed to update LCD");
                }
            }
            else
            {
                RCLCPP_ERROR(node->get_logger(), "LCD update service not available");
            }
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
