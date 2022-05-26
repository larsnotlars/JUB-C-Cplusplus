/*
CH-230-A
a13p2.cpp
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

    //operator overriding
    Complex operator+(const Complex&);
    Complex operator-(const Complex&);
    Complex operator*(const Complex&);

    Complex operator= (const Complex&);

    friend std::ostream& operator<<(std::ostream&,Complex const&);
    friend std::istream& operator>>(std::istream&,Complex &);

};