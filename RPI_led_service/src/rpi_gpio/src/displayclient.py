import rclpy
from rclpy.node import Node
from rpi_gpio_msgs.srv import LEDToggle
from luma.core.interface.serial import i2c
from luma.oled.device import ssd1306, sh1106
from PIL import Image
from PIL import ImageDraw
from PIL import ImageFont

class LCDDisplay(Node):

    def __init__(self):
        super().__init__('lcd_display_node')

        # Initialize the display
        self.serial = i2c(port=1, address=0x3C)  # Use the correct I2C address for your display
        self.device = ssd1306(self.serial)
        
        # Create an image buffer
        self.image = Image.new("1", (self.device.width, self.device.height))
        self.draw = ImageDraw.Draw(self.image)
        
        # Load a font
        self.font = ImageFont.load_default()
        self.srv = self.create_service(LEDToggle, 'update_lcd', self.update_lcd_display_callback)


    def update_lcd_display_callback(self, request, response):
        self.draw.rectangle([(0,0), (self.device.width, self.device.height)], fill=0)
        gpio17 = request.gpiochoice == 17 and request.toggle
        gpio27 = request.gpiochoice == 27 and request.toggle
        gpio23 = request.gpiochoice == 17 and request.toggle

        self.update_display(gpio17, gpio27, gpio23)

        response.success = True
        return response


def main(args=None):
    rclpy.init(args=args)

    lcd_display = LCDDisplay()
    
    lcd_display.update_display(False, False, False) 

    rclpy.spin(lcd_display)

    # Clean up and shut down
    lcd_display.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
