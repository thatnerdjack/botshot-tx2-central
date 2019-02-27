//lidar

#include "rplidar-sdk/include/rplidar.h"

void lidar_connect() {
  rp::standalone::rplidar::RPlidarDriver *lidar = rp::standalone::rplidar::RPlidarDriver::CreateDriver();
  u_result res = lidar->connect("/dev/serial/by-id/usb-Silicon_Labs_CP2102_USB_to_UART_Bridge_Controller_0001-if00-port0", 256000);

  if(IS_OK(res)) {
    printf("YEEHAW\n");
    lidar->disconnect();
  } else {
    fprintf(stderr, "Failed to connect to LIDAR %08x\r\n", res);
  }
}
