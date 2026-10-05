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
    }

    return 0;
    
}