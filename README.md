# Sandbox

First project:
Using ros2 iron
Create a talker/listener program that will flicker a light on a raspberry pi 4.

Second Project:
Using ros2 iron
* Create 2 servers on a Raspberry Pi 4:
    * 1st server will control a ssd1306 LCD screen and display the current state of the GPIO pins
    * 2nd server will control 3 GPIO pins (2x outputs [17, 27] for led lights, 1x input [23 connected to 17]
    * 
 




    Required Libraries: 
    sudo apt install libgpiod-dev gpiod
    sudo apt install python3-colcon-common-extensions

    Linux run: source /opt/ros/iron/setup.bash
         cd ~/RPI_led
         source install/setup.bash
         colcon build
         ros2 run gpio_control gpio_talker
    
    On Pi Run:
         ros2 run gpio_control gpio_listener
