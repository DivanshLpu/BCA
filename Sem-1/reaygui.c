#include<raylib.h>

int main(void)
{
    InitWindow(800, 450, "Hello");

    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(RAYWHITE);
        DrawText("Hello GUI!", 250, 200, 30, BLACK);
        EndDrawing();
    }

    CloseWindow();
    return 0;
}