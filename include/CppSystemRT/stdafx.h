#ifndef _CPPSYSTEMRT_STDAFX_H
#define _CPPSYSTEMRT_STDAFX_H

#include <stdio.h>
#include <stdarg.h>
#include <exception>
#include <fstream>
#include <iostream>
#include <memory>
#include <string>
#include <thread>
#include <chrono>
#include <utility>
#include <vector>
#include <map>
#include <sstream>
#include <functional>
#include <cctype>
#include <limits>
#include <atomic>
#include <regex>
#include <tuple>
#include <time.h>

#ifdef _WIN32

#include <direct.h>
#include <tchar.h>
#include <Windows.h>
#include <winsock2.h>
#include <ws2tcpip.h>

#elif __linux__

#define HANDLE int

#include <dlfcn.h>
#include <pthread.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <sys/ioctl.h>
#include <sys/stat.h>
#include <netinet/in.h>
#include <netdb.h> 
#include <stdlib.h>
#include <fcntl.h>
#include <errno.h>
#include <unistd.h>
#include <signal.h>
#include <syslog.h>
#include <string.h>
#include <limits.h>

#endif

#endif
