/*
CH-230-A
a12p5.cpp
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

//recursive function for finding the gcd(tail recursion for efficiency)
int Fraction::gcd(int a, int b)
{
    if((a >= b) && (( a % b ) == 0))//if smaller num divides bigger num
        {return(b);}//return bigger num
    else//else pass smaller num and remainder of division
        {return gcd(b, (a % b)); }
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

//override division operator
Fraction Fraction::operator/ (const Fraction& frac)
{
	Fraction quot((this->num * frac.den),(this->den * frac.num));//temp quotient
	return quot;
}

//overloading +operator
Fraction Fraction::operator+ (const Fraction& frac)
{
	int a = num,b = den, c = frac.num ,d = frac.den;//temp-variables to simplify
	Fraction sum((a *lcm(b,d))/b + (c*lcm(b,d)) / d ,lcm(b,d));
	return sum;
}

//overloading -operator
Fraction Fraction::operator- (const Fraction& frac)
{
	int a = num,b = den, c = frac.num ,d = frac.den;
	Fraction dif((a *lcm(b,d))/b - (c*lcm(b,d)) / d ,lcm(b,d));
	return dif;
}

//overloading = operator 
Fraction Fraction::operator= (const Fraction& frac)
{
	num = frac.num;
	den = frac.den;
	return *this; //returns itself so multiple = in one line are possible
}

//overloading comparision operators (<)
bool Fraction::operator< (const Fraction& frac)
{
	if (((double)num/den) < ((double)frac.num/frac.den))//check if cond is true
	{//using the double conversion
		return true;
	}
	else
	{
		return false;
	}
}

//overloading comparision operators (>)
bool Fraction::operator> (const Fraction& frac)
{
	if (((double)num/den) > ((double)frac.num/frac.den))
	{
		return true;
	}
	else
	{
		return false;
	}
}