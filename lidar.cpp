//lidar

#include "pch.h"
#include "rplidar-sdk/include/rplidar.h"

void connect() {
  RPlidarDriver *RPlidarDriver::CreateDriver(_u32 256000);
}