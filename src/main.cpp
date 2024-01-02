#include <raylib.h>
#include "ball.h"

int main()
{
    Color screenColor = Color{220, 100, 13, 255};

    const int screenWidth = 300;
    const int screenHeight = 600;

    Ball ball = Ball();

    InitWindow(screenWidth, screenHeight, "Tetris");
    SetTargetFPS(60);

    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(screenColor);
        ball.Update();
        ball.Draw();
        EndDrawing();
    }

    CloseWindow();
    return 0;
}