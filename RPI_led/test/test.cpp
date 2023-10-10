#include <iostream>
#include <gpiod.hpp>
#include <iostream>

#define GPIO_CHIP "gpiochip0"
#define GPIO_PIN_17 17
#define GPIO_PIN_27 27

int main()
{
    gpiod::chip chip(GPIO_CHIP);
    gpiod::line line1 = chip.get_line(GPIO_PIN_17);
    gpiod::line line2 = chip.get_line(GPIO_PIN_27);

    // Check if the line is available for use
    if (!line1.is_requested())
    {
        line1.request({ "gpio_toggle_led", gpiod::line_request::DIRECTION_OUTPUT });
    }
    if (!line2.is_requested())
    {
        line2.request({ "gpio_toggle_led", gpiod::line_request::DIRECTION_OUTPUT });
    }

    int value1 = 0;
    int value2 = 0;
    int choice = 0;

    while(1)
    {
        std::cout << "1: LED 17, 0: LED_27" << std::endl;
        std::cin >> choice;
        
        if (choice){
            value1 = !value1; // Toggle value
            line1.set_value(value1);
            std::cout << "LED 17 set to " << (value1 ? "ON" : "OFF") << std::endl;
        }else{
            value2 = !value2; // Toggle value
            line2.set_value(value2);
            std::cout << "LED 27 set to " << (value2 ? "ON" : "OFF") << std::endl;
        }

        if (choice == 3){
            std::cout << "LED 17 is set to " << line1.get_value() << std::endl;
        }
        if (choice == 4){
            std::cout << "LED 27 is set to " << line2.get_value() << std::endl;
        }


        std::cin.get();
    }

    return 0;
}
