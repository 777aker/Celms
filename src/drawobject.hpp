#pragma once

#include <vector>

class DrawObject {
public:
  DrawObject(){};
  virtual void draw() = 0;
};

extern std::vector<DrawObject *> objectsToDraw;