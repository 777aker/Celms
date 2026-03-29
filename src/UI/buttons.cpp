#include "buttons.hpp"

#include "colors.hpp"

Button::Button(Color tbackgroundColor, Color thoverColor, float tx, float ty,
               float twidth, float theight, std::string ttext, void (*tcallback)())
    : backgroundColor(tbackgroundColor), hoverColor(thoverColor), text(ttext), callback(tcallback) {
        buttonRect = {tx, ty, twidth, theight};
      }

Button::~Button(){};

void Button::draw() {
  if(CheckCollisionPointRec(GetMousePosition(), buttonRect)) {
    if(IsMouseButtonPressed(MOUSE_BUTTON_LEFT)) {
      callback();
    }
    DrawRectangleRec(buttonRect, hoverColor);
  } else {
    DrawRectangleRec(buttonRect, backgroundColor);
  }
  DrawText(text.c_str(), buttonRect.x + 20, buttonRect.y, buttonRect.height * 0.8, clouds);
}