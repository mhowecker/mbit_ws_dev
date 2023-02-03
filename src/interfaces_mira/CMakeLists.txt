cmake_minimum_required(VERSION 3.8)
project(interfaces_mira)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(tf2 REQUIRED)
find_package(tf2_ros REQUIRED)
find_package(nav_msgs REQUIRED)
find_package(actionlib_msgs REQUIRED)
#find_package(dynamic_reconfigure REQUIRED)
find_package(pugixml REQUIRED)
#find_package(occupancy_grid_utils REQUIRED)

# include cmake file for MIRA
include(CMakeLists.mira)

#add_action_files(
#  DIRECTORY action
#  FILES MiraSendingGoals.action MiraDocking.action
#)

#generate_messages(
#  DEPENDENCIES actionlib_msgs std_msgs geometry_msgs
#)

install(
  DIRECTORY include/
  DESTINATION include
)

ament_package()

include_directories(include
  ${catkin_INCLUDE_DIRS}
  ${MIRA_ROOT_DIR}/toolboxes/RobotDataTypes/include
  ${MIRA_ROOT_DIR}/toolboxes/Navigation/include
  #${MIRA_ROOT_DIR}/toolboxes/Mapping/include #previous versions
  ${MIRA_ROOT_DIR}/../mira-commercial/toolboxes/Mapping/include #different from previous versions of Mira

)

add_executable(interfaces_node src/interfaces_node.cpp
  src/MiraRobotModule.cpp
  src/ModuleFactory.cpp
  src/MiraRobot.cpp
  src/MiraVirtualLaser.cpp
  src/MiraSendingGoals.cpp
  src/MiraGetPose.cpp
  src/MiraGetPath.cpp
  src/MiraGoRecharge.cpp
  src/MiraRobotDrive.cpp
  src/MiraRobotCharger.cpp
  src/MiraRobotDriveRos.cpp
)

ament_target_dependencies(
	interfaces_node
	rclcpp
	tf2
	tf2_ros
	std_msgs
	sensor_msgs
	nav_msgs
	pugixml
)

#add_dependencies(interfaces_node ${PROJECT_NAME}_gencfg mira_msgs_gencpp) #FIXME

target_link_libraries(interfaces_node ${catkin_LIBRARIES} Navigation Mapping Maps)

#add_dependencies(interfaces_node mira_msgs_gencpp) #FIXME

# for mira support (auto linking, enabling C++0x support,...)
ament_add_mira(interfaces_node)
