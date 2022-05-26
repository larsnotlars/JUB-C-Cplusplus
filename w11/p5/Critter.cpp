/*
CH-230-A
a10p5.cpp
Lars Schuster
lschuster@jacobs-university.de
*/

#include <iostream>
#include "Critter.h"

using namespace std;

//setters
void Critter::setName(std::string& newname) 
{
	name = newname;
}
void Critter::setHunger(int newhunger) 
{
	hunger = dconvert(newhunger);
}

//service function to print
void Critter::print() 
{
	std::cout << "I am " << name << 
	".\nMy hunger level is " << iconvert(hunger)
	<<	".\nMy boredom is at a solid " << boredom << 
	".\nMy height is " << height	<< ".\n" << std::endl;
	//include new values in print method
}

//getter 
int Critter::getHunger() 
{
	return hunger;
}

//empty constructor
Critter::Critter()
{
	name = "default_critter";
	hunger = 0;
	boredom = 0;
	height = 5.0;
}

//only name constructor
Critter::Critter(std::string newname)
{
	name = newname;
	hunger = 0;
	boredom = 0;
	height = 5.0;
}

//full constructor
Critter::Critter(std::string newname, int newhunger, 
int newboredom, double newheight)
{
	name = newname;
	hunger = dconvert(newhunger);
	boredom = newboredom;
	height = newheight;
}

//convert hunger to double for internal storage
double Critter::dconvert(int hung)
{
	return (hung/10.0);
}

//convert internal hunger to int to return it
int Critter::iconvert(double hung)
{
	return (int)(hung*10);
}