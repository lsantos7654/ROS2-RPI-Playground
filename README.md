# Sandbox

First project: RPI_led
* Create a talker/listener program that will flicker a light on and off on a raspberry pi 4.

First Time Build:
On Host PC and Pi:
   * navigate to RPI_led
   * rm -r build log install
   * source opt/ros/iron/setup.bash
   * colcon build
   * source install/setup.bash

Commands:
Host PC run:
   * ros2 run gpio_control gpio_talker

On Pi Run:
   * ros2 run gpio_control gpio_listener


............................................................................................................................................................................

Second Project: RPI_led_service
![IMG_7297](https://github.com/lsantos7654/Sandbox/assets/147119808/5602f8f3-7883-461c-9b1d-e41d90708c53)
Summary:
* Create 2 server nodes on a Raspberry Pi 4:
    * 1st node/server will control a ssd1306 LCD screen and display the current state of the GPIO pins
    * 2nd node/server will control 3 GPIO pins (2x outputs [17, 27] for led lights, 1x input [23 connected to 17]
 * Create a custom service to communicate between the client and server
   * int32 gpiochoice (command)
   * int32 toggle (command)
   * bool success (response)
 * Create 1 client node on Host PC
    * This node will send a signal to both servers to set a chosen gpio pin on/off or to get the current state

First Time Build:
On Host PC and Pi
* navigate to RPI_led_service
* source opt/ros/iron/setup.bash
* colcon build
* source install/setup.bash

Commands:
On Pi run:
* ros2 launch rpi_gpio my_nodes.launch.py

On Host PC
* ros2 run rpi_gpio gpio_client 17 1
* Template:
   * ros2 run rpi_gpio gpio_client {GPIO_number} {command}
   * GPIO_number: 17 [output], 27 [output], 23 [input]
   * command: 1 [on], 0 [off], 2[get_status]


............................................................................................................................................................................

Required Libraries: 
* sudo apt install libgpiod-dev gpiod
* sudo apt install python3-colcon-common-extensions

All projects using ros2 iron
