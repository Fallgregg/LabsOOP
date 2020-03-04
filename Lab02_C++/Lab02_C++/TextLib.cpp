#include "TextLib.h"

CustomString::CustomString(string str) {
	this->str = str;
}

string CustomString::getStr() {
	return str;
}

int CustomString::compare(string str2) {
	return this->str.compare(str2);
}

int CustomString::size() {
	return this->str.size();
}

int Text::size() {
	return this->vect_str.size();
}

void Text::addCustomString (CustomString customStr) {
	this->vect_str.push_back(customStr);
};

void Text::deleteCustomString(string str) {
	for (auto it = vect_str.begin(); it != vect_str.end(); ++it) {
		CustomString temp = *it;
		if (temp.compare(str)) {
			this->vect_str.erase(it);
		}
	}
}

void Text::clearCustomString() {
	this->vect_str.clear();
}

string Text::returnMinStr() {
	if (vect_str.size() == 0) {
		return NULL;
	}

	CustomString min = vect_str[0];
	for (int i = 0; i < this->vect_str.size(); i++) {
		if (this->vect_str[i].size() < min.size()) {
			min = vect_str[i];
		}
	}
	return min.getStr();
}

int* Text::numberChar(char ch) {
	int n = this->vect_str.size();
	int* count_arr = new int[n];
	int count = 0;
	for (int i = 0; i < n; i++) {
		CustomString temp = vect_str[i];
		for (int j = 0; j < temp.size(); j++) {
			if (temp.getStr()[j] == ch) {
				count++;
			}
		}
		count_arr[i] = count;
	}
	return count_arr;
}
