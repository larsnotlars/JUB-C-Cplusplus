/*
CH-230-A
a13p2.cpp
Lars Schuster
lschuster@jacobs-university.de
*/

#include <iostream>
#include "Complex.h"
#include <fstream>


int main()
{
    Complex a,b;//create standard complex numbers
    std::ifstream inp1("in1.txt");
    if (!inp1.good())
    {
        std::cerr << "Could not open in1.txt" << std::endl;
        exit(1);
    }
    
    std::ifstream inp2("in2.txt");
    if (!inp2.good())
    {
        std::cerr << "Could not open in2.txt" << std::endl;
        exit(2);
    }

    std::ofstream outp("output.txt");
    if (!outp.good())
    {
        std::cerr << "Coud not create output.txt" << std::endl;
        exit(3);
    }//open all files and check if it was successful
    
    inp1 >> a;
    inp2 >> b;

    std::cout << a << std::endl;
    std::cout << b << std::endl;

    std::cout << a + b << std::endl;
    outp << a + b << std::endl;

    std::cout << a - b << std::endl;
    outp << a - b << std::endl;

    std::cout << a * b << std::endl;
    outp << a * b << std::endl;//print sum prod and dif to screen and outputfile

    inp1.close();
    inp2.close();
    outp.close();//close files

    return 0;
}
