/**
 * @brief Assignment 3
 * @name Yifei Zhao
 */
#include "Rectangle.h"
#include <cmath>

Rectangle::Rectangle()
{
  upperLeftVertex.setX(0);
  upperLeftVertex.setY(0);
  // Default constructor, setting Point as 0, height and width 0.
  height = 0;
  width = 0;
}

Rectangle::Rectangle(Point p1, double startHeight, double startWidth)
{
  // set point to be a copy of the given point
  upperLeftVertex = p1;
  // also set height & width to given parameter
  height = startHeight;
  width = startWidth;
}

void Rectangle::translate(double xAmount, double yAmount)
{
  upperLeftVertex.setX(upperLeftVertex.getX() + xAmount);
  upperLeftVertex.setY(upperLeftVertex.getY() + yAmount);
}

Point Rectangle::getUpperLeftVertex() const
{
  return upperLeftVertex;
}

// Calculate location at center of rectangle, make a Point representing it to
// return.
Point Rectangle::getCenter() const
{
  Point p1;
  p1.setX(p1.getX() - (getWidth() / 2));
  p1.setY(p1.getY() - (getHeight() / 2));
  return p1;
}

double Rectangle::getWidth() const
{
  return width;
}

double Rectangle::getHeight() const
{
  return height;
}
double Rectangle::getArea() const
{
  return width * height;
}
double Rectangle::getPerimeter() const
{
  return 2 * (width + height);
}
// bool contains(const Point& p) const{
//   if (p.getX()<= upperLeftVertex && p.getY()
// }
