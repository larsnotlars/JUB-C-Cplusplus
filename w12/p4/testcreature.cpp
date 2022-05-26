/*
CH-230-A
a11p4.cpp
Lars Schuster
lschuster@jacobs-university.de
*/
#include "Creature.h"
#include <iostream>

int main()
{
    Wizard *wd;
    Dragon *dn;
    Ent *et;//pointers to temporary Creatures
    std::string input;

    while (1)
    {
        //read input name
        getline(std::cin,input);
        
        //create corresponding Creature and call method
        if (input == "wizard")
        {//if wiz is called 
            wd = new Wizard;//create standard wiz
            wd->hover();//call method
            delete wd;//delete wiz
        }
        else if (input == "object1")
        {//same as wiz
            dn = new Dragon;
            dn->firespitting();
            delete dn;
        }
        else if (input == "object2")
        {//same as wiz
            et = new Ent;
            et->rockthrowing();
            delete et;
        }
        //if quit is input stop the programm
        else if (input == "quit")
        {
            exit(0);
        }
    }
} 