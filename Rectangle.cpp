#include "Rectangle.h"
#include "Point.cpp"
#include "Point.h"
#include <cmath>

Rectangle::Rectangle()
{
  // Default constructor, setting Point as 0, height and width 0.
  height = 0;
  width = 0;
}

Rectangle::Rectangle(const Point& p1, double startHeight, double startWidth)
{
  // set point to be a copy of the given point
  upperLeftVertex = p1;
  // also set height & width to given parameter
  int height = startHeight;
  int width = startWidth;
}
// Rectangle::Rectangle(const Point& p1, const Point& p2){}

void Rectangle::translate(double xAmount, double yAmount)
{
}

double Rectangle::getWidth() const
{
  return width;
}

double Rectangle::getHeight() const
{
  return height;
}