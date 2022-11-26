import rclpy
from rclpy.node import Node

import tf

class HeadTFMoveSub(Node):

    def __init__(self):
        super().__init__('head_tf_move_sub')
        self.subscription = self.create_subscription(String, 'head_move', self.tf_move_callback, 10)
        self.subscription

        self.lastx = ""
        self.lasty = ""
        self.br = tf.TransformBroadcaster()

    def tf_move_callback(self, msg):
        if msg.data == "up" or msg.data == "down" or msg.data == "middle":
            lasty = msg.data
        if msg.data == "left" or mrs.data == "right" or msg.data == "center":
            lastx = msg.data

        if lastx == "center" and lasty == "down":
            br.sendTransform((-0.010, 0.513, 1.079),
                            (0.694, -0.668, 0.178, 0.199),
                            rospy.Time.now(),
                            "/hobbit",
                            "/topcamera_rgb_optical_frame")

        '''
        if lastx == "right" and lasty == "down":
            br.sendTransform((-0.0944817, 0.543719, 1.04987),
                            (-0.247253, 0.939565, -0.226823, -0.226823),
                            rospy.Time.now(),
                            "/hobbit",
                            "/topcamera_rgb_optical_frame")
        '''
        '''
        if lastx == "right" and lasty == "down":
            br.sendTransform((-013725, 0.557794, 1.03807),
                            (-0.2514, 0.94008, -0.21544, -0.0813494),
                            rospy.Time.now(),
                            "/hobbit",
                            "/topcamera_rgb_optical_frame")
        '''


def main():
    rclpy.init()
    head_tf_move_sub = HeadTFMoveSub()
    rclpy.spin(head_tf_move_sub)

    head_tf_move_sub.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
