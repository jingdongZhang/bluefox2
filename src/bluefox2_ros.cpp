#include "bluefox2/bluefox2_ros.h"

namespace bluefox2 {

bool Bluefox2Ros::Grab(const sensor_msgs::ImagePtr &image_msg) {
  // Add expose time to current time stamp
  image_msg->header.stamp += ros::Duration(bluefox2_.expose_us() * 1e-6);
  return bluefox2_.GrabImage(*image_msg);
}

}  // namespace bluefox2
