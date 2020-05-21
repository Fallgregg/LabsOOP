#include <iostream>
#include <string>

using namespace std;


bool findLetter(char str[], char ch, int n) {
	for (int i = 0; i < n; i++) {
		if (str[i] == ch) {
			return true;
			break;
		}
	}
	return false;
}

int main() {
	char ch;
	int n = 4;
	char* str = new char[n];

	cout << "Enter string:\n";
	for (int i = 0; i < n; i++) {
		cin >> str[i];
	}
	cout << "Enter letter: ";
	cin >> ch;

	bool (*func) (char[], char, int);
	func = findLetter;

	if (func(str, ch, n)) {
		cout << "\nString contains entered letter\n";
	}
	else {
		cout << "\nString does not contain entered letter\n";
	}
	
	return 0;
}

	