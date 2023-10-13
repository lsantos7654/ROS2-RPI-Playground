#include <rclcpp/rclcpp.hpp>
#include "rpi_gpio_msgs/srv/led_toggle.hpp"
#include <gpiod.hpp>

class GPIOServer : public rclcpp::Node
{
public:
    GPIOServer() : Node("gpio_server")
    {
        service_ = this->create_service<rpi_gpio_msgs::srv::LEDToggle>(
            "toggle_gpio", 
            std::bind(&GPIOServer::handle_service, this, std::placeholders::_1, std::placeholders::_2));

        chip_ = gpiod::chip("gpiochip0");
        line_ = chip_.get_line(17); // Pin 17. Change this if needed.
        line_.request({"ros2_gpio_service", gpiod::line_request::DIRECTION_OUTPUT});
    }

private:
    void handle_service(const std::shared_ptr<rpi_gpio_msgs::srv::LEDToggle::Request> request,
                        std::shared_ptr<rpi_gpio_msgs::srv::LEDToggle::Response> response)
    {
        if(request->toggle)
        {
            line_.set_value(1);
        }
        else
        {
            line_.set_value(0);
        }
        response->success = true;
    }

    rclcpp::Service<rpi_gpio_msgs::srv::LEDToggle>::SharedPtr service_;
    gpiod::chip chip_;
    gpiod::line line_;
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<GPIOServer>());
    rclcpp::shutdown();
    return 0;
}
