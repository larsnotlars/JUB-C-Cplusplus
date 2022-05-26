/*
CH-230-A
a11p4.cpp
Lars Schuster
lschuster@jacobs-university.de
*/

class Creature {
	public:
		Creature();  
        ~Creature();
		void run() const;

	protected:
		int distance;
};


class Wizard : public Creature 
{
	public:
		Wizard();
        ~Wizard();
		void hover() const;

	private:
		int distFactor;
};

class Dragon : public Creature
{
private:
    int damage;//property
public:
//ability
    void firespitting() const;
//constructor
    Dragon(int a = 42);
//destructor
    ~Dragon();
};

class Ent : public Creature
{
private:
    int range;//property
public:
//ability
    void rockthrowing() const;
//cohstructor
    Ent(int a = 3);
//destructor
    ~Ent();
};