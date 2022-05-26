/*
CH-230-A
a12p7.cpp
Lars Schuster
lschuster@jacobs-university.de
*/
#ifndef _RING_H
#define _RING_H
#include "Circle.h"

class Ring : public Circle {
	public:
		Ring(const char *n, double outer, double inner);
		~Ring();
		double calcArea() const;
		double calcPeri() const;
	private:
		double innerradius;
};

#endif
