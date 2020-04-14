#include "MyClass.h"

int main() {
	double x1, x2, x3, x4, y1, y2, y3, y4;
	cout << "Enter first vertex:\n";
	cin >> x1 >> y1;
	cout << "Enter second vertex:\n";
	cin >> x2 >> y2;
	cout << "Enter third vertex:\n";
	cin >> x3 >> y3;
	cout << "Enter fourth vertex:\n";
	cin >> x4 >> y4;
	Rectangle val(x1, y1, x2, y2, x3, y3, x4, y4);
	cout << "Perimetr = " << val.getPerimetr() << endl;
	cout << "Area = " << val.getArea() << endl;
	
	return 0;
}