// File: gpio_listener.cpp
#include <iostream>
#include <gpiod.hpp>


#define GPIO_CHIP "gpiochip0"
#define GPIO_PIN_1 17
#define GPIO_PIN_2 27

gpiod::chip chip(GPIO_CHIP);
gpiod::line line1 = chip.get_line(GPIO_PIN_1);
gpiod::line line2 = chip.get_line(GPIO_PIN_2);


int main()
{
    std::string check;
    int value = 0;
    while(1)
    {
        value = !value;
        line1.set_value(value);
        std::cout << value << std::endl;
        
        std::cin.get();
    }
}
