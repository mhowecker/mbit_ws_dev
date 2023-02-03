/* MiraVirtualLaser.h
* Author: Paloma de la Puente
*
* Module for virtual laser wrappers
*/

#ifndef MIRAVIRTUALLASER_H
#define MIRAVIRTUALLASER_H


//#include <fw/Framework.h>

#include <rclcpp/rclcpp.hpp>
#include <interfaces_mira/MiraRobotModule.h>
#include "sensor_msgs/msg/laser_scan.hpp"

#include <interfaces_mira/MiraRobot.h>

#include <robot/RangeScan.h> 


class MiraVirtualLaser: public MiraRobotModule {
public:
        static MiraRobotModule* Create() {
                return new MiraVirtualLaser();
        }

        void initialize();

	void virtual_laser_loc_callback(const sensor_msgs::LaserScan::ConstPtr& msg);
        void virtual_laser_obs_callback(const sensor_msgs::LaserScan::ConstPtr& msg);
	

private:
        MiraVirtualLaser();

	ros::Subscriber virtual_laser_loc_subscriber;
        ros::Subscriber virtual_laser_obs_subscriber;

 	mira::Channel<mira::robot::RangeScan> virtual_laser_channel_loc;
	mira::Channel<mira::robot::RangeScan> virtual_laser_channel_obs;

};


#endif

