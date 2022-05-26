#include <iostream>
#include <cstdlib>
#include "Critter.h"

using namespace std;

int main(int argc, char** argv)
{
	Critter c;

	std::string name;
	int hunger, stamina;
	double weight;
 
	std::cout << std::endl << "Please enter data: " << std::endl;
	std::cout << "Name: ";
	// cin >> name; will not work if name contains
	// spaces
	getline(std::cin, name);
	c.setName(name);
	std::cout << "Hunger: ";
	std::cin >> hunger;
	c.setHunger(hunger);

	std::cout << "Weight: ";//get weight from keyboard and set it
	std::cin >> weight;
	c.setWeight(weight);

	std::cout << "Stamina: ";//get Stamina from Keyboard and set it
	std::cin >> stamina;
	c.setStamina(stamina);

	std::cout << "You have created:" << std::endl;
	c.print();
    return 0;
}
