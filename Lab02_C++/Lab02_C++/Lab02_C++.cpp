#include "TextLib.h"

int main() {
	int n = 0;
	cout << "Enter number of strings: ";
	cin >> n;
	
	Text text;
	for (int i = 0; i <= n; i++) {
		string str;
		getline(cin, str);
		text.addCustomString(CustomString(str));
	}

	cout << "Min string: " << endl << text.returnMinStr();

	char ch;
	cout << "Enter character: ";
	cin >> ch;
	cout << "Repitaition rate of character: " << endl; 
	for (int i = 0; i < 3; i++) {
		cout << text.numberChar(ch)[i] << " ";
	}
	cout << endl;
	
	string str_del;
	getline(cin, str_del);
	text.deleteCustomString(str_del);
	cout << "Without deleted string: " << endl;

	text.clearCustomString();

	return 0;
}
