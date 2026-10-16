//CPP libs
#include <iostream>
#include <fstream>
#include <cmath>
#include <cstdlib>

//External libs
#include "../external/libclirenderer/include/libclirenderer/libclirenderer.h"



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
            showCursor(false);
            while (offsetY < 20 && offsetX < 20) {
                //clearScreen();
                clearScreen();
                offsetCursorAnsi(offsetX, offsetY);
                //renderSquare(squareWidthAnim, squareHeightAnim);
                std::cout << "DVD" << std::flush;
                offsetX = offsetX + 1;
                waitFloat(0.4);

                //clearScreen();
                clearScreen();
                offsetCursorAnsi(offsetX, offsetY);
                //renderSquare(squareWidthAnim, squareHeightAnim);
                std::cout << "DVD" << std::flush;
                offsetY = offsetY + 1;
                waitFloat(0.4);

            }
            showCursor(true);
            
            
        }

        if (userInput == "scrsaver") {
            int lifespan = 60;
            std::string scrsaverInput = "Placeholder";
            std::cin >> scrsaverInput;
            while (lifespan > 0) {
                showCursor(false);
                clearScreen();
                offsetCursorAnsi((rand() % 81), (rand() % 25));
                std::cout << scrsaverInput << std::flush;
                waitFloat(0.01);
                lifespan = lifespan - 1;
            }
            showCursor(true);
        }


    }

    return 0;
    
}