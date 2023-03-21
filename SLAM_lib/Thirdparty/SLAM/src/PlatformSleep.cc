#include "PlatformSleep.h"

void sleep_platform(int milliseconds)
{
#ifdef WINDOWS
    Sleep(milliseconds);
#else
    usleep(milliseconds * 1000);
#endif
}