/*
CH-230-A
a10p6.cpp
Lars Schuster
lschuster@jacobs-university.de
*/

#include <string> // defines standard C++ string class

/* First C++ class */
class Critter
{
private:  // data members are private
	std::string name;
	double hunger;
	int boredom;
	double height;
	double thirst;
	
	double dticonvert(int hung);
	int itdconvert(double hung);

public: // business logic methods are public
	// setter methods
	void setName(std::string& newname);
	void setHunger(int newhunger);
	void setBoredom(int newboredom);
	// getter method
	int getHunger();
	// service method	
	void print();
	//constructors
	Critter();
	Critter(std::string newname);
	Critter(std::string newname,int newhunger, int newboredom,
	double newheight = 10.0);
	Critter(std::string newname,int newhunger, int newboredom,
	double newheight, double newthirst);
};