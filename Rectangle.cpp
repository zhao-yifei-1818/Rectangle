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
  // Our Rec's "x" is set to ("x" plus additional amount)
  // same as y
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
  Point p1; // make a point to return
  // using member function to acccess, and modify values.
  p1.setX(p1.getX()
          + (getWidth()
             / 2)); // from "x" in upper left vertex's perspective, Rectangle
                    // center is to his right which is positive x direction.
  p1.setY(
      p1.getY()
      - (getHeight() / 2)); // from "y" in upper left vertex's perspective, Rec
                            // center is to his down (negative Y direction)
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
bool Rectangle::contains(const Point& p) const
{
  // if p.getx() is within Domain X and X+width
  if (p.getX() <= (upperLeftVertex.getX() + width)
      && p.getX() >= upperLeftVertex.getX()) {
    // and if p.getY() is within Range Y and Y-height
    if (p.getY() <= upperLeftVertex.getY()
        && p.getX() >= (upperLeftVertex.getY() - height))
      return true; // If both is satisfied then Point p is inside Rectangle, Rec
                   // contains p.
  }
  return false;
}
