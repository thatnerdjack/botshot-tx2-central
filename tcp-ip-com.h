#pragma once

#include "pch.h"

#ifdef __WIN32__
# include <WinSock2.h>
#else
# include <sys/socket.h>
#endif
