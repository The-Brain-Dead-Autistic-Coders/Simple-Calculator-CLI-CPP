#include <iostream>
#include <fstream>
#include <cmath>
#include <cstdlib>
#include "system-cli.h"




//Clears the Terminal Screen Functions across operating systems
void clearScreen() {
    
    #ifdef _WIN32
        std::system("cls");
    #endif

    #ifdef __linux__
        std::system("clear");
    #endif

    #ifdef __APPLE__
        std::system("clear");
    #endif


}

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