#include <iostream>
#include <fstream>
#include <cmath>
#include <cstdlib>

//Main h file
#include "../libclirenderer.h"


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