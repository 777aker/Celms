#include "UI/colors.hpp"

#include <raylib.h>

#include "StartScreen/startscreen.hpp"
#include "drawobject.hpp"

std::vector<DrawObject *> objectsToDraw{};

int main() {

  constexpr int screenWidth = 800;
  constexpr int screenHeight = 600;

  InitWindow(screenWidth, screenHeight, "CELMS");
  SetTargetFPS(60);

  startScreen = new StartScreen();
  objectsToDraw.push_back(startScreen);

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