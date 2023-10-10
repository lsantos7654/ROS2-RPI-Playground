#include <iostream>
#include <gpiod.hpp>
#include <iostream>

#define GPIO_CHIP "gpiochip0"
#define GPIO_PIN_17 17

int main()
{
    gpiod::chip chip(GPIO_CHIP);
    gpiod::line line = chip.get_line(GPIO_PIN_17);

    // Check if the line is available for use
    if (!line.is_requested())
    {
        line.request({ "gpio_toggle_led", gpiod::line_request::DIRECTION_OUTPUT });
    }

    int value = 0;

    while(1)
    {
        value = !value; // Toggle value
        line.set_value(value);

        std::cout << "LED set to: " << (value ? "ON" : "OFF") << std::endl;

        std::cin.get();
    }

    return 0;
}
