#ifndef RECTANGLE_H
#define RECTANGLE_H
/**
 * @brief Assignment 1 Rectangle.h
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
  /**
   * @brief Rectangle Make a rectangle at 0,0 with Width and Height 0.
   */
  Rectangle(Point p1, double startHeight, double startWidth);
  /**
   * @brief Rectangle Construct rectangle using given point
   * @param p1 upper left corner and the indicated width and height.
   * @param height Initial height of rectangle.
   * @param width Initial width of rectangle.
   */
  Rectangle(Point p1, Point p2);
  /**
   * @brief Rectangle Construct rectangle using topleft and botright. The two
   * points might not be in order as upperLeft and lowerRight. The constructor
   * should figure out appropriate coordinates to use for its state based on
   * coordinates of these two points.
   * @param p1 upper left corner
   * @param p2 bottom right corner
   */
  void translate(double xAmount, double yAmount);
  /**
   * @brief translate Move the rectangle by the given amount in x and y
   * dimensions.
   * @param xAmount Amount to move in the x direction.
   * @param yAmount Amount to move in the y direction.
   */

  double getWidth();
  /**
   * @brief getWidth Return the width of the rectangle.
   * @return Width of the rectangle.
   */
  double getHeight();
  /**
   * @brief getHeight Return the height of the rectangle.
   * @return Height of the rectangle.
   */

  Point getUpperLeftVertex();
  /**
   * @brief getY Return left Vertex of rectangle.
   * @return left vertex of the rectangle
   */
  Point getCenter();
  /**
   * @brief getY Return left Vertex of rectangle.
   * @return left vertex of the rectangle
   */
  double getArea();
  /**
   * @brief getArea Calculate and return the area of the rectangle.
   * @return Area of the rectangle.
   */

  double getPerimeter();
  /**
   * @brief getPerimeter Calculate and return the perimeter of the rectangle.
   * @return Perimeter of the rectangle.
   */

  bool contains(Point p);
  /**
   * @brief contains Check if the rectangle contains the given point.
   * @param p Point to check.
   * @return True if the rectangle contains the point, false otherwise.
   */
};
#endif // RECTANGLE_H
