/*
CH-230-A
a12p1.cpp
Lars Schuster
lschuster@jacobs-university.de
*/

#include "Shapes.h"
#include <iostream>

int main()
{
    Hexagon hex1("blue hexagon",0,0,9,"blue");
    Hexagon hex2("green hexagon",0,0,15,"green");
    Hexagon hex3(hex2);//Create the three hexagons

    hex1.printName();
    std::cout << "Perimeter: " << hex1.perimeter() << std::endl;
    std::cout << "Area :" << hex1.area() << "\n" << std::endl;
    //call and print methods

    hex2.printName();
    std::cout << "Perimeter: " << hex2.perimeter() << std::endl;
    std::cout << "Area :" << hex2.area() << "\n" <<std::endl;
    //call and print methods

    hex3.printName();
    std::cout << "Perimeter: " << hex3.perimeter() << std::endl;
    std::cout << "Area :" << hex3.area() << "\n" <<std::endl;
    //call and print methods
    return 0;
}
