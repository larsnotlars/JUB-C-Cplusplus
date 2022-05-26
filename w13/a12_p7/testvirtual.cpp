/*
CH-230-A
a12p7.cpp
Lars Schuster
lschuster@jacobs-university.de
*/
#include <iostream>
using namespace std;
#include "Area.h"
#include "Circle.h"
#include "Ring.h"
#include "Rectangle.h"
#include "Square.h"
 
int main() {
	srand(time(NULL));//set random number seed to time
	char colors[4][10]={"RED","BLACK","VIOLET","BLUE"};//array with colors
	Area *ptr;//pointer for dyn allocation of objects
	int num, color, sizea, sizeb, inner;
	for (int i = 0; i < 25; i++)
	{
		num= rand() % 4;//create random variables for every iteration
		color= rand() % 4;
		sizea= ((rand()% 95) + 5);
		sizeb= ((rand()% 95) + 5);
		inner = ((rand()% (sizea-1)) + 5);
		//the inner radius must be smaller for ring
		switch (num)
		{
		case 0://circle
			ptr = new Circle(colors[color],sizea);/*creates object with random
			properties*/
			ptr->getColor();
			cout << "\nArea: " << ptr->calcArea() << endl;//computes area
			cout << "\nPerimeter" << ptr->calcPeri() <<endl; //perimeter
			delete ptr;//object is deleted
			break;
		case 1://ring (same as Circle)
			ptr = new Ring(colors[color],sizea,inner);
			ptr->getColor();
			cout << "\nArea: " << ptr->calcArea() << endl;
			delete ptr;
			break;
		case 2://rectangle (same as Circle)
			ptr = new Rectangle(colors[color],sizea,sizeb);
			ptr->getColor();
			cout << "\nArea: " << ptr->calcArea() << endl;
			delete ptr;
			break;
		case 3://square (same as Circle)
			ptr = new Square(colors[color],sizea);
			ptr->getColor();
			cout << "\nArea: " << ptr->calcArea() << endl;
			delete ptr;
			break;
		default:
			break;
		}
	}
	
	return 0;
}

