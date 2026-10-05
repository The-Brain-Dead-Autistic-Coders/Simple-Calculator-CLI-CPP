#ifndef SYSTEMCLI_H
#define SYSTEMCLI_H

//Clears text on the terminal window
void clearScreen();

//Draws a square based on parameters
void renderSquare(int width, int height);

//Offsets the terminals cursor based on parameters
void offsetCursor(int x, int y);

#endif