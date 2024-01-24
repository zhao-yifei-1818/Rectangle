#include 'Rectangle.h'
#include <cmath>
  
Rectangle::Rectangle(){
  //Default constructor, setting Point as 0, height and width 0.
  
  Point.setX(0);
  Point.setY(0);

  width = 0;
  height = 0;
}


Rectangle::Rectangle(const Point& p1, double startHeight, double startWidth){
  //set point to be a copy of the given point
  upperLeftVertex = p1;
  //also set height & width to given parameter
  width = startWidth;
  height = startHeight;
}
//Rectangle::Rectangle(const Point& p1, const Point& p2){}

void Rectangle::translate(double xAmount, double yAmount){
  Point.x += xAmount;
  Point.y += yAmount;
}

void Rectangle::setRectangle(double startHeight double startWidth){
  height = abs(startHeight);
  width = abs(startWidth);
}
