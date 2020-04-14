#include "MyClass.h"

Figures::Figures(double x1, double y1, double x2, double y2, double x3, double y3, double x4, double y4) {
	this->x1 = x1;
	this->x2 = x2;
	this->x3 = x3;
	this->x4 = x4;
	this->y1 = y1;
	this->y2 = y2;
	this->y3 = y3;
	this->y4 = y4;
	side_length();
}

void Figures::side_length() {
	s1 = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	s2 = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
	s3 = sqrt(pow(x4 - x3, 2) + pow(y4 - y3, 2));
	s4 = sqrt(pow(x1 - x4, 2) + pow(y1 - y4, 2));
}

 
void Rectangle::rect_check(double x1, double y1, double x2, double y2, double x3, double y3, double x4, double y4) {
	a1 = (x2 - x1) * (x3 - x2) + (y2 - y1) * (y3 - y2);
	a2 = (x3 - x2) * (x4 - x3) + (y3 - y2) * (y4 - y3);
	a3 = (x4 - x3) * (x1 - x4) + (y4 - y3) * (y1 - y4);
	a4 = (x1 - x4) * (x2 - x1) + (y1 - y4) * (y2 - y1);
}

Rectangle::Rectangle(double x1, double y1, double x2, double y2, double x3, double y3, double x4, double y4):Figures(x1, y1, x2, y2, x3, y3, x4, y4) {
	rect_check(x1, y1, x2, y2, x3, y3, x4, y4);
	if (a1 == 0 && a2 == 0 && a3 == 0 && a4 == 0) {
		perimetr(s1, s2);
		area(s1, s2);
	} else {
		cout << "Not a rectangle\n";
	}
}

void Rectangle::perimetr(double a, double b) {
	perim = (a + b) * 2;
}

void Rectangle::area(double a, double b) {
	ar = a * b;
}

double Rectangle::getPerimetr(){
	return perim;
}

double Rectangle::getArea() {
	return ar;
}
