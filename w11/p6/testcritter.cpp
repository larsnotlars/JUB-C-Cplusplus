/*
CH-230-A
a10p6.cpp
Lars Schuster
lschuster@jacobs-university.de
*/

#include <iostream>
#include <cstdlib>
#include "Critter.h"

using namespace std;

int main()
{
	Critter a;
	a.setHunger(2);
	Critter b("Abel");
	b.setHunger(2);
	Critter c("Julian", 2, 3 ,10.5);
	Critter d("Raz", 2, 3);//call all the constructors
	a.print();
	b.print();
	c.print();
	d.print();//print them all

	Critter e("Sebastian",2,6,4.5,.2);//new line to test new Constructor
}
