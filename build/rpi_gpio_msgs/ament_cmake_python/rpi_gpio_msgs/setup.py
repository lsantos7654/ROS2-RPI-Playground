from setuptools import find_packages
from setuptools import setup

setup(
    name='rpi_gpio_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('rpi_gpio_msgs', 'rpi_gpio_msgs.*')),
)
