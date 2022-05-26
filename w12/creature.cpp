/*
CH-230-A
a11p2.cpp
Lars Schuster
lschuster@jacobs-university.de
*/

#include <iostream>

using namespace std;

class Creature {
	public:
		Creature();  
        ~Creature();
		void run() const;

	protected:
		int distance;
};

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

class Wizard : public Creature 
{
	public:
		Wizard();
        ~Wizard();
		void hover() const;

	private:
		int distFactor;
};

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



class Dragon : public Creature
{
private:
    int damage;//property
public:
//ability
    void firespitting() const;//attack method
//constructor
    Dragon(int a = 42);
//destructor
    ~Dragon();
};

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

//attack method
void Dragon::firespitting() const
{
    cout << "Burning everthing and dealing " << (damage) 
    << " Damage!\n";
}

class Ent : public Creature
{
private:
    int range;//property
public:
    void rockthrowing() const;//method
    Ent(int a = 3);
    ~Ent();
};

//constructor
Ent::Ent(int a)
{
    std::cout << "Counstructing a powerful ENT" << std::endl;
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

int main()
{
    Creature c;
    c.run();//call transport method

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
