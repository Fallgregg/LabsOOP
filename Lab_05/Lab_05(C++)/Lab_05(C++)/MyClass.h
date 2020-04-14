#include <iostream>

using namespace std;

class Figures {
protected: 
	double x1, x2, x3, x4, y1, y2, y3, y4;
public: 
	double s1 = 0;
	double s2 = 0;
	double s3 = 0;
	double s4 = 0;
	Figures(double x1, double y1, double x2, double y2, double x3, double y3, double x4, double y4);
private:
	void side_length();
};

class Rectangle : public Figures {
protected: 
	double perim = 0;
	double ar = 0;
	double a1 = 0;
	double a2 = 0;
	double a3 = 0;
	double a4 = 0;
public:
	Rectangle(double x1, double y1, double x2, double y2, double x3, double y3, double x4, double y4);
	double getPerimetr();
	double getArea();
	void rect_check(double x1, double y1, double x2, double y2, double x3, double y3, double x4, double y4);
private:
	void perimetr(double a, double b);
	void area(double a, double b);
};
