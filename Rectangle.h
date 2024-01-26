#ifndef RECTANGLE_H
#define RECTANGLE_H
/**
 * @brief Assignment 3
 * @name Yifei Zhao
 */
#include "Point.h"
class Rectangle {
private:
  Point upperLeftVertex;
  double height;
  double width;

public:
  /**
   * @brief Rectangle make a rectangle at p1 with height and width
   */
  Rectangle();
  Rectangle(Point p1, double startHeight, double startWidth);
  /**
   * @brief Rectangle Construct rectangle using given point
   * @param p1 upper left corner and the indicated width and height.
   * @param height Initial height of rectangle.
   * @param width Initial width of rectangle.
   */
  void translate(double xAmount, double yAmount);
  /**
   * @brief translate Move the rectangle by the given amount in x and y
   * dimensions.
   * @param xAmount Amount to move in the x direction.
   * @param yAmount Amount to move in the y direction.
   */

  double getWidth() const;
  /**
   * @brief getWidth Return the width of the rectangle.
   * @return Width of the rectangle.
   */
  double getHeight() const;
  /**
   * @brief getHeight Return the height of the rectangle.
   * @return Height of the rectangle.
   */

  Point getUpperLeftVertex() const;
  /**
   * @brief getY Return left Vertex of rectangle.
   * @return left vertex of the rectangle
   */
  Point getCenter() const;
  /**
   * @brief Calculate location at center of rectangle, make a Point representing
   * it to return.
   * @return a point representing center
   */
  double getArea() const;
  /**
   * @brief getArea Calculate and return the area of the rectangle.
   * @return Area of the rectangle.
   */

  double getPerimeter() const;
  /**
   * @brief getPerimeter Calculate and return the perimeter of the rectangle.
   * @return Perimeter of the rectangle.
   */

  bool contains(const Point& p) const;
  /**
   * @brief contains Check if the rectangle contains the given point.
   * @param p Point to check.
   * @return True if the rectangle contains the point, false otherwise.
   */
};
#endif // RECTANGLE_H
