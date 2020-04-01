#include "MyClass.h"

int main() {
	vector<char> vect;
	cout << "Input string:";
	for (int i = 0; i < 100; i++) {
		char ch;
		ch = getchar();
		if (ch == '\n') {
			vect.push_back('\0');
			break;
		}
		vect.push_back(ch);
	}
	MyClass R1;
	MyClass R2(vect);
	MyClass R3(R2);

	cout << "R2 / 2:\n";
	R2 = R2 / 2;
	vector <char> temp = R2.getStr();
	for (int i = 0; i < R2.len; i++) {
		cout << R2.getStr()[i];
	}
	cout << "\nR2 + R3:\n";
	R1 = R2 + R3;
	for (int i = 0; i < R1.len; i++) {
		cout << R1.getStr()[i];
	}
	return 0;
}

