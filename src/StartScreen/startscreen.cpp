#include "startscreen.hpp"

#include "../UI/colors.hpp"

void hostGameCallback() {}

void joinGameCallback() {}

StartScreen::StartScreen() {
  hostGame = new Button(carrot, pumpkin, 100, 100, 200, 50, "Host Game",
                        hostGameCallback);
  joinGame = new Button(turquoise, green_sea, 100, 250, 200, 50, "Join Game",
                        joinGameCallback);
}

StartScreen::~StartScreen() {
  delete hostGame;
  delete joinGame;
}

void StartScreen::draw() {
  hostGame->draw();
  joinGame->draw();
}