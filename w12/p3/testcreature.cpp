/*
CH-230-A
a11p3.cpp
Lars Schuster
lschuster@jacobs-university.de
*/
#include "Creature.h"
#include <iostream>

int main()
{
    Creature c;
    c.run();

    Wizard w;
    w.run();
    w.hover();//call transport method

    Dragon d;
    d.run();
    d.firespitting();//call attack method

    Ent e;
    e.run();
    e.rockthrowing();//call attack method
    
    return 0;
} 