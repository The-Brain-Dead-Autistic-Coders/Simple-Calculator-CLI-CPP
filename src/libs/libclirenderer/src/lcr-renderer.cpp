#include <iostream>
#include <fstream>
#include <cmath>
#include <cstdlib>

#ifdef _WIN32
    #include <windows.h>
#endif

//Main h file
#include "../libclirenderer.h"

void clearScreen() {
    #ifdef _WIN32
        // Get the standard output handle for Windows
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        if (hConsole != INVALID_HANDLE_VALUE) {
            DWORD mode = 0;
            GetConsoleMode(hConsole, &mode);
            // Enable ANSI escape code processing
            SetConsoleMode(hConsole, mode | ENABLE_VIRTUAL_TERMINAL_PROCESSING);
        }
    #endif

    // \033[H   -> Moves cursor to top-left
    // \033[2J  -> Clears visible viewport
    // \033[3J  -> Wipes out scrollback history
    std::cout << "\033[H\033[2J\033[3J" << std::flush;
}


//Render a square based on parameters
void renderSquare(int width, int height) {
    int lineHeightCounterStorage = height;
    int lineWidthCounterStorage = width;
    std::cout << "┌";
    while (width > 2) {
        std::cout << "─";
        width = width - 1;
    }
    std::cout << "┐";
    width = lineWidthCounterStorage;
    std::cout << "\n";
    while (height > 2) {
        std::cout << "│";
        while (width > 2) {
            std::cout << " ";
            width = width - 1;
        }
        width = lineWidthCounterStorage;
        std::cout << "│";
        std::cout << "\n";
        height = height - 1;
    }
    height = lineHeightCounterStorage;
    std::cout << "└";
    while (width > 2) {
        std::cout << "─";
        width = width - 1;
    }
    std::cout << "┘";
}


//Offset terminal text cursor
void offsetCursor(int x, int y) {
    while (y > 0) {
        std::cout << "\n";
        y = y - 1;
    }
    while (x > 0) {
        std::cout << " ";
        x = x - 1;
    }
}