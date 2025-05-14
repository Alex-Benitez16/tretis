#include "raylib.h"
#include <cmath>

int main(void) {
  InitWindow(800, 600, "Bouncing Ball");

  int x = 370;
  int y = 200;
  float radius = 40;

  double velocity = 0;

  int scale = 200;

  SetTargetFPS(60);

  double start = GetTime();
  while (!WindowShouldClose()) {
    velocity += 9.81 * GetFrameTime() * scale;

    y += velocity * GetFrameTime();

    if (y + radius > 600) {
      y = 600 - radius;
      velocity = -velocity * 0.90;
    }

    BeginDrawing();
    ClearBackground(RAYWHITE);
    DrawCircle(x, y, radius, BLUE);
    DrawText(TextFormat("Velocity: %f", velocity), 10, 10, 20, DARKGRAY);
    EndDrawing();
  }

  CloseWindow();
  return 0;
}
