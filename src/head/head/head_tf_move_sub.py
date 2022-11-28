import rclpy
from rclpy.node import Node

import tf2_ros

from std_msgs.msg import String
from mbit_interfaces.msg import HeadState
from geometry_msgs.msg import TransformStamped

class HeadTFMoveSub(Node):

    def __init__(self):
        super().__init__('head_tf_move_sub')
        self.subscription = self.create_subscription(String, 'head_move', self.tf_move_callback, 10)
        self.subscription
        
        self.publisher_ = self.create_publisher(HeadState,
                                                'update_head_state',
                                                10)


        self.lastx = ""
        self.lasty = ""
        self.br = tf2_ros.TransformBroadcaster(self)

    def tf_move_callback(self, msg):
        if msg.data == "up" or msg.data == "down" or msg.data == "middle":
            self.lasty = msg.data
        if msg.data == "left" or msg.data == "right" or msg.data == "center":
            self.lastx = msg.data

        if self.lastx == "center" and self.lasty == "down":
            t = TransformStamped()
            
            t.header.stamp = self.get_clock().now().to_msg()
            t.header.frame_id = '/topcamera_rgb_optical_frame'
            t.child_frame_id = 'hobbit'

            t.transform.translation.x = -0.010
            t.transform.translation.y = 0.513
            t.transform.translation.z = 1.079

            t.transform.rotation.x = 0.694
            t.transform.rotation.y = -0.668
            t.transform.rotation.z = 0.178
            t.transform.rotation.w = 0.199

            self.br.sendTransform(t)

            '''
            self.br.sendTransform((-0.010, 0.513, 1.079),
                            (0.694, -0.668, 0.178, 0.199),
                            #rclpy.Time.now(),
                            self.get_clock().now(),
                            "/hobbit",
                            "/topcamera_rgb_optical_frame")
            '''
        '''
        if lastx == "right" and lasty == "down":
            br.sendTransform((-0.0944817, 0.543719, 1.04987),
                            (-0.247253, 0.939565, -0.226823, -0.226823),
                            #rclpy.Time.now(),
                            self.get_clock().now(),
                            "/hobbit",
                            "/topcamera_rgb_optical_frame")
        '''
        '''
        if lastx == "right" and lasty == "down":
            br.sendTransform((-013725, 0.557794, 1.03807),
                            (-0.2514, 0.94008, -0.21544, -0.0813494),
                            #rclpy.Time.now(),
                            self.get_clock().now(),
                            "/hobbit",
                            "/topcamera_rgb_optical_frame")
        '''
        self.update_head_state_callback()

    def update_head_state_callback(self):
        msg = HeadState()
        msg.lastx = self.lastx
        msg.lasty = self.lasty
        self.publisher_.publish(msg)


def main():
    rclpy.init()
    head_tf_move_sub = HeadTFMoveSub()
    rclpy.spin(head_tf_move_sub)

    head_tf_move_sub.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
