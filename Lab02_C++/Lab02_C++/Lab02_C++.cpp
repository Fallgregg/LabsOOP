#include "TextLib.h"


void addString(Text& text) {
	cout << endl << "Enter new string: " << endl;
	for (int i = 0; i < 1; i++) {
		vector<char> str2;
		for (int j = 0; j < 1000; j++) {
			char ch;
			ch = getchar();
			if (ch == '\n') {
				break;
			}
			str2.push_back(ch);
		}
		CustomString s = CustomString(str2);
		text.addStr(s);
		str2.clear();
	}
	cout << endl;
}

void printText(Text text) {
	vector<CustomString> t = text.getText();
	for (int i = 0; i < t.size(); i++) {
		CustomString str = t[i];
		for (int j = 0; j < str.size(); j++) {
			cout << str.getStr()[j];
		}
		//cout << ' ';
	}
	cout << endl;
}

void outputFirstLetters(Text text) {
	vector<char> str = text.findFritstChars();
	cout << "String of first letters: " << endl;
	for (int i = 0; i < str.size();i++) {
		cout << str[i];
	}
	cout << endl;
}


void printChars(Text text) {
	char ch;
	cout << "Enter character to calculate: ";
	cin >> ch;
	cout << endl << "Number of times repeated: ";
	int k = text.numberCharsInText(ch);
	cout << k << endl;	
}

void minString(Text text) {
	CustomString min = text.minStr();
	cout << endl << "Minimal string: " << endl;
	for (int i = 0; i < min.size(); i++) {
		cout << min.getStr()[i];
	}
	cout << endl;
}

int main() {
	int n;
	cout << "Enter number of strings: ";
	cin >> n;

	Text text;
	getchar();
	for (int i = 0; i < n; i++) {
		vector<char> str;
		char ch;
		do {
			ch = getchar();
			str.push_back(ch);
		} while (ch != '\n');
		
		CustomString st = CustomString(str);
		text.addStr(st);
		str.clear();
	}

	addString(text);
	cout << "Text: " << endl;
	printText(text);
	cout << endl;
	outputFirstLetters(text);
	cout << endl;
	printChars(text);
	minString(text);
}
