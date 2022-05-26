/*
CH-230-A
a13p4.cpp
Lars Schuster
lschuster@jacobs-university.de
*/
#include<iostream>
using namespace std;
 
class A
{
  int x;
public:
  void setX(int i) {x = i;}
  void print() { cout << x; }
};
 
class B:  public virtual A//add virtual so only one method is implemented
{
public:
  B()  { setX(10); }
};
 
class C:  public virtual A //also add it for class C
{
public:
  C()  { setX(20); }
};
 
class D: public B, public C {
};
 
int main()
{
    D d;
    d.print();/*calling the print method is ambiguous becasue both constructors
    of B and C implement the method for objects of class D
    It will print the value 20 because the Constructor of C is called last.*/
    return 0;
}
