#pragma once

#include <raylib.h>
#include <string>

#include "../drawobject.hpp"

class Button : public DrawObject {
public:
  Button(Color backgroundColor, Color hoverColor, int x, int y, int width,
         int height, std::string text, void (*callback)());
  ~Button();
  void draw();

private:
  Color backgroundColor;
  Color hoverColor;
  int x;
  int y;
  int width;
  int height;
  std::string text;
  void (*callback)();
};