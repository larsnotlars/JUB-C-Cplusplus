/*
CH-230-A
a10p3.cpp
Lars Schuster
l.schuster@jacobs-university.de
*/
#include <string>

class City
{
private:
//properies
    std::string name;
    int inhabitants;
    std::string mayor;
    double area;
public:
//setter
    void setname(std::string newname);
    void setinhab(int newinhab);
    void setmayor(std::string newmayor);
    void setarea(double newarea);
//getter
    std::string getname();
    int getinhab();
    std::string getmayor();
    double getarea();
//service functions
};
