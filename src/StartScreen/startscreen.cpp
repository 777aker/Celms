#include "startscreen.hpp"

#include "../UI/colors.hpp"
#include "../Multiplayer/socketManager.hpp"

StartScreen *startScreen;

void hostGameCallback()
{
  startScreen->switchScreen(startScreen->HostGame);
}

void joinGameCallback()
{
  startScreen->switchScreen(startScreen->JoinGame);
}

StartScreen::StartScreen()
{
  hostGame = new Button(carrot, pumpkin, 100, 100, 300, 50, "Host Game",
                        hostGameCallback);
  joinGame = new Button(turquoise, green_sea, 100, 250, 300, 50, "Join Game",
                        joinGameCallback);
}

StartScreen::~StartScreen()
{
  delete hostGame;
  delete joinGame;
}

void StartScreen::draw()
{
  switch (currentScreen)
  {
  case MainScreen:
    hostGame->draw();
    joinGame->draw();
    break;
  case HostGame:
    break;
  case JoinGame:
    break;
  }
}

void StartScreen::switchScreen(enum screenState ss)
{
  currentScreen = ss;
  switch (currentScreen)
  {
  case MainScreen:
    break;
  case HostGame:
    socketManager->startSocket();
    printf("Socket Opened: '%s'\n", socketManager->getAddressPort());
    break;
  case JoinGame:
    break;
  }
}