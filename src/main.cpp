//CPP libs
#include <iostream>
#include <fstream>
#include <cmath>

//Internal libs
#include "libs/libclirenderer/libclirenderer.h"



//term screen 82x24

int main() {
    bool exit = false;
    std::string userInput = "a";

    while (exit == false) {
        std::cin >> userInput;

        if (userInput == "print") {
            std::cout << "test";
        }

        if (userInput == "clear") {
            clearScreen();
            clearScreen();
        }

        if (userInput == "exit") {
            exit = true;
        }

        if (userInput == "square") {
            int squareWidth;
            int squareHeight;
            std::cin >> squareWidth;
            std::cin >> squareHeight;
            clearScreen();
            clearScreen();
            renderSquare(squareWidth, squareHeight);
        }

        if (userInput == "anim") {
            int offsetY = 0;
            int offsetX = 0;
            while (offsetY < 20 && offsetX < 20) {
                clearScreen();
                clearScreen();
                offsetCursor(offsetX, offsetY);
                renderSquare(1, 1);
                offsetX = offsetX + 1;

                clearScreen();
                clearScreen();
                offsetCursor(offsetX, offsetY);
                renderSquare(1, 1);
                offsetY = offsetY + 1;

            }
            
            
        }
    }

    return 0;
    
}