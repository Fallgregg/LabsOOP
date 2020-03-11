#include "TextLib.h"

CustomString::CustomString(vector<char> str) {
	this->str = str;
}

CustomString::~CustomString() {
	str.clear();
}

vector<char> CustomString::getStr() {
	return str;
}

int CustomString::size() {
	return str.size();
}

vector<CustomString> Text::getText() {
	return text;
}

void Text::addStr(CustomString str) {
	text.push_back(str);
}

void Text::deleteCustomString(int i) {
	text.erase(text.begin() + i); 
}

void Text::clear() {
	text.clear();
}

CustomString Text::minStr() {
	CustomString min = text[0];
	for (int i = 0; i < text.size(); i++) {
		//cout << text[i].size() << ' ' << min.size() << endl;
		if (text[i].size() < min.size()) {
			min = text[i];
		}
	}
	return min;
}

vector<char> Text::findFritstChars() {
	vector<char> first_vect;
	for (int i = 0; i < text.size(); i++) {
		first_vect.push_back(text[i].getStr()[0]);
	}
	return first_vect;
}

int Text::numberCharsInText(char ch) {
	int count = 0;
	for (int i = 0; i < text.size(); i++) {
		for (int j = 0; j < text[i].size(); j++) {
			if (text[i].getStr()[j] == ch) {
				count++;
			}
		}
	}
	return count;
}
