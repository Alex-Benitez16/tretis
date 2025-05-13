#include "raylib.h"
#include <stdio.h>

int main() {
  InitWindow(800, 400, "Hello World");

  while (!WindowShouldClose()) {
    ClearBackground(RAYWHITE);
    DrawText("Hello World!", 0, 0, 16, DARKGRAY);
  }

  CloseWindow();
  return 0;
}
