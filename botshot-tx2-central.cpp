// botshot-tx2-central.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include "tcp-ip-com.cpp"

#include <iostream>
#include <thread>

using namespace std;

int main() {
  printf("yeet\n");

  init();

  char buffer[1024];
  int *read_status;

  std::thread read_thread(start_read, buffer, sizeof(buffer), read_status);

  read_thread.join();

  printf("yote\n");
  return 0;
}