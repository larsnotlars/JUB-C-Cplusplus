/*
CH-230-A
a12p2.cpp
Lars Schuster
lschuster@jacobs-university.de
*/
#include "TournamentMember.h"
#include <iostream>

int main()
{
    //create and print 3 Members
    TournamentMember a;
    a.print();
    TournamentMember b("Max","Mustermann", "24-11-2000", 21 ,true);
    b.print();
    TournamentMember c(b);
    c.print();

    //Change location
    std::cout << "Changing Location London" << std::endl;
    TournamentMember::changeloc("London");
    std::cout << "print all members again:\n" << std::endl;

    //print the members again
    a.print();
    b.print();
    c.print();

    return 0;
}