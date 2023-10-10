# Sandbox

First project:
Using ros2 iron
Create a talker/listener program that will flicker a light on a raspberry pi 4.

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