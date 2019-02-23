//tcp-ip-com.cpp

#include "pch.h"

#include "tcp-ip-com.h"

#define PORT (8080)

using namespace std;

int socketDescrip, new_socket;
struct sockaddr_in address;
int addrlen = sizeof(address);
char buffer[1024] = { 0 };

int init() {
  socketDescrip = socket(AF_INET, SOCK_STREAM, 0);
  if (socketDescrip == NULL) {
    return -1;
  }

  address.sin_family = AF_INET;
  address.sin_addr.s_addr = INADDR_ANY;
  address.sin_port = htons(PORT);

  while(1) {
    if (bind(socketDescrip, (struct sockaddr *)&address, sizeof(address)) < 0) {
      printf("bind failed\n");
    } else {
      printf("BIND!\n");
      break;
    }
  }

  if (listen(socketDescrip, 3) < 0) {
    printf("listen fail\n");
    exit(EXIT_FAILURE);
  }

  new_socket = accept(socketDescrip, (struct sockaddr *)&address, (socklen_t*)&addrlen);
  if (new_socket < 0) {
    printf("accept fail\n");
    exit(EXIT_FAILURE);
  }

  return 0;
}

int start_read(char *buffer) {
    //code?
}

// int valread = read(new_socket, buffer, 1024);
// printf("%s\n", buffer);
//
// send(new_socket, hello, strlen(hello), 0);
// printf("hello message sent\n");
// return 0;
