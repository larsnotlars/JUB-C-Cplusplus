/*
CH-230-A
a12p7.cpp
Lars Schuster
lschuster@jacobs-university.de
*/
#include <iostream>
#include "Rectangle.h"

Rectangle::Rectangle(const char *n, double a, double b) : Area(n) {
    length = a;
    width = b;
}

Rectangle::~Rectangle() {
}

double Rectangle::calcArea() const {
	std::cout << "calcArea of Rectangle...\n";
	return length*width;
}

//method to calculate the perimeter
double Rectangle::calcPeri() const
{
    std::cout << "calcPeri of Rectangle...\n";
    return 2*(length + width);
}


