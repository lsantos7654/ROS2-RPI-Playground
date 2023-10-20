from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='rpi_gpio',
            executable='gpio_server',
            name='server',
            output='screen'
        ),
        Node(
            package='rpi_LCD_control',
            executable='displayclient',
            name='server_display',
            output='screen'
        )
    ])
