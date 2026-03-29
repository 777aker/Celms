#include "buttons.hpp"

Button::Button(Color tbackgroundColor, Color thoverColor, int tx, int ty,
               int twidth, int theight, std::string ttext, void (*tcallback)())
    : backgroundColor(tbackgroundColor), hoverColor(thoverColor), x(tx), y(ty),
      width(twidth), height(theight), text(ttext), callback(tcallback) {}

Button::~Button(){};

void Button::draw() {}