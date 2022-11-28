import mbit_interfaces.srv as srv
import mbit_interfaces.msg as msg

import rclpy
from rclpy.node import Node

class HeadStateService(Node):

    def __init__(self):
        super().__init__('head_state_service')
        self.srv = self.create_service(srv.HeadState,
                                        'get_head_state',
                                        self.head_state_callback)
        self.subscription = self.create_subscription(msg.HeadState,
                                                    'update_head_state',
                                                    self.update_head_state_listener_callback,
                                                    10)
        self.subscription

        self.lasty = ""
        self.lastx = ""

    def head_state_callback(self, request, response):
        response.lasty = self.lasty
        response.lastx = self.lastx
        return response

    def update_head_state_listener_callback(self, msg):
        self.lastx = msg.lastx
        self.lasty = msg.lasty
        

def main():
    rclpy.init()

    head_state_service = HeadStateService()

    rclpy.spin(head_state_service)

    rclpy.shutdown()


if __name__ == '__main__':
    main()
