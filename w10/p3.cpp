/*
CH-230-A
a9p3.cpp
Lars Schuster
l.schuster@jacobs-university.de
*/
#include <iostream>

//takes float returns abs value of it
float absolute(float number)
{
    if (number<0)//if num is negative return positive 
        return -1*number;
    else
        return number;
}

int main(int argc, char const *argv[])
{
    float a;
    std::cout << "Enter number" << std::endl;
    std::cin >> a;//get a number to test it and call function with it
    std::cout << "The absolute value is " << absolute(a) << std::endl;
    return 0;
}
