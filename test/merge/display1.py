from luma.core.interface.serial import i2c
from luma.oled.device import ssd1306, sh1106
from PIL import Image
from PIL import ImageDraw
from PIL import ImageFont
import time
import subprocess

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

print("1: LED 17\n2: LED_27\n3: Status LED 17\n4: Status LED 27\n5: Status GPIO 23")

while (1):

    #Run the C++ program as a subprocess
    process = subprocess.Popen("./a.out", stdout=subprocess.PIPE, stderr=subprocess.PIPE, shell=True)
    stdout, stderr = process.communicate()

    string_c = stdout.decode().strip

    if (string_c == "LED 17 set to ON"):
        draw.text((10, 10), "GPIO_17 = 1", fill="white", font=font)
        draw.text((10, 40), "GPIO_23 = 1", fill="white", font=font)
    elif (string_c == "LED 17 set to OFF"):
        draw.text((10, 10), "GPIO_17 = 0", fill="white", font=font)
        draw.text((10, 40), "GPIO_23 = 0", fill="white", font=font)
    elif (string_c == "LED 27 is set to ON"):
        draw.text((10, 25), "GPIO_27 = 1", fill="white", font=font)
    elif (string_c == "LED 27 is set to OFF"):
        draw.text((10, 25), "GPIO_27 = 0", fill="white", font=font)    
    device.display(image)

# Clean up
device.cleanup()
