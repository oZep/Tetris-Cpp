#include <raylib.h>
#include "grid.h"
#include "tiles.cpp"

int main() {
    // Determin the Game Window Width and Height
    const int screenWidth = 300;
    const int screenHeight = 600;

    Color screenColor = Color{255, 255, 255, 255};

    Grid grid = Grid();
    grid.Print();

    LBlock block = LBlock();

    
    // Initialize the Window
    InitWindow(screenWidth, screenHeight, "Tetris");

    // Setting the Frames Per Second
    SetTargetFPS(60);

    // The Game Loop
    while (!WindowShouldClose() /*WindowShouldClose returns true if esc is clicked and closes the window*/) {

        // Setup Canvas
        BeginDrawing();
        // Clear canvas to a specific color to avoid flicker
        ClearBackground(screenColor);

        grid.Draw();
        block.Draw();

        // Here goes all the Game Logic

        // teardown Canvas
        EndDrawing();
    }
    CloseWindow();
    return 0;
}
