/*
CH-230-A
a11p6.cpp
Lars Schuster
lschuster@jacobs-university.de
*/

#include <iostream>
#include <math.h>
#include "Vector.h"

int main()
{
    double components2[3] ={0,3,4};
    double components4[3] ={5.3,-1,-1}; //array to set values of the vectors
    Vector v1;
    Vector v2(3, components2);
    Vector v3(v2);
    Vector v4(3, components4);//call constructors

    std::cout << "The vectors v1-v2:" << std::endl;
    v1.print();//this one is empty so only \n is printed
    v2.print();
    v3.print();
    v4.print();//print the vectors

    std::cout << "Norm of v2 = " << v2.norm() << std::endl;
    std::cout << "Scalar Product of v2 and v4 = " << v2.scap(v4) << std::endl;
    std::cout << "Sum of v2 and v4 = ";
    (v2.add(v4)).print();
    std::cout << "Difference of v2 and v4 = ";
    (v2.diff(v4)).print();//call and print the methods 

    return 0;
}
