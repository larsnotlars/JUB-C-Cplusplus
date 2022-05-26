/*
CH-230-A
a13p2.cpp
Lars Schuster
lschuster@jacobs-university.de
*/

#include <iostream>
#include "Complex.h"

//default constructor initialize as 0
Complex::Complex()
{
    real = 0;
    img = 0;
}
//standard constructor initialize with specific values
Complex::Complex(int a, int b)
{
    real = a;
    img = b;
}


//copy constructor
Complex::Complex(const Complex &a)
{
    real = a.real;
    img = a.img;
}

//empty destructor
Complex::~Complex()
{
}

//setters for real and img parts
void Complex::setreal(double newreal)
{
    real = newreal;
}
void Complex::setimg(double newimg)
{
    img = newimg;
}

//getters for real and img parts
double Complex::getreal()
{
    return real;
}
double Complex::getimg()
{
    return img;
}

//print it smartly
void Complex::print()
{
    if (!img)//in case there is no img part
    {
        std::cout << real << std::endl;
    }
    else
    {
        if (img > 0)
        {//if img part is positive show +sign
            std::cout << real << " + " << img << "i" << std::endl;
        }
        else
        {//minus is already there
            std::cout << real << " " << img << "i" <<std::endl;
        }
        
    }
    
}

//conjugate
Complex Complex::con()
{
    Complex con;//temp instance
    con.real = real;
    con.img = (-1)*img;//flip sign
    return con;
}

//add two complex numbers
Complex Complex::add(Complex other)
{
    Complex add;
    add.real = real + other.real;
    add.img = img + other.img;
    return add;
}

//subtract two complex numbers
Complex Complex::sub(Complex other)
{
    Complex sub;
    sub.real = real - other.real;
    sub.img = img - other.img;
    return sub;
}

//multiply two complex numbers
Complex Complex::mul(Complex other)
{
    Complex mul;
    mul.real = real*other.real - img*other.img;
    mul.img = img*other.real + real*other.img;
    return mul;
}

//override +operator
Complex Complex::operator+(const Complex& comp)
{
    Complex sum(real+comp.real,img+comp.real);
    return sum;
}

//override -operator
Complex Complex::operator-(const Complex& comp)
{
    Complex dif(real-comp.real,img-comp.real);
    return dif;
}

//override *operator
Complex Complex::operator*(const Complex& comp)
{
    Complex prod(real*comp.real - img*comp.img,img*comp.real + real*comp.img);
    return prod;
}

//override =operator
Complex Complex::operator= (const Complex& comp)
{
    real = comp.real;
    img = comp.img;
    return *this;
}

//override output operator
std::ostream& operator<< (std::ostream& out,Complex const& comp)
{
    if (!comp.img)//in case there is no img part
    {
        out << comp.real << std::endl;
    }
    else
    {
        if (comp.img > 0)
        {//if img part is positive show +sign
            out << comp.real << " + " << comp.img << "i" << std::endl;
        }
        else
        {//minus is already there
            out << comp.real << " " << comp.img << "i" <<std::endl;
        }
    }
    return out;
}

std::istream& operator>> (std::istream& in,Complex & comp)
{//input files are structured like so: a b for comp num a +b*i
    in >> comp.real;
    in >> comp.img;
    return in;
}

