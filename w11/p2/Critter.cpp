#include <iostream>
#include "Critter.h"

using namespace std;

void Critter::setName(std::string& newname) 
{
	name = newname;
}

void Critter::setHunger(int newhunger) 
{
	hunger = newhunger;
}

 //setter of weight
void Critter::setWeight(double newweight)
{
	weight = newweight;
}

 //setter of stamina
void Critter::setStamina(int newstamina)
{
	stamina = newstamina;
}

void Critter::print() 
{
	std::cout << "I am " << name << ". My hunger level is " << hunger << ".\n"
	<< "I weigh " << weight << " grams. My stamina level is at " << stamina
	<< "." <<std::endl;//include new values in print method
}


int Critter::getHunger() 
{
	return hunger;
}
//getter of Weight
double Critter::getWeight() 
{
	return weight;
}
//getter of Stamina
int Critter::getStamina() 
{
	return stamina;
}


