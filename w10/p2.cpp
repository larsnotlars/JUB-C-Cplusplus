/*
CH-230-A
a9p2.cpp
Lars Schuster
l.schuster@jacobs-university.de
*/

#include <iostream>
#include <string>

int main(int argc, char const *argv[])
{
    
    int n;
    double x;
    std::string s;
    std::cin >> n;
    std::cin >> x;
    std::cin >> s;//get input variables
    for (int i = 0; i < n; i++)
    {//n times
        std::cout << s << ':' << x << std::endl;//print s : x
    }
    
    return 0;
}
