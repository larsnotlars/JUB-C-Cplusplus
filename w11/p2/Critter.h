#include <string> // defines standard C++ string class

/* First C++ class */
class Critter
{
private:  // data members are private
	std::string name;
	int hunger;
	int boredom;
	double height;
	double weight;
	int stamina;

public: // business logic methods are public
	// setter methods
	void setName(std::string& newname);
	void setHunger(int newhunger);
	void setBoredom(int newboredom);
	void setWeight(double newweight);
	void setStamina(int newstamina);
	// getter method
	int getHunger();
	double getWeight();
	int getStamina();
	// service method	
	void print();
};
