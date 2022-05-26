/*
CH-230-A
a12p2.cpp
Lars Schuster
lschuster@jacobs-university.de
*/

#include "TournamentMember.h"
#include <iostream>

char TournamentMember::loc[40] = "Hamburg";

//parametric constructor
TournamentMember::TournamentMember(const char* firstname,const char*lastname,
     const char* dob,int age, bool first)
{
    std::cout << "Parametric constructor is executed" << std::endl;
    for (int i = 0; i < 36; i++)
    {//input first and last name at the same time
        this->firstname[i] = firstname[i];
        this->lastname[i] = lastname[i];
    }
    for (int i = 0; i < 11; i++)
        this->dob[i] = dob[i];
    this->age = age;
    this->first = first;
}

//empty constructor
TournamentMember::TournamentMember()
{
    std::cout << "Empty constructor is executed" << std::endl;
}

//copy constructor
TournamentMember::TournamentMember(const TournamentMember &tocopy)
{
    std::cout << "Copy constructor is executed" << std::endl;
    setfirstname(tocopy.firstname);//faster to use setters
    setlastname(tocopy.lastname);
    setdob(tocopy.dob);
    age = tocopy.age;
    first = tocopy.first;
}

//Destructor
TournamentMember::~TournamentMember()
{
    std::cout << "Destructor is executed" << std::endl;
}

//print method
void TournamentMember::print()
{
    std::cout << "First name: " << firstname << std::endl;
    std::cout << "Last name: " << lastname << std::endl;
    std::cout << "Date of birth: " << dob << std::endl;
    std::cout << "Age: " << age << std::endl;
    if (first)//print different statements depending of stored value
        std::cout << "This is the first tournament of the Member" <<std::endl;
    else
        std::cout << "The member has participated before" << std::endl;
    std::cout << "Location: " <<  loc << "\n" <<std::endl;
}

//method to change the location of all members
void TournamentMember::changeloc(const char* newlocation)
{
    for (int i = 0; i < 40; i++)
        loc[i] = newlocation[i];
}

