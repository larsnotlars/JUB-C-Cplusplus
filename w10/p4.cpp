/*
CH-230-A
a9p4.cpp
Lars Schuster
l.schuster@jacobs-university.de
*/

#include <iostream>

//takes two ints and returns one
int mycount(int a, int b)
{
    return b-a;
}

//takes char and string and returns int
int mycount(char c, std::string s)
{
    int count = 0;
    for (unsigned int i = 0; i < s.size() ; i++)
    {// iterate through sting until end
        if(s[i] == c)
            count++;//everytime c matches string increase count
    }
    return count;
}

int main(int argc, char const *argv[])
{
    //some testcases for first function
    std::cout << "with 7 3 :" << mycount(7,3) << std::endl;
    std::cout << "with -3 2 :" << mycount(-3,2) << std::endl;
    std::cout << "with 0 0  :" << mycount(0,0) << std::endl;

    //some testcases for second function
    std::cout << "with 'a' and all the advantages of c: ";
    std::cout << mycount('a',"all the advantages of c") << std::endl;
    std::cout << "with '0' and 123456789: ";
    std::cout << mycount('0',"123456789") << std::endl;
    std::cout << "with '+' and #+*-++: ";
    std::cout << mycount('+',"#+*-++") << std::endl;
    return 0;
}
