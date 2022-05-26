/*
CH-230-A
a13p8.cpp
Lars Schuster
lschuster@jacobs-university.de
*/

#include <iostream>
#include <cstdlib>
#include <stdexcept>

//class of Motorexception that is derived from exception
class MotorException : public std::exception
{
private:
    std::string errmsg;//holds string with error msg
public:
    MotorException();
    ~MotorException();
    std::string what();
};

//constructor initializes the message to wanted string
MotorException::MotorException()
{
    errmsg = "This motor has a problem";
}

MotorException::~MotorException()
{}

//method to print message
std::string MotorException::what()
{
    return errmsg;
}

//class motor
class Motor
{
    public:
    Motor();//constructors
};

Motor::Motor()
{
    MotorException exc;
    throw exc;//throw Motorexception
}

//car class
class Car
{
private:
public:
    Car();
};

//creating a car will create a motor
Car::Car()
{
    Motor b;
}

//garage class
class Garage
{
private:
public:
    Garage();
};

//constructor
Garage::Garage()
{
    try
    {
            Car a;//try to create a car
    }
    catch(MotorException& e)
    {
        std::cerr << e.what() << '\n';//print error msg to cerr
        throw "The car in this garage has problems with the motor";//trow string
    }
    
}

int main()
{
    try
    {
        Garage gar;
    }
    catch(const char* msg)
    {
        std::cerr << msg << '\n';
    }
    
    return 0;
}
