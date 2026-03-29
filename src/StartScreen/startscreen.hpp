#pragma once

#include "../UI/buttons.hpp"
#include "../drawobject.hpp"

void hostGameCallback();
void joinGameCallback();

class StartScreen : public DrawObject {
public:
  StartScreen();
  ~StartScreen();
  void draw();

private:
  Button *hostGame;
  Button *joinGame;
};