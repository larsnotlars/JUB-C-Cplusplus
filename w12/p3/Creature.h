/*
CH-230-A
a11p3.cpp
Lars Schuster
lschuster@jacobs-university.de
*/
//declaration Creature
class Creature {
	public:
		Creature();  
        ~Creature();
		void run() const;

	protected:
		int distance;
};

//declaration wizard
class Wizard : public Creature 
{
	public:
		Wizard();
        ~Wizard();
		void hover() const;

	private:
		int distFactor;
};

//declaration of Dragon
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

//Declaration of Creature
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