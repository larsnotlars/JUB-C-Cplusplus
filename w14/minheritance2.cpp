/*
CH-230-A
a13p5.cpp
Lars Schuster
lschuster@jacobs-university.de
*/
#include<iostream>
using namespace std;
 
class A
{
  int x;
public:
  A(int i) { x = i; }
  void print() { cout << x; }
};
 
class B: virtual public A
{
public:
  B():A(10) {  }
};
 
class C:  virtual public A 
{
public:
  C():A(10) {  }
};
 
class D: public B, public C {
public://when constructing D there is no empty constructor to be called in A
    D():A(10),B(),C(){ }/*to solve that we implement a Constructor that calls 
    the parametric costructor of A;*/
};//multiple inheritance with virtual requires to call all constructors
 
int main()
{
    D d;
    d.print();
    return 0;
}
