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
        self.__gpio17 = False
        self.__gpio27 = False
        self.__gpio23 = False
        
        # Create an image buffer
        self.image = Image.new("1", (self.device.width, self.device.height))
        self.draw = ImageDraw.Draw(self.image)
        
        # Load a font
        self.font = ImageFont.load_default()
        self.srv = self.create_service(LEDToggle, 'update_lcd', self.update_lcd_display_callback)


    def update_lcd_display_callback(self, request, response):
        if request.gpiochoice == 27:
            if (request.toggle == 1):
                self.__gpio27 = True
            elif (request.toggle == 0):
                self.__gpio27 = False
        if request.gpiochoice == 17:
            if (request.toggle == 1):
                self.__gpio27 = True
            elif (request.toggle == 0):
                self.__gpio27 = False
        
        self.__gpio23 = self.__gpio17

        self.update_display()

        response.success = True
        return response

    def update_display(self):
        self.draw.rectangle([(0,0), (self.device.width, self.device.height)], fill=0)
        self.draw.text((10, 10), f"GPIO_17 = {self.__gpio17}", fill="white", font=self.font)
        self.draw.text((10, 25), f"GPIO_27 = {self.__gpio27}", fill="white", font=self.font)
        self.draw.text((10, 40), f"GPIO_23 = {self.__gpio23}", fill="white", font=self.font)
        self.device.display(self.image)

def main(args=None):
    rclpy.init(args=args)

    lcd_display = LCDDisplay()
    
    lcd_display.update_display() 

    try:
        rclpy.spin(lcd_display)
    except KeyboardInterrupt:
        print("Shut Down")
    finally:
        # Clean up and shut down
        lcd_display.destroy_node()
        if rclpy.ok():
            rclpy.shutdown()


if __name__ == '__main__':
    main()
