/*
CH-230-A
a11p6.cpp
Lars Schuster
lschuster@jacobs-university.de
*/

#include <iostream>
#include <math.h>
#include "Vector.h"

//default constructor
Vector::Vector()
{
    size = 0;
    cmp = NULL;
}

//parametric constructor
Vector::Vector(int newsize, double *values)
{
    size = newsize;
    cmp = new double[newsize];
    for (int i = 0; i < newsize; i++)
    {
        cmp[i] = values[i];    
    }
}

//copy constructor
Vector::Vector(const Vector& vec)
{
    size = vec.size;
    cmp = new double[vec.size];
    for (int i = 0; i < vec.size; i++)
    {
        cmp[i] = vec.cmp[i];
    }//actually copy the values into a new array
}

//destructor
Vector::~Vector()
{
    delete [] cmp;//deallocate the memory
}

//setter of size
void Vector::setsize(int newsize)
{
    size = newsize;
}

//setter of pointer to components
void Vector::setcmp(double *newcmp)
{
    cmp = newcmp;
}

//setter of all components
//(assumes array of doubles to be passed with at least size-many items)
void Vector::setallcmp(double newvals[])
{
    cmp = new double[size];
    for (int i = 0; i < size; i++)
    {
        cmp[i] = newvals[i];
    }
}

//getter of size
int Vector::getsize()
{
    return size;
}

//getter of components array
double* Vector::getcmp()
{
    return cmp;
}


//print method
void Vector::print()
{
    for (int i = 0; i < size; i++)
    {
        std::cout << cmp[i] << " ";
    }
    std::cout << std::endl;
}

//method to calcualte the norm of a vector and return it as a double value
double Vector::norm()
{
    double sum = 0 ;
    for (int i = 0; i < size; i++)
    {
        sum += (cmp[i]*cmp[i]); //compute sum of squares of components
    }
    return sqrt(sum); //return squareroot of that sum
}


//sum method takes Vector and returns another Vector
Vector Vector::add(const Vector vec) const
{
    Vector sum;
    sum.setsize(size);
    sum.cmp = new double[size];
    for (int i = 0; i < size; i++)
    {
        sum.cmp[i] = cmp[i] + vec.cmp[i];//add the components seperately
    }
    return sum;
}

//difference method takes Vector and returns another Vector
Vector Vector::diff(const Vector vec) const
{
    Vector diff;
    diff.setsize(size);
    diff.cmp = new double[size];
    for (int i = 0; i < size; i++)
    {
        diff.cmp[i] = cmp[i] - vec.cmp[i];//subtract components seperately
    }
    return diff;
}

//method to calculate scalar product
double Vector::scap(const Vector &vec)
{
    double scalorp = 0;
    for (int i = 0; i < size; i++)
    {
        scalorp += cmp[i]*vec.cmp[i];//add the products of the components 
    }
    return scalorp;
}