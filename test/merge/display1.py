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
#device.clear()

def do_nothing(obj):
   pass

gpio17 = 0
gpio27 = 0
gpio23 = 0

if(GPIO_choice == "17"):
    if (LED_choice == "0"):
        gpio17 = 0
        gpio23 = 0
    if (LED_choice == "1"):
        gpio17 = 1
        gpio23 = 1

if(GPIO_choice == "27"):
    if (LED_choice == "0"):
        gpio27 = 0
    if (LED_choice == "1"):
        gpio27 = 1

device.clear()
draw.text((10, 10), "GPIO_17 = "+str(gpio17), fill="white", font=font)
draw.text((10, 25), "GPIO_27 = "+str(gpio27), fill="white", font=font)
draw.text((10, 40), "GPIO_23 = "+str(gpio23), fill="white", font=font)
device.display(image)

#device.cleanup = do_nothing
device.cleanup()
