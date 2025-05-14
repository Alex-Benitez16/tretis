#include "raylib.h"

int main() {
  InitWindow(800, 400, "Hello world!");

  while (!WindowShouldClose()) {
    BeginDrawing();
    ClearBackground(RAYWHITE);
    DrawText("This is raylib!", 0, 0, 16, DARKGRAY);
    EndDrawing();
  }

  CloseWindow();
  return 0;
}
