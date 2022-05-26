/*
CH-230-A
a11p5.cpp
Lars Schuster
lschuster@jacobs-university.de
*/

// please refer to shapes.h for methods documentation

#include <iostream>
#include <math.h>
#include "Shapes.h"

using namespace std; 

Shape::Shape(const string& n) : name(n) 
{}

Shape::Shape()
{
	name = "default shape";
}

Shape::Shape(const Shape &og)//copy constructor
{
	name = og.name;
}

void Shape::setname(std::string newname)//setter
{
	name = newname;
}

std::string Shape::getname()//getter
{
	return name;
}

void Shape::printName() const //print method
{
	cout << name << endl;
}

//normal constructor
CenteredShape::CenteredShape(const string& n, double nx, double ny): Shape(n) 
{
	x = nx;
	y = ny;
}

//default constructor
CenteredShape::CenteredShape(): Shape() 
{
	x = 0;
	y = 0;
}

//Copy Construct
CenteredShape::CenteredShape(const CenteredShape &og): Shape(og)
{
	y = og.y;
	x = og.x;
}

void CenteredShape::setcenter(double newx, double newy)//setter
{
	x = newx;
	y = newy;
}

double CenteredShape::getx()//getter
{
	return x;
}

double CenteredShape::gety()//getter
{
	return y;
}

//normal constructor
RegularPolygon::RegularPolygon(const string& n, double nx, double ny, int nl) :
	CenteredShape(n,nx,ny) 
{
	EdgesNumber = nl;
}

//default constructor
RegularPolygon::RegularPolygon() :
	CenteredShape() 
{
	EdgesNumber = 3;
}

//copy constructor
RegularPolygon::RegularPolygon(const RegularPolygon &og):CenteredShape(og)
{
	EdgesNumber = og.EdgesNumber;
}

void RegularPolygon::setedgenum(int newedges)//setter
{
	EdgesNumber = newedges;
}

int RegularPolygon::getedgenum()//getter
{
	return EdgesNumber;
}

//standard constructor
Circle::Circle(const string& n, double nx, double ny, double r) : 
  CenteredShape(n,nx,ny) 
{
	Radius = r;
}

//default constructor
Circle::Circle() : 
  CenteredShape() 
{
	Radius = 1;
}

//copy constructor
Circle::Circle(const Circle &og) : CenteredShape(og)
{
	Radius = og.Radius;
}

void Circle::setradius(double newrad)//setter
{
	Radius = newrad;
}

double Circle::getradius()//getter
{
	return Radius;
}

double Circle::perimeter()//perimeter method
{
	return Radius*2*M_PI;
}
double Circle::area()//area method
{
	return Radius*Radius*M_PI;
}

//normal constructor
Rectangle:: Rectangle(const std::string& n, double nx, double ny, double nwidth,
			 double nheight) : RegularPolygon(n,nx,ny,4)
{
	width = nwidth;
	height = nheight;
}

//default consructor
Rectangle:: Rectangle() : RegularPolygon("default_rectangular",0,0,4)
{
	width = 1;
	height = 1;
}

Rectangle:: Rectangle(const Rectangle &og) : RegularPolygon(og)
{
	width = og.width;
	height = og.height;
}

void Rectangle::setheight(double newheight)//setter
{
	height = newheight;
}

void Rectangle::setwidth(double newwidth)//setter
{
	width = newwidth;
}

double Rectangle::getheigth()//getter
{
	return height;
}

double Rectangle::getwidth()//getter
{
	return width;
}

double Rectangle::perimeter()//perimeter method
{
	return (height+width)*2;
}

double Rectangle::area()//area method
{
	return height*width;
}

//normal constructor
Square::Square(const std::string& n, double nx, double ny, double nside)
	:Rectangle(n,nx,ny,nside,nside)
{}

//default constructor
Square::Square()
	:Rectangle("defaultsquare",0,0,1,1)
{}

//copy constructor
Square::Square(const Square &og):Rectangle(og)
{}

void Square::setside(double newside)//setter
{
	side = newside;
}

double Square::getside()//getter
{
	return side;
}