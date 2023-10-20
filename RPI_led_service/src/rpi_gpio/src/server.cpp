#include <rclcpp/rclcpp.hpp>
#include "rpi_gpio_msgs/srv/led_toggle.hpp"
#include <gpiod.hpp>

#define GPIO_CHIP "gpiochip0"
#define GPIO_PIN_17 17
#define GPIO_PIN_27 27
#define GPIO_PIN_23 23

class GPIOServer : public rclcpp::Node
{
public:
    GPIOServer() : Node("gpio_server")
    {
        service_ = this->create_service<rpi_gpio_msgs::srv::LEDToggle>(
            "toggle_gpio", 
            std::bind(&GPIOServer::handle_service, this, std::placeholders::_1, std::placeholders::_2));

        chip = gpiod::chip(GPIO_CHIP);
        line1 = chip.get_line(GPIO_PIN_17); // Pin 17. Change this if needed.
        line2 = chip.get_line(GPIO_PIN_27);
        line3 = chip.get_line(GPIO_PIN_23);
        gpio17 = false;
        line1.request({"LED_17_toggle", gpiod::line_request::DIRECTION_OUTPUT});
        line2.request({"LED_27_toggle", gpiod::line_request::DIRECTION_OUTPUT});
        line3.request({"LED_23_status", gpiod::line_request::DIRECTION_INPUT});
    }

    ~GPIOServer()
    {
        line1.set_value(0);
        line2.set_value(0);   
    }

private:
    void handle_service(const std::shared_ptr<rpi_gpio_msgs::srv::LEDToggle::Request> request,
                        std::shared_ptr<rpi_gpio_msgs::srv::LEDToggle::Response> response)
    {
        if(request->gpiochoice == 17)
        {
            if (request->toggle)
            {
                line1.set_value(1);
                gpio17 = request->toggle;
            }
            else
            {
                line1.set_value(0);
                gpio17 = request->toggle;
            }
        }
        else if(request->gpiochoice == 27)
        {
            if (request->toggle) line2.set_value(1);
            else line2.set_value(0);
        }
        
        if (request->gpiochoice == 23)
        {
            response->success = gpio17;
        }
        else
        {
            response->success = request->toggle;
        }
    }

private:
    rclcpp::Service<rpi_gpio_msgs::srv::LEDToggle>::SharedPtr service_;
    gpiod::chip chip;
    gpiod::line line1;
    gpiod::line line2;
    gpiod::line line3;
    bool gpio17;
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<GPIOServer>());

    rclcpp::shutdown();
    return 0;
}
