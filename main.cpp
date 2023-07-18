#include "raylib.h"

// global variables

// window settings
const unsigned int wHeight = 350;
const unsigned int wWidth = 400;

int main() {
    InitWindow(wWidth,wHeight,"raylib");

    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(BLUE);
        EndDrawing();
    }
    
    return 0;
}