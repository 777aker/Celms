#pragma once

#include "../UI/buttons.hpp"
#include "../drawobject.hpp"

class StartScreen : public DrawObject {
public:
  StartScreen();
  ~StartScreen();
  void draw();

private:
  Button hostGame;
  Button joinGame;
};