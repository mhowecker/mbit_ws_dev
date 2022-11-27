import rclpy
from rclpy.node import Node

import serial

from std_msgs.msg import String

class HeadMoveSub(Node):

    def __init__(self):
        super().__init__('head_move_sub')
        self.subscription = self.create_subscription(String, 'head_move', self.move_callback, 10)
        self.subscription

        #self.output_location = '/dev/ttyACM0'
        self.output_location = '/dev/stdout'

    def move_callback(self, msg):
        print(msg)
        global pubHS

        ser = serial.Serial(self.output_location)


        if msg.data == "up":
            #ser = serial.Serial(self.output_location)
            ser.write(bytes(chr(0xAA), 'utf-8'))
            ser.flush()
            ser.write(bytes(chr(0x87)+chr(0x01)+chr(0x0a)+chr(0x00), 'utf-8'))
            ser.flush()
            ser.write(bytes(chr(0x84)+chr(0x01)+chr(104)+chr(57), 'utf-8'))
            ser.flush()
            return

        if msg.data == "middle":
            #ser = serial.Serial(self.output_location)
            ser.write(bytes(chr(0xAA), 'utf-8'))
            ser.flush()
            ser.write(bytes(chr(0x87)+chr(0x01)+chr(0x0a)+chr(0x00), 'utf-8'))
            ser.flush()
            ser.write(bytes(chr(0x84)+chr(0x01)+chr(104)+chr(47), 'utf-8'))
            ser.flush()
            return

        if msg.data == "down":
            #ser = serial.Serial(self.output_location)
            ser.write(bytes(chr(0xAA), 'utf-8'))
            ser.flush()
            ser.write(bytes(chr(0x87)+chr(0x01)+chr(0x0a)+chr(0x00), 'utf-8'))
            ser.flush()
            ser.write(bytes(chr(0x84)+chr(0x01)+chr(104)+chr(37), 'utf-8'))
            ser.flush()
            return

        if msg.data == "left":
            #ser = serial.Serial(self.output_location)
            ser.write(bytes(chr(0xAA), 'utf-8'))
            ser.flush()
            ser.write(bytes(chr(0x87)+chr(0x00)+chr(0x0a)+chr(0x00), 'utf-8'))
            ser.flush()
            ser.write(bytes(chr(0x84)+chr(0x00)+chr(32)+chr(31), 'utf-8'))
            ser.flush()
            return

        if msg.data == "center":
            #ser = serial.Serial(self.output_location)
            ser.write(bytes(chr(0xAA), 'utf-8'))
            ser.flush()
            ser.write(bytes(chr(0x87)+chr(0x00)+chr(0x0a)+chr(0x00), 'utf-8'))
            ser.flush()
            ser.write(bytes(chr(0x84)+chr(0x00)+chr(24)+chr(42), 'utf-8'))
            ser.flush()
            return

        if msg.data == "right":
            #ser = serial.Serial(self.output_location)
            ser.write(bytes(chr(0xAA), 'utf-8'))
            ser.flush()
            ser.write(bytes(chr(0x87)+chr(0x00)+chr(0x0a)+chr(0x00), 'utf-8'))
            ser.flush()
            ser.write(bytes(chr(0x84)+chr(0x00)+chr(40)+chr(60), 'utf-8'))
            ser.flush()
            return

        if msg.data == "turnoff":
            #ser = serial.Serial(self.output_location)
            ser.write(bytes(chr(0xAA), 'utf-8'))
            ser.flush()
            ser.write(bytes(chr(0x87)+chr(0x00)+chr(0x0a)+chr(0x00), 'utf-8'))
            ser.flush()
            ser.write(bytes(chr(0x84)+chr(0x00)+chr(0)+chr(0), 'utf-8'))
            ser.flush()
            ser.write(bytes(chr(0x87)+chr(0x01)+chr(0x0a)+chr(0x00), 'utf-8'))
            ser.flush()
            ser.write(bytes(chr(0x84)+chr(0x01)+chr(0)+chr(0), 'utf-8'))
            ser.flush()
        
        if msg.data == "shutdown":
            ser.close()
            self.destroy_node()
            return

        ser.write(bytes(chr('\n') + chr('\r'), 'utf-8'))
        ser.flush()


def main():        
    
    rclpy.init()
    head_move_sub = HeadMoveSub()
    rclpy.spin(head_move_sub)

    head_move_sub.destroy_node()
    rclpy.shudown()
   

if __name__ == '__main__':        
    main()
