/*
CH-230-A
a12p4.cpp
Lars Schuster
lschuster@jacobs-university.de
*/

#include <iostream>
#include "fraction.h"

Fraction::Fraction()
{
	num = 1;
	den = 1;
}

Fraction::Fraction(int n, int d)
{
	int tmp_gcd = gcd(n, d);

	num = n / tmp_gcd;
	den = d / tmp_gcd;
}

int Fraction::gcd(int a, int b)
{
	int tmp_gcd = 1;

	// Implement GCD of two numbers;

	return tmp_gcd;
}

int Fraction::lcm(int a, int b)
{
	return a * b / gcd(a, b);

}

void Fraction::print()
{
	std::cout << num << "/" << den << std::endl;
}

//override output operator
std::ostream& operator<< (std::ostream& out, const Fraction& frac)
{
	out << frac.num;
	out << "/";
	out << frac.den;
	out << std::endl;
	return out;//so multiple outputs can be  in a row
}

//override input operator if wrong input the fraction stays unchanged
std::istream& operator>> (std::istream& in, Fraction& frac)
{
	float temp1,temp2;
	std::cout << "Enter Numerator" << std::endl;
	in >> temp1;
	if (temp1-(int)temp1 != 0)//check if integer was entered
	{
		std::cout<< "Wrong input" << std::endl;
		return in;
	}
	frac.num = (int)temp1;
	std::cout << "Enter Denominator" << std::endl;
	in >> temp2;
	if (temp2-(int)temp2 != 0 || temp2 == 0)//check if non-zero int was entered
	{
		frac.num = temp1;
		std::cout<< "Wrong input" << std::endl;
		return in;
	}
	frac.den = (int)temp2;
	return in;//return input stream
}


//override multiplication operator
Fraction Fraction::operator* (const Fraction& frac)
{
	Fraction prod((this->num * frac.num),(this->den * frac.den));//temp product
	return prod;
}

Fraction Fraction::operator/ (const Fraction& frac)
{
	Fraction quot((this->num * frac.den),(this->den * frac.num));//temp quotient
	return quot;
}
