/*
CH-230-A
a11p1.cpp
Lars Schuster
lschuster@jacobs-university.de
*/

#include "Box.h"
#include <iostream>

//empty constructor
Box::Box()
{
    height = width = depth = 0;
}

//stdandard constructor
Box::Box(double h, double w, double d)
{
    height = h;
    width = w;
    depth = d;
}

//copy constructor
Box::Box(Box &box)
{
    height = box.height;
    width = box.width;
    depth = box.depth;
}

//empty destructor
Box::~Box()
{
}

//setters
void Box::setheight(double h)
{
    height = h;
}
void Box::setwidth(double w)
{
    width = w;
}
void Box::setdepth(double d)
{
    depth = d;
}

//getters
double Box::getheight()
{
    return height;
}
double Box::getwidth()
{
    return width;
}
double Box::getdepth()
{
    return depth;
}

//method returns volume of box
double Box::volume()
{
    return (height*width*depth);
}