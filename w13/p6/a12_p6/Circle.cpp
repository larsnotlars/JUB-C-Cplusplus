/*
CH-230-A
a12p6.cpp
Lars Schuster
lschuster@jacobs-university.de
*/
#include <iostream>
#include <cmath>
#include "Circle.h"

Circle::Circle(const char *n, double a) : Area(n) {
	radius = a;
}

Circle::~Circle() {
}

double Circle::calcArea() const {
	std::cout << "calcArea of Circle...";
	return radius * radius * M_PI;
}

//method to calculate the perimeter
double Circle::calcPeri() const
{
    std::cout << "calcPeri of Circle...";
    return 2* radius * M_PI;
}
