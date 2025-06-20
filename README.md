# ROS2 Raspberry Pi GPIO Control Suite

A comprehensive ROS2-based system for GPIO control and monitoring on Raspberry Pi 4, featuring distributed node architecture, custom services, and real-time hardware interaction.

## Overview

This repository contains two ROS2 projects demonstrating hardware control patterns, distributed computing, and custom service implementation:

1. **RPI_led**: Publisher-subscriber pattern for LED control
2. **RPI_led_service**: Service-based architecture with LCD display and multi-GPIO management

## Technologies & Skills Demonstrated

- **ROS2 (Iron)** - Distributed robotics middleware
- **Python** - Node implementation
- **C++** - Custom service definitions
- **Hardware Integration** - GPIO control, SSD1306 OLED display
- **Network Communication** - Inter-device ROS2 communication
- **Custom Services** - Service definition and implementation

## Project Architecture

### Project 1: RPI_led (Publisher-Subscriber Pattern)

A distributed talker/listener system demonstrating basic ROS2 communication patterns for hardware control.

**Features:**
- Publisher node (Host PC) sends LED control commands
- Subscriber node (Raspberry Pi) receives commands and controls GPIO
- Real-time LED flickering based on published messages

### Project 2: RPI_led_service (Service-Based Architecture)

![System Diagram](https://github.com/lsantos7654/Sandbox/assets/147119808/5602f8f3-7883-461c-9b1d-e41d90708c53)

A more sophisticated implementation using ROS2 services for reliable command-response patterns.

**Architecture:**
- **Display Server Node**: Controls SSD1306 OLED display showing real-time GPIO states
- **GPIO Server Node**: Manages 3 GPIO pins (2 outputs, 1 input with loopback)
- **Client Node**: Sends commands from host PC to control and query GPIO states

**Custom Service Definition:**
```
# Request
int32 gpiochoice  # GPIO pin number
int32 toggle      # Command (0=off, 1=on, 2=get_status)
---
# Response
bool success      # Operation result
```

## Prerequisites

### System Requirements
- Ubuntu 22.04 (Host PC and Raspberry Pi)
- ROS2 Iron distribution
- Python 3.10+

### Hardware Requirements
- Raspberry Pi 4
- SSD1306 OLED Display (I2C)
- LEDs and appropriate resistors
- Jumper wires

### Dependencies

```bash
# GPIO libraries
sudo apt install libgpiod-dev gpiod

# ROS2 build tools
sudo apt install python3-colcon-common-extensions
```

## Installation & Setup

### Building from Source

1. Clone the repository:
```bash
git clone https://github.com/yourusername/ROS2-RPI-Playground.git
cd ROS2-RPI-Playground
```

2. Build Project 1 (RPI_led):
```bash
cd RPI_led
source /opt/ros/iron/setup.bash
colcon build
source install/setup.bash
```

3. Build Project 2 (RPI_led_service):
```bash
cd ../RPI_led_service
source /opt/ros/iron/setup.bash
colcon build
source install/setup.bash
```

## Usage

### Project 1: RPI_led

**On Host PC:**
```bash
ros2 run gpio_control gpio_talker
```

**On Raspberry Pi:**
```bash
ros2 run gpio_control gpio_listener
```

### Project 2: RPI_led_service

**On Raspberry Pi (Launch both server nodes):**
```bash
ros2 launch rpi_gpio my_nodes.launch.py
```

**On Host PC (Send commands):**
```bash
# Turn on GPIO 17
ros2 run rpi_gpio gpio_client 17 1

# Turn off GPIO 27
ros2 run rpi_gpio gpio_client 27 0

# Get status of GPIO 23
ros2 run rpi_gpio gpio_client 23 2
```

**Command Format:**
```
ros2 run rpi_gpio gpio_client <GPIO_PIN> <COMMAND>
```
- **GPIO_PIN**: 17 (output), 27 (output), 23 (input)
- **COMMAND**: 0 (off), 1 (on), 2 (get_status)

## Technical Highlights

- **Distributed Architecture**: Demonstrates network-transparent communication between devices
- **Hardware Abstraction**: Clean separation between hardware control and business logic
- **Error Handling**: Robust service responses with success/failure indicators
- **Real-time Monitoring**: Live GPIO state display on OLED screen
- **Modular Design**: Easy to extend with additional GPIO pins or display types

## Future Enhancements

- Add PWM control for LED brightness
- Implement sensor data acquisition and publishing
- Create web-based control interface
- Add Docker containerization for easier deployment

## License

This project is open source and available under the MIT License.
