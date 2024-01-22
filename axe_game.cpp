#include <cstdio>
#include "raylib.h"

int main()
{
    int width = 350;
    InitWindow(width, 200, "Axe Game");

    while(WindowShouldClose() != true)
    {
        BeginDrawing();
        ClearBackground(RED);

        DrawCircle(175, 100, 25, WHITE);

        EndDrawing();
    }
}
