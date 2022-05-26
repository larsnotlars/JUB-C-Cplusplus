/*
CH-230-A
a12p4.cpp
Lars Schuster
lschuster@jacobs-university.de
*/
#include <iostream>
#include "fraction.h"

using namespace std;

int main(void)
{
    Fraction a,b;

    cin >> a;
    cout << a;
    cin >> b;
    cout << b;//create and print fractions a and b

    cout << "Product: " << a*b;
    cout << "Quotionent: " << a/b;//print their Product and Quotient
}
