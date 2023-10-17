from luma.core.interface.serial import i2c
from luma.oled.device import ssd1306, sh1106
from PIL import Image
from PIL import ImageDraw
from PIL import ImageFont
import sys

GPIO_choice = sys.argv[1]
LED_choice = sys.argv[2]

# Initialize the display
serial = i2c(port=1, address=0x3C)  # Use the correct I2C address for your display
device = ssd1306(serial)

# Create an image buffer
image = Image.new("1", (device.width, device.height))
draw = ImageDraw.Draw(image)

# Load a font
font = ImageFont.load_default()

# Clear the display
device.clear()

if(GPIO_choice == 0):
    draw.text((10, 10), "GPIO_17 = 0", fill="white", font=font)
    draw.text((10, 25), "GPIO_27 = 0", fill="white", font=font)
    draw.text((10, 40), "GPIO_23 = 0", fill="white", font=font)

if(GPIO_choice == 17):
    if (LED_choice == 0):
        draw.text((10, 10), "GPIO_17 = 0", fill="white", font=font)
        draw.text((10, 40), "GPIO_23 = 0", fill="white", font=font)
    if (LED_choice == 1):
        draw.text((10, 10), "GPIO_17 = 1", fill="white", font=font)
        draw.text((10, 40), "GPIO_23 = 1", fill="white", font=font)

if(GPIO_choice == 27):
    if (LED_choice == 0):
        draw.text((10, 10), "GPIO_27 = 0", fill="white", font=font)
    if (LED_choice == 1):
        draw.text((10, 10), "GPIO_27 = 1", fill="white", font=font)

device.display(image)

if(GPIO_choice == 99):
    # Clean up
    device.cleanup()
