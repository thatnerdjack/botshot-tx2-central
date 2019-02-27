//lidar

#include "rplidar-sdk/include/rplidar.h"

void lidar_connect() {
  rp::standalone::rplidar::RPlidarDriver *lidar = rp::standalone::rplidar::RPlidarDriver::CreateDriver(0);
  u_result res = lidar->connect("PATH", 256000);

  if(IS_OK(res)) {
    printf("YEEHAW\n");
    lidar->disconnect();
  } else {
    fprintf(stderr, "Failed to connect to LIDAR %08x\r\n", res);
  }
}