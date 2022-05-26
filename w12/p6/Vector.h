/*
CH-230-A
a11p6.cpp
Lars Schuster
lschuster@jacobs-university.de
*/

class Vector
{
private:
    int size;
    double *cmp;
public:
//three constructors
    Vector();
    Vector(int newsize, double *values);
    Vector(const Vector& vec);
//destructor
    ~Vector();
//setters
    void setsize(int newsize);
    void setcmp(double *newcmp);//setter for only the pointer to array
    void setallcmp(double newvals[]);//setter for creating an array at cmp
//getters
    int getsize();
    double* getcmp();
//service functions
    void print();
    double norm();
    Vector add(const Vector vec) const;
    Vector diff(const Vector vec) const;
    double scap(const Vector &vec);
};