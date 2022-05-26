/*
CH-230-A
a12p6.cpp
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
 
const int num_obj = 7;//changed so there is space for square
int main() {
	Area *list[num_obj];						// (1)
	int index = 0;								// (2)
	double sum_area = 0.0;						// (3)
	double sum_perimeter = 0.0;
	cout << "Creating Ring: ";
	Ring blue_ring("BLUE", 5, 2);				// (4)
	cout << "Creating Circle: ";
	Circle yellow_circle("YELLOW", 7);
	cout << "Creating Rectangle: ";
	Rectangle green_rectangle("GREEN",5,6);
	cout << "Creating Circle: ";
	Circle red_circle("RED", 8);
	cout << "Creating Rectangle: ";
	Rectangle black_rectangle("BLACK", 10, 20);
	cout << "Creating Ring: ";
	Ring violet_ring("VIOLET", 100, 5);

	cout << "Creating Square: ";
	Square orange_square("ORANGE",4);

	list[0] = &blue_ring;						// (5)
	list[1] = &yellow_circle;
	list[2] = &green_rectangle;
	list[3] = &red_circle;
	list[4] = &black_rectangle;
	list[5] = &violet_ring;

	list[6] = &orange_square;

	while (index < num_obj) {					// (6)
		(list[index])->getColor();				
		double area = list[index]->calcArea();// (7)
		double peri = list[index]->calcPeri();
		index++;
		sum_area += area;
		sum_perimeter += peri;
	}
	cout << "\nThe total area is "
			<< sum_area << " units " << endl;	// (8)

	cout << "\nThe total perimeter is "
			<< sum_perimeter << " units " << endl;
	return 0;
}

/*Relation of the classes 
Arrows point from parent to child

	  |-->Circle --> Ring
Area -|
	  |-->Rectangle(--> Square)

Comments for the numbered points in the program:

1) initializig an array of pointers to Elements of the class Area.
The size of the array is specified by the num_obj variable.

2)initializing the variable to loop through the array later to add all the areas

3) initializing the variable to store the sum of all areas 

4)Creating 6 objects of different classes that are all derived of the 
Area-class. The elements are created using a the standard constructor.

5)Assigining the pointers to the objects created in 4) to the elements of the 
array created in 1). This is called upcasting since the array holds pointers of 
the paretn class.

6)Now the programm loops through every element of the array.

7)The area method of every object is called and the returnvalue is stored in
a temporary variable and then added to the  total sum of areas. Here
polymorphism is used because the method is different for each derived class
but can be called while they are stored as through pointers from the parent 
class

8)The total sum is printed to the Screen.


Alternatively:
			   Area
				|
			is parent of
			|			|
		Circle		Rectangle 
			|
		is parent of
			| 
		   Ring

*/
