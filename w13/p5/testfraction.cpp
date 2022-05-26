/*
CH-230-A
a12p5.cpp
Lars Schuster
lschuster@jacobs-university.de
*/
#include <iostream>
#include "fraction.h"

using namespace std;

int main(void)
{
    Fraction a,b,sum,dif;

    cin >> a;
    cout << a <<std::endl;
    cin >> b;
    cout << b <<std::endl;//create and print fractions a and b

    if (a > b)
        std::cout <<"The greater fraction is " << a << std::endl;
    else if(a < b)
        std::cout << "The greater fraction is " << b << std::endl;
    else
        std::cout << "The fractions are equal " << std::endl; 

    sum = a+b;
    dif = a-b;

    std::cout << "The sum is: " << sum <<std::endl;
    std::cout << "The difference is: " << dif <<std::endl;

}
