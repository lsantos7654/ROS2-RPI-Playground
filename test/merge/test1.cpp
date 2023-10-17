#include <iostream>
#include <gpiod.hpp>
#include <cstdlib>
#include <csignal>

#define GPIO_CHIP "gpiochip0"
#define GPIO_PIN_17 17
#define GPIO_PIN_27 27
#define GPIO_PIN_23 23

class LED
{
public:
    gpiod::line line1, line2, line3;

    LED()
    {
        gpiod::chip chip(GPIO_CHIP);
        line1 = chip.get_line(GPIO_PIN_17);
        line2 = chip.get_line(GPIO_PIN_27);
        line3 = chip.get_line(GPIO_PIN_23);
        
        // Check if the line is available for use
        if (!line1.is_requested())
        {
            line1.request({ "gpio_toggle_led", gpiod::line_request::DIRECTION_OUTPUT });
        }
        if (!line2.is_requested())
        {
            line2.request({ "gpio_toggle_led", gpiod::line_request::DIRECTION_OUTPUT });
        }
        if (!line3.is_requested())
        {
            line3.request({ "gpio_read", gpiod::line_request::DIRECTION_INPUT });
        }
    }

    ~LED()
    {
        line1.set_value(0);
        line2.set_value(0);
        system("python3 display1.py 99 0");
    }
};

LED* led = nullptr;

void signalHandler(int signum)
{
    delete led;
    exit(signum);
}


int main()
{
    led = new LED();

    signal(SIGINT, signalHandler);

    int value1 = 0;
    int value2 = 0;
    int choice = 0;

    std::cout << "1: LED 17\n2: LED_27\n3: Status LED 17\n4: Status LED 27\n5: Status GPIO 23" << std::endl;
    system("python3 display1.py 0 0");
        
    while(1)
    {
        std::cin >> choice;
        
        if (choice == 1)
        {
            value1 = !value1; // Toggle value
            led->line1.set_value(value1);
            std::cout << "LED 17 set to " << (value1 ? "ON" : "OFF") << std::endl;
            system(("python3 display1.py 17 "+std::to_string(value1)).c_str());
        }
        else if (choice == 2)
        {
            value2 = !value2; // Toggle value
            led->line2.set_value(value2);
            std::cout << "LED 27 set to " << (value2 ? "ON" : "OFF") << std::endl;
            system(("python3 display1.py 27 "+std::to_string(value1)).c_str());
        }
        else if (choice == 3)
        {
            std::cout << "LED 17 is set to " << led->line1.get_value() << std::endl;
        }
        else if (choice == 4)
        {
            std::cout << "LED 27 is set to " << led->line2.get_value() << std::endl;
        }else if (choice == 5)
        {
            std::cout << "GPIO 23 is set to " << led->line3.get_value() << std::endl;
        }
        else
        {
	        std::cout << "invalid argument" << std::endl;
	}

        //std::cin.get();
    }

    delete led;

    return 0;
}
