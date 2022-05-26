/*
CH-230-A
a12p3.cpp
Lars Schuster
lschuster@jacobs-university.de
*/

#include "TournamentMember.h"
#include <iostream>

//standard Constructor
Player::Player(const char* firstname,const char*lastname,
     const char* dob,int age, bool first, int number,const char *position,
     int goals, bool rightf):TournamentMember(firstname,lastname,dob,age,first)
{
    std::cout << "Player: Standard Constructor is executed" << std::endl;
    this->number = number;
    setpos(position);
    this->goals = goals;
    this->rightf = rightf;   
}

//copy Constructor
Player::Player(const Player& tocopy):TournamentMember(tocopy)
{
    std::cout << "Player: Copy Constructor is executed" << std::endl;
    number = tocopy.number;
    setpos(tocopy.position);//less code to use setter
    goals = tocopy.goals;
    rightf = tocopy.rightf;
}

Player::~Player()
{
    std::cout << "Player: Destructor is executed" << std::endl;
}

//print method
void Player::printplay()
{
    print();
    std::cout << "Number: " << number << std::endl;
    std::cout << "Position: " << position << std::endl;
    std::cout << "Goals: " << goals << std::endl;
    if (rightf)//if rightfoot is true
        std::cout << "Right-Foot\n" << std::endl;
    else
        std::cout << "Left-Foot\n" << std::endl;
}

//increase goals method
void Player::incgol()
{
    goals++;
}

char TournamentMember::loc[40] = "Mordor";

//parametric constructor
TournamentMember::TournamentMember(const char* firstname,const char*lastname,
    const char* dob,int age, bool first)
{
    std::cout << "Parametric constructor is executed" << std::endl;
    for (int i = 0; i < 36; i++)
    {
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
    std::cout << "Member: Empty constructor is executed" << std::endl;
}

//copy constructor
TournamentMember::TournamentMember(const TournamentMember &tocopy)
{
    std::cout << "Copy constructor is executed" << std::endl;
    setfirstname(tocopy.firstname);
    setlastname(tocopy.lastname);
    setdob(tocopy.dob);
    age = tocopy.age;
    first = tocopy.first;
}

//Destructor
TournamentMember::~TournamentMember()
{
    std::cout << "Member: Destructor is executed" << std::endl;
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
    std::cout << "Location: " <<  loc <<std::endl;
}

//change location for all players
void TournamentMember::changeloc(const char* newlocation)
{
    for (int i = 0; i < 40; i++)
    {
        loc[i]= newlocation[i];
    }
}