#ifdef _WIN32
#define NOGDI
#define NOUSER
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#endif

#include "sleep_mode_prevention.h"

void PreventSleep() {
#ifdef _WIN32
    SetThreadExecutionState(ES_CONTINUOUS | ES_SYSTEM_REQUIRED | ES_DISPLAY_REQUIRED);
#endif
}

void AllowSleep() {
#ifdef _WIN32
    SetThreadExecutionState(ES_CONTINUOUS);
#endif
}
