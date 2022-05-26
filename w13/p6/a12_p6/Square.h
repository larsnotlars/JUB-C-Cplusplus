/*
CH-230-A
a12p6.cpp
Lars Schuster
lschuster@jacobs-university.de
*/
#ifndef _SQUARE_H
#define _SQUARE_H
#include "Rectangle.h"
//a square is a rectangle with two equal sidelengths so no new vars needed
class Square : public Rectangle
{
public:
    Square(const char *n, double a);
    ~Square();
    double calcArea() const;
	double calcPeri() const;
};
#endif