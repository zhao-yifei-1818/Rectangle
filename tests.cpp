/**
 * @brief Assignment 3
 * @name Yifei Zhao
 */
#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#define NOGDI
#include "Rectangle.h"
#include "doctest.h"

using doctest::Approx;

int squareDifference(int a, int b)
{
  return (a - b) * (a - b);
}

double distance(int x1, int y1, int x2, int y2)
{
  return sqrt(squareDifference(x1, x2) + squareDifference(y1, y2));
}
TEST_CASE("Rectangle/Constructor1 - 3 Arguments")
{
  // Build rectangle
  Point p1(1, 5);
  Rectangle r1(p1, 2, 4);

  // now see if it has the right info
  Point temp = r1.getUpperLeftVertex();
  REQUIRE(temp.isSameAs(p1) == true);

  // dimensions are doubles, compare using Approx from doctest to check equality
  REQUIRE(r1.getHeight() == Approx(2));
  REQUIRE(r1.getWidth() == Approx(4));
}

TEST_CASE("Rectangle getArea()")
{
  // Build rectangle
  Point p1(1, 5);
  Rectangle r1(p1, 2, 4);
  REQUIRE(r1.getArea() == Approx(8));

  Rectangle r2(p1, 10, 4);
  REQUIRE(r2.getArea() == Approx(40));
}

TEST_CASE("getHeight()")
{
  // Build rectangle
  Point p1(1, 5);
  Rectangle r1(p1, 2, 4);
  REQUIRE(r1.getHeight() == Approx(2));
}
TEST_CASE("getWidth()")
{
  // Build rectangle
  Point p1(1, 5);
  Rectangle r1(p1, 2, 4);
  REQUIRE(r1.getWidth() == Approx(4));
}

TEST_CASE("Rectangle getCenter()")
{
  // Build rectangle
  Point p1(1, 5);
  Rectangle r1(p1, 2, 4);
  Point ans1(3, 4);
  REQUIRE(r1.getCenter().getX() == ans1.getX());
  REQUIRE(r1.getCenter().getY() == ans1.getY());

  Point p2(0, 0);
  Rectangle r2(p2, 2, 4);
  Point ans2(2, -1);
  REQUIRE(r2.getCenter().getX() == ans2.getX());
  REQUIRE(r2.getCenter().getY() == ans2.getY());
}

TEST_CASE("Rectangle getPerimeter()")
{
  // Build rectangle
  Point p1(1, 5);
  Rectangle r1(p1, 2, 4);

  REQUIRE(r1.getPerimeter() == Approx(12));
  Point p2(0, 0);
  Rectangle r2(p2, 0, 4);

  REQUIRE(r2.getPerimeter() == Approx(8));
}

TEST_CASE("Rectangle contains()")
{
  // Build rectangle
  Point p1(1, 5);
  Rectangle r1(p1, 2, 4);

  REQUIRE(r1.contains(p1) == true);
  Point p2(20, 20);
  REQUIRE(r1.contains(p2) == false);
}

TEST_CASE("squareDifference")
{
  // if a CHECK fails, the test case as a whole will fail, but still
  // try the rest of the assertions.
  CHECK(squareDifference(1, 4) == 9);

  // if a REQUIRE fails, the rest of the assertions in this
  // test case aren't even worth trying---just move on to the next
  // test case.
  REQUIRE(squareDifference(1, 4) == 9);

  // Test that ordering does not matter
  CHECK(squareDifference(4, 1) == 9);

  // Test that negatives are handled
  int answer3 = squareDifference(-2, -6);
  CHECK(answer3 == 16);
}

TEST_CASE("distance")
{
  int x1 = 0, y1 = 0;
  int x2 = 3, y2 = 4;
  int x3 = -2, y3 = -2;

  // Approx sees if a double value is "close enough" to believe that any
  // difference is based on rounding error.  Always test doubles using
  // Approx.  It only exists in unit tests---do not use in normal code.
  CHECK(distance(x1, y1, x2, y2) == Approx(5.0));

  // Check reverse direction
  CHECK(distance(x2, y2, x1, y1) == Approx(5.0));

  // Test some negative coordinate values
  double answer2 = distance(x1, y1, x3, y3);
  double answer2Desired = 2 * sqrt(2);
  CHECK(answer2 == Approx(answer2Desired));
}
