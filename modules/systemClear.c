#include <stdlib.h>

#if defined(_WIN32) || defined(_WIN64)
#include <windows.h>
#endif // defined

void universalClear()
{
#if defined(_WIN32) || defined(_WIN64)
system ("cls");
#elif defined(__linux__)
system("clear");
#else
#error not supported operating system
#endif
}

void universalSleep(double time)
{
#if defined(_WIN32) || defined(_WIN64)
    system("timeout /t 2");
#elif defined(__linux__)
    char str[128];
    sprintf (str,"sleep %f",time);
    system (str);
#else
#error not supported operating system
#endif
}
