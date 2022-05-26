/*
CH-230-A
a12p7.cpp
Lars Schuster
lschuster@jacobs-university.de
*/
#include <iostream>
#include <cstring>
#include "Area.h"
using namespace std;

Area::Area(const char* n) {
	strncpy(color, n, 10);
	cout << "\nArea constructor being called...\n";
}

Area::~Area() {
}

void Area::getColor() const {
	cout << "\n" << color << ": ";
}
