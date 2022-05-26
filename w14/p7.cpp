/*
CH-230-A
a13p7.cpp
Lars Schuster
lschuster@jacobs-university.de
*/
#include <iostream>
#include <stdexcept>

//exception derived from std::exception
class OwnException : public std::exception
{
private:
    std::string errmsg;//have errmsg as property
public:
    OwnException(std::string);
    ~OwnException();

    std::string what();
};

//constructor to set message when exception is created
OwnException::OwnException(std::string s)
{
    errmsg = s;
}

OwnException::~OwnException()
{
}

std::string OwnException::what()
{
    return errmsg;
}

//function to throw error 
void erryeet(int a)
{
    switch (a)
    {//throws error corresponding to input
    case 1:
        throw 'a';
        break;
    case 2:
        throw 12;
        break;
    case 3:
        throw true;
        break;
    default://default is own exception
        OwnException exep("Default case exception");
        throw exep;
        break;
    }
}

int main()
{
    
    for (size_t i = 0; i < 4; i++)//try alll funcitons seperately 
        {//(0 should result in default call)
            try
            {
                erryeet(i);
            }
        catch(char& a)
        {//catch the errors correspondingly
            std::cerr << "Caught in main:"<< a << '\n';
        }
        catch(int& b)
        {
            std::cerr << "Caught in main:"<< b << '\n';
        }
        catch(bool& c)
        {
            std::cerr << "Caught in main:"<< c << '\n';
        }
        catch(OwnException& d)
        {
            std::cerr << "Caught in main:"<< d.what() << '\n';
        }
    }

    return 0;
}
