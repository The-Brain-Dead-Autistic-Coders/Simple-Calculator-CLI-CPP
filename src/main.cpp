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

        if (userInput == "offset") {
            int offsetYoffset = 0;
            int offsetXoffset = 0;
            std::cin >> offsetXoffset;
            std::cin >> offsetYoffset;
            clearScreen();
            clearScreen();
            offsetCursor(offsetXoffset, offsetYoffset);
            std::cout << "DVD";
        }

        if (userInput == "anim") {
            int offsetY = 0;
            int offsetX = 0;
            int squareWidthAnim = 1;
            int squareHeightAnim = 1;
            while (offsetY < 20 && offsetX < 20) {
                //clearScreen();
                clearScreen();
                offsetCursorAnsi(offsetX, offsetY);
                //renderSquare(squareWidthAnim, squareHeightAnim);
                std::cout << "DVD";
                offsetX = offsetX + 1;
                waitFloat(2);

                //clearScreen();
                clearScreen();
                offsetCursorAnsi(offsetX, offsetY);
                //renderSquare(squareWidthAnim, squareHeightAnim);
                std::cout << "DVD";
                offsetY = offsetY + 1;
                waitFloat(2);

            }
            
            
        }
    }

    return 0;
    
}