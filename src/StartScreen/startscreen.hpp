#pragma once

#include "../UI/buttons.hpp"
#include "../drawobject.hpp"

void hostGameCallback();
void joinGameCallback();

class StartScreen : public DrawObject
{
public:
  StartScreen();
  ~StartScreen();
  void draw();
  enum screenState
  {
    MainScreen,
    HostGame,
    JoinGame,
  };
  void switchScreen(enum screenState ss);

private:
  Button *hostGame;
  Button *joinGame;
  screenState currentScreen = MainScreen;
};

extern StartScreen *startScreen;