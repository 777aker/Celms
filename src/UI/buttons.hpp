#pragma once

#include <raylib.h>
#include <string>

#include "../drawobject.hpp"

class Button : public DrawObject {
public:
  Button(Color backgroundColor, Color hoverColor, float x, float y, float width,
         float height, std::string text, void (*callback)());
  ~Button();
  void draw();

private:
  Color backgroundColor;
  Color hoverColor;
  Rectangle buttonRect;
  std::string text;
  void (*callback)();
};