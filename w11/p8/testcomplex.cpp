/*
CH-230-A
a10p8.cpp
Lars Schuster
lschuster@jacobs-university.de
*/

#include <iostream>
#include "Complex.h"


int main(int argc, char const *argv[])
{
    Complex c1, c2;//create two instances of Complex numbers
    double temp;
    std::cout << "Enter real part" << std::endl;
    std::cin >> temp;
    c1.setreal(temp);
    std::cout << "Enter imaginary part" << std::endl;
    std::cin >> temp;
    c1.setimg(temp);//read values for 1

    std::cout << "Enter real part" << std::endl;
    std::cin >> temp;
    c2.setreal(temp);
    std::cout << "Enter imaginary part" << std::endl;
    std::cin >> temp;
    c2.setimg(temp);//read values for 2

    std::cout << "Conjugate of 1st:" << std::endl;
    (c1.con()).print(); //conjugate of 1

    std::cout << "Sum: " << std::endl;
    (c1.add(c2)).print(); // add both

    std::cout << "Difference between 2nd and 1st : " << std::endl;
    (c2.sub(c1)).print(); //subtract one from two

    std::cout << "Product : " << std::endl;
    (c2.mul(c1)).print(); //multiply them


    return 0;
}
