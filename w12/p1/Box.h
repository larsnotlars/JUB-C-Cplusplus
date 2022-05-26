/*
CH-230-A
a11p1.cpp
Lars Schuster
lschuster@jacobs-university.de
*/

class Box
{
private:
//dimensions
    double height;
    double width;
    double depth;

public:
//constructors
    Box();
    Box(double h, double w, double d);
    Box(Box &box);
//destructor
    ~Box();
//setter
    void setheight(double h);
    void setwidth(double w);
    void setdepth(double d);
//getter
    double getheight();
    double getwidth();
    double getdepth();
//service methods
    double volume();
};