/*
CH-230-A
a12p7.cpp
Lars Schuster
lschuster@jacobs-university.de
*/
#include <iostream>
#include "Square.h"

//constructor is same as rectangle just that the sides have the same length
Square::Square(const char *n, double a):Rectangle(n,a,a)
{}

//destructor
Square::~Square()
{}


//method to calc area
double Square::calcArea() const
{
    std::cout << "calcArea of Square...";
    return Rectangle::calcArea();//the Rectangle method works
}

//method to calc perimeter
double Square::calcPeri() const
{
    std::cout << "calcPeri of Square...\n";
    return Rectangle::calcPeri();//the Rectangle method works
}