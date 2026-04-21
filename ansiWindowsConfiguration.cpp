#include "ansiWindowsConfiguration.h"

#include <iostream>
#include <windows.h>

void ansiWindowsConfiguration::setUpConsole(HANDLE &stdoutHandle, DWORD &dwMode) {
    // Gets a Windows handle (identifier), to protected system settings regarding console output
    stdoutHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    if (stdoutHandle == INVALID_HANDLE_VALUE) {std::cout << "Console Error"; exit(1);}

    //dwMode is a DWORD long variable that windows will write console
    //settings to, so that they can be changed
    dwMode = 0;
    if (!GetConsoleMode(stdoutHandle, &dwMode)) {std::cout << "Console Error"; exit(1);}

    // Ensures the values representing virtual terminal processing are set to true.
    //This allows the use of things such as colored text.
    dwMode |= ENABLE_VIRTUAL_TERMINAL_PROCESSING;
    if (!SetConsoleMode(stdoutHandle, dwMode)) {std::cout << "Console Error"; exit(1);}
}
