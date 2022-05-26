/*
CH-230-A
a10p6.cpp
Lars Schuster
lschuster@jacobs-university.de
*/

#include <iostream>
#include "Critter.h"

using namespace std;

//setter Name
void Critter::setName(std::string& newname) 
{
	name = newname;
}

//setter Hunger
void Critter::setHunger(int newhunger) 
{
	hunger = dticonvert(newhunger);
}

//print the properties
void Critter::print() 
{
	std::cout << "I am " << name << 
	".\nMy hunger level is " << itdconvert(hunger)
	<<	".\nMy boredom is at a solid " << boredom << 
	".\nMy height is " << height	
	<< ".\nMy thirst is roughly " << thirst << ".\n" << std::endl;
	//include new values in print method
}

//getter Hunger
int Critter::getHunger() 
{
	return hunger;
}

//empty constructor
Critter::Critter()
{
	name = "default_critter";
	hunger = thirst = 0;
	boredom = 0;
	height = 5.0;
}

//only name constructor
Critter::Critter(std::string newname)
{
	name = newname;
	hunger = thirst = 0;
	boredom = 0;
	height = 5.0;
}

//name hunger boredom height Constructor
Critter::Critter(std::string newname, int newhunger, 
int newboredom, double newheight)
{
	name = newname;
	hunger = thirst = dticonvert(newhunger);
	boredom = newboredom;
	height = newheight;
}

//full Constructor
Critter::Critter(std::string newname,int newhunger, int newboredom,
	double newheight, double newthirst)
{
	name = newname;
	hunger = dticonvert(newhunger);
	boredom = newboredom;
	height = newheight;
	thirst = newthirst;
}
//internal function to save values as doubles
double Critter::dticonvert(int hung)
{
	return (hung/10.0);
}

//external function to express hunger for user
int Critter::itdconvert(double hung)
{
	return (int)(hung*10);
}