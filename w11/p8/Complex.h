/*
CH-230-A
a10p8.cpp
Lars Schuster
lschuster@jacobs-university.de
*/

class Complex
{
private:
    double real;
    double img;//properties

public:
    Complex();
    Complex(int a, int b = 0);
    Complex(const Complex &a);//Constructors

    ~Complex();//Destructor

    void setreal(double newreal);
    void setimg(double newimg);//setters

    double getreal();
    double getimg();//getters

    void print();//service function

    Complex con();
    Complex add(Complex);
    Complex sub(Complex);
    Complex mul(Complex);//operants 

};