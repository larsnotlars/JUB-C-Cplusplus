/*
CH-230-A
a10p4.cpp
Lars Schuster
lschuster@jacobs-university.de
*/

#include <iostream>
#include "Critter.h"

using namespace std;
//setter
void Critter::setName(std::string& newname) 
{
	name = newname;
}
void Critter::setHunger(int newhunger) 
{
	hunger = newhunger;
}

//service function to print
void Critter::print() 
{
	std::cout << "I am " << name << ". My hunger level is " << hunger << ".\n"
	"My boredom is at a solid "<< boredom << ". My height is " << height 
	<< std::endl;
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
	hunger = newhunger;
	boredom = newboredom;
	height = newheight;
	}

