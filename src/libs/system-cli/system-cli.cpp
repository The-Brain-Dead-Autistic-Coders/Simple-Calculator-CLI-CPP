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