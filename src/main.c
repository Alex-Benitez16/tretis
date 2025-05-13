#include "raylib.h"

int main() {
  InitWindow(800, 400, "Hello World");

  while (!WindowShouldClose()) {
    BeginDrawing();
    ClearBackground(RAYWHITE);
    DrawText("Hello World!", 0, 0, 16, DARKGRAY);
    EndDrawing();
  }

  CloseWindow();
  return 0;
}
