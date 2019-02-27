//lidar

#include "rplidar-sdk/include/rplidar.h"

void lidar_connect() {
<<<<<<< HEAD
  rp::standalone::rplidar::RPlidarDriver *lidar = rp::standalone::rplidar::RPlidarDriver::CreateDriver();
  u_result res = lidar->connect("PATH", 256000);
=======
  rp::standalone::rplidar::RPlidarDriver *lidar = rp::standalone::rplidar::RPlidarDriver::CreateDriver(0);
  u_result res = lidar->connect("PATH", 256000);
>>>>>>> c993d178b66a40d2fa5b9aca37b01ef2af2983b5

  if(IS_OK(res)) {
    printf("YEEHAW\n");
    lidar->disconnect();
  } else {
    fprintf(stderr, "Failed to connect to LIDAR %08x\r\n", res);
  }
}
