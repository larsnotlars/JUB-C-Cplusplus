/*
CH-230-A
a12p4.cpp
Lars Schuster
lschuster@jacobs-university.de
*/

// simple class for fractions

#ifndef FRACTION_H_
#define FRACTION_H_
#include <iostream>
using namespace std;

class Fraction {

private:						// internal implementation is hidden
	int num;					// numerator
	int den;					// denominator

	int gcd(int a, int b);		// calculates the gcd of a and b
	int lcm(int a, int b);

public:
	Fraction();					// empty constructor
	Fraction(int, int = 1); 	// constructor taking values for fractions and
								// integers. Denominator by default is 1
	void print();				// prints it to the screen

	//are friend functions because streams are manipulated
    friend std::ostream& operator<< (std::ostream& out, const Fraction& frac);
	//overloads output operator
	friend std::istream& operator>> (std::istream& in, Fraction& frac);
	//overloads input operator
	
	//are members because return type is member
	Fraction operator* (const Fraction& frac);
	Fraction operator/ (const Fraction& frac);//overloads * and / operators

	
	
};


#endif /* FRACTION_H_ */
