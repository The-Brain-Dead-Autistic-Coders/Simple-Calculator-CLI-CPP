#ifndef SYSTEMCLI_H
#define SYSTEMCLI_H

//Clears text on the terminal window using system
void clearScreenSys();

//Draws a square based on parameters
void renderSquare(int width, int height);

//Offsets the terminals cursor based on parameters
void offsetCursor(int x, int y);

//clears the terminal screen
void clearScreen();

// Wait with support for floating point numbers
void waitFloat(double waitTime);

// Offsets cursor using ansi codes
void offsetCursorAnsi(int x, int y);

// Initialize use of Ansi codes in windows
void winAnsiInit(bool winAnsiEnable);

// show and hide the cursor
void showCursor(bool cursorState);

#endif