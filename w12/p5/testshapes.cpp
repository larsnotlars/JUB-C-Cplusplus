/*
CH-230-A
a11p5.cpp
Lars Schuster
lschuster@jacobs-university.de
*/

#include "Shapes.h"
#include <iostream>

int main() 
{
  Circle c("first circle", 3, 4, 7);//create instance of circle
  //call mehtods
  c.printName();
  std::cout << "Area: " << c.area() << std::endl;
  std::cout << "Perimeter: " << c.perimeter() << "\n" << std::endl;

  Rectangle r("first rectangle",2,3,4,2);//create instance of Rectangle
  //call mehtods
  r.printName();
  std::cout << "Area: " << r.area() << std::endl;
  std::cout << "Perimeter: " << r.perimeter() << "\n" << std::endl;

  Square s("first square",1,1,3.5);//create instance of Square
  //call mehtods
  s.printName();
  std::cout << "Area: " << s.area() << std::endl;
  std::cout << "Perimeter: " << s.perimeter() << "\n" << std::endl;
}
