/*
CH-230-A
a12p6.cpp
Lars Schuster
lschuster@jacobs-university.de
*/
#ifndef _AREA_H
#define _AREA_H

class Area {
	public:
		Area(const char *n);
		virtual ~Area();
		void getColor() const;
		virtual double calcArea() const = 0;
		virtual double calcPeri() const = 0;//method to calc perimeter
		// virtual so polymorphism is activated
	private:
		char color[11];
};
#endif
