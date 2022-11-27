from mbit_interfaces.srv import HeadState

import rclpy
from rclpy.node import Node

class HeadStateService(Node):

    def __init__(self):
        super().__init__('head_state_service')
        self.srv = self.create_service(HeadState, 'get_head_state', self.head_state_callback)
        self.lasty = ""
        self.lastx = ""

    def head_state_callback(self, request, response):
        response.lasty = self.lasty
        response.lastx = self.lastx
        return response

def main():
    rclpy.init()

    head_state_service = HeadStateService()

    rclpy.spin(head_state_service)

    rclpy.shutdown()


if __name__ == '__main__':
    main()
