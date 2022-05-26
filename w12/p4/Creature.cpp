/*
CH-230-A
a11p4.cpp
Lars Schuster
lschuster@jacobs-university.de
*/

#include <iostream>
#include "Creature.h"

using namespace std;

Creature::Creature(): distance(10)
{
    cout << "\nConstructing some type of creature" << endl;
}    

Creature::~Creature()
{
    cout << "Destructing this poor creature" << endl;
}

void Creature::run() const
{ 
    cout << "running " << distance << " meters!\n";
}  



//constructor
Wizard::Wizard() : distFactor(3)
{
    cout << "Constructing a misterious Wizard" << endl;
}  

//destructor
Wizard::~Wizard()
{
    cout << "Destructing this Wizard" << endl;
}

//ability
void Wizard::hover() const
{
    cout << "hovering " << (distFactor * distance) << " meters!\n";
}

//constructor
Dragon::Dragon(int a)
{
    cout << "Constructing a firey Dragon" << endl;
    damage = a;
}

//Destructor
Dragon::~Dragon()
{
    cout << "Destructing this Dragon" << endl;
}

void Dragon::firespitting() const
{
    cout << "Burning everthing and dealing " << (damage) 
    << " Damage!\n";
}



//constructor
Ent::Ent(int a)
{
    std::cout << "Constructing a powerful ENT" << std::endl;
    range = a;
}

//destructor
Ent::~Ent()
{
    cout << "Destructing this Ent" << endl;
}

//method (attack)
void Ent::rockthrowing() const
{
    cout << "Throwing Rock " << (range * distance) 
    << " meters!\n";
}


