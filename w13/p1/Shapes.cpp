/*
CH-230-A
a12p1.cpp
Lars Schuster
lschuster@jacobs-university.de
*/

// please refer to shapes.h for methods documentation

#include <iostream>
#include <math.h> //for sqrt function
#include "Shapes.h"

using namespace std; 

Shape::Shape(const string& n) : name(n) {
}

Shape::Shape(const Shape &sha)
{
    name = sha.name;
}

void Shape::printName() const {
	cout << name << endl;
}

CenteredShape::CenteredShape(const string& n, double nx, double ny): Shape(n) {
	x = nx;
	y = ny;
}

//Copy Constructor
CenteredShape::CenteredShape(const CenteredShape &Cen):Shape(Cen)
{
    y = Cen.y;
    x = Cen.x;
}

RegularPolygon::RegularPolygon(const string& n, double nx, double ny, int nl) :
	CenteredShape(n,nx,ny) 
{
	EdgesNumber = nl;
}

//Copy Constructor
RegularPolygon::RegularPolygon(const RegularPolygon &Reg):CenteredShape(Reg)
{
    EdgesNumber = Reg.EdgesNumber;
}

Circle::Circle(const string& n, double nx, double ny, double r) : 
  CenteredShape(n,nx,ny) 
{
	Radius = r;
}


//setters
void Hexagon::setside(const double newside)
{
    side = newside;
}
void Hexagon::setcolor(const string &newcolor)
{
    color = newcolor;
}

//getters
double Hexagon::getside()
{
    return side;
}
std::string Hexagon::getcolor()
{
    return color;
}

//constructors
Hexagon::Hexagon(const std::string& newname, double nx,
	double ny,	double newside, const std::string& newcolor)
    :RegularPolygon(newname,nx,ny,6)
{
    side = newside;
    color = newcolor;
}

//copy constructors
Hexagon::Hexagon(const Hexagon &hex): RegularPolygon(hex)
{
    side = hex.side;
    color = hex.color;
}

//destructor
Hexagon::~Hexagon()
{}
//service methods
double Hexagon::perimeter()
{
    return (side*6);//return perimeter
}

double Hexagon::area()
{
    return 1.5*sqrt(3)*side*side;//return area
}