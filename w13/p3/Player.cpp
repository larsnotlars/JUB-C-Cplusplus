/*
CH-230-A
a12p3.cpp
Lars Schuster
lschuster@jacobs-university.de
*/

#include <iostream>
#include "TournamentMember.h"

int main()
{
    Player a("Max","Mustermann", "24-11-2000", 21 , true , 13 , "Gooalkeeper" ,
    0 , false);
    a.printplay();
    Player b("General","Kenobi", "04-05-1995",26 , true , 0 , "Striker" ,
    11 , false);
    b.printplay();
    Player c("Smeagol","Gollum", "11-11-2011",10 , false , 16 , "Midfield" ,
    11 , true);
    c.printplay();//create three players and print them

    std::cout << "Changing Location Hamburg" << std::endl;
    TournamentMember::changeloc("Hamburg");

    std::cout << "print all members again:\n" << std::endl;
    a.printplay();
    b.printplay();
    c.printplay();// change Location

    return 0;
}
