/*
CH-230-A
a13p3.cpp
Lars Schuster
lschuster@jacobs-university.de
*/

#include <vector>
#include <iostream>

int main()
{
    std::vector<int> vec(20,8);
    try
    {
        vec.at(20);//try to access the 21 value(start counting at 0)
    }
    catch(const std::out_of_range& e)//catch the out of range exception
    {
        std::cerr << e.what() << '\n';//print it to error stream
    }
    
    return 0;
}
