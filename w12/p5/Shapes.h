/*
CH-230-A
a11p5.cpp
Lars Schuster
lschuster@jacobs-university.de
*/

/* 
	Classic shape examples: an inheritance tree in a geometric context
*/
#ifndef __SHAPES_H
#define __SHAPES_H
#include <string>

class Shape 
{			// base class
	private:   				// private access modifier: could also be protected
		std::string name;   // every shape will have a name
	public:
		Shape(const std::string&);  // builds a shape with a name
		Shape();					// empty shape
		Shape(const Shape&);		// copy constructor
		void printName() const ;  	// prints the name  

		void setname(std::string newname);//setter
		std::string getname();//getter
};

class CenteredShape : public Shape 
{  // inherits from Shape
	private: 
		double x,y;  // the center of the shape
	public:
		CenteredShape(const std::string&, double, double);  
		// usual three constructors
		CenteredShape();
		CenteredShape(const CenteredShape&);
		void move(double, double);// moves the shape, i.e. it modifies it center

		void setcenter(double newx, double newy);//setter
		double getx();//getter
		double gety();//getter
};

class RegularPolygon : public CenteredShape 
{ /*a regular polygon is a 
centered_shape with a number of edges*/
	private: 
		int EdgesNumber;
	public:
		RegularPolygon(const std::string&, double, double, int);
		RegularPolygon();
		RegularPolygon(const RegularPolygon&);

		void setedgenum(int newedges);//setter
		int getedgenum();//getter
};

class Circle : public CenteredShape 
{  // a Circle is a shape with a center and a radius
	private:
		double Radius;
	public:
		Circle(const std::string&, double, double, double);
		Circle();
		Circle(const Circle&);

		void setradius(double newrad);//setter
		double getradius();//getter

		double perimeter();
		double area();//service functions
};

class Rectangle : public RegularPolygon
{
	private:
		double height;
		double width;
	public:
		Rectangle(const std::string& n, double nx, double ny, double nwidth,
			 double nheight);
		Rectangle();
		Rectangle(const Rectangle&);

		void setheight(double newheight);
		void setwidth(double newwidth);//setter
		double getheigth();
		double getwidth();//getter

		double perimeter();
		double area();//service functions
};

class Square : public Rectangle
{
	private:
		double side;
	public:
		Square(const std::string& n, double nx, double ny, double nside);
		Square();
		Square(const Square&);

		void setside(double newside);//setter
		double getside();//getter
};
#endif
