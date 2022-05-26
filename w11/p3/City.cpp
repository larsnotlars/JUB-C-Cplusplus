/*
CH-230-A
a10p3.cpp
Lars Schuster
l.schuster@jacobs-university.de
*/

#include <iostream>
#include "City.h"
//setter methods take corresponding value return nothing
void City::setname(std::string newname)
{
    name = newname;
}
void City::setinhab(int newinhab)
{
    inhabitants= newinhab;
}
void City::setmayor(std::string newmayor)
{
    mayor = newmayor;
}
void City::setarea(double newarea)
{
    area = newarea;
}

//gettermethods take nothing return the corresponding values
std::string City::getname()
{
    return name;
}
int City::getinhab()
{
    return inhabitants;
}
std::string City::getmayor()
{
    return mayor;
}
double City::getarea()
{
    return area;
}