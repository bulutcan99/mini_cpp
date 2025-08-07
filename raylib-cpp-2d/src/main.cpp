#include "raylib.h"

int main() {
    const int screenWidth = 800;
    const int screenHeight = 450;

    InitWindow(screenWidth, screenHeight, "Raylib C++ Starter");

    SetTargetFPS(60);

    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(RAYWHITE);

        DrawText("Hello, Raylib + C++!", 190, 200, 20, DARKGRAY);
        DrawRectangle(100, 100, 50, 50, RED);

        EndDrawing();
    }

    CloseWindow();
    return 0;
}
