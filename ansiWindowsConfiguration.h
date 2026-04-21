#pragma once
#include <windows.h>


//Function calls a windows getter holding protected system settings, moves the values into dwMode,
//then calls a macro to change the settings to enable things like colored text in the console

class ansiWindowsConfiguration {
public:
  static void setUpConsole(HANDLE &stdoutHandle, DWORD &dwMode);
};




