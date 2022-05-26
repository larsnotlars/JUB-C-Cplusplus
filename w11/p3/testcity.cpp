/*
CH-230-A
a10p3.cpp
Lars Schuster
l.schuster@jacobs-university.de
*/
#include "City.h"
#include <iostream>

int main()
{
    City Bremen, Paris, London;

    Bremen.setname("Bremen");
    Bremen.setinhab(569352);
    Bremen.setmayor("Andreas Bovenschulte");
    Bremen.setarea(318.21);//set all values according to wikipedia
    std::cout << Bremen.getname() << std::endl;
    std::cout << Bremen.getinhab() << "inhabitants" << std::endl;
    std::cout << Bremen.getmayor() << std::endl;
    std::cout << Bremen.getarea() << "km²" << std::endl;
    std::cout << std::endl;//print all values

    Paris.setname("Paris");
    Paris.setinhab(2175601);
    Paris.setmayor("Anne Hidalgo");
    Paris.setarea(105.34);//set all values according to wikipedia
    std::cout << Paris.getname() << std::endl;
    std::cout << Paris.getinhab() << "inhabitants" << std::endl;
    std::cout << Paris.getmayor() << std::endl;
    std::cout << Paris.getarea() << "km²" << std::endl;
    std::cout << std::endl;//print all values

    London.setname("London");
    London.setinhab(8961989);
    London.setmayor("Sadiq Khan");
    London.setarea(1572);//set all values according to wikipedia
    std::cout <<London.getname() << std::endl;
    std::cout <<London.getinhab() << "inhabitants" << std::endl;
    std::cout <<London.getmayor() << std::endl;
    std::cout <<London.getarea() << "km²" << std::endl;
    std::cout << std::endl;//print all values

    return 0;
}
