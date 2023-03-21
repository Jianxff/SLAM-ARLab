#ifndef PLATFORM_SLEEP_H
#define PLATFORM_SLEEP_H

#ifdef WINDOWS
#include "PlatformSleep.h"
#else
#include <unistd.h>
#endif

void sleep_platform(int milliseconds);


#endif