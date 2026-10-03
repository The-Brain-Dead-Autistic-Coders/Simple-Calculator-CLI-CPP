//CPP libs
#include <iostream>
#include <fstream>
#include <cmath>

//Internal libs
#include "libs/system-cli/system-cli.h"





int main() {
    bool exit = false;
    std::string userInput = "a";

    while (exit == false) {
        std::cout << "test";
        std::cin >> userInput;
        if (userInput == "clear") {
            clearScreen();
        }

        if (userInput == "exit") {
            exit = true;
        }
    }

    return 0;
}