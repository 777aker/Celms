#include "UI/colors.hpp"

#include <raylib.h>

#include "drawobject.hpp"

std::vector<DrawObject *> objectsToDraw{};

int main() {

  constexpr int screenWidth = 800;
  constexpr int screenHeight = 600;

  InitWindow(screenWidth, screenHeight, "CELMS");
  SetTargetFPS(60);

  while (!WindowShouldClose()) {
    BeginDrawing();
    ClearBackground(midnight_blue);

    for (DrawObject *object : objectsToDraw) {
      object->draw();
    }

    EndDrawing();
  }

  CloseWindow();
}