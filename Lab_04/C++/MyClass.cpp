#include "MyClass.h"
#include <windows.h>


MyClass::MyClass() {
	init();
}

MyClass::MyClass(vector<char> str) {
	this->str = str;
	length(str);
}

MyClass::MyClass(MyClass& copy) {
	this->str = copy.str;
	this->len = copy.str.size();
}

vector<char> MyClass::getStr() {
	return this->str;
}

void MyClass::length(vector<char> str) {
	this->len = str.size();
}

void MyClass::init() {
	this->str.push_back('\0');
	len = 0;
}

MyClass MyClass::operator +(MyClass first) {
	MyClass result;
	result.str = this->str;

	try {
		if (first.len == 0) {
			throw "Entered string is empty";
		}
	}

	catch (const char* ch) {
		MessageBoxA(GetActiveWindow(), ch, "Error", MB_ICONERROR);
		//exit(1);
	}

	for (int i = 0; i < first.len; i++) {
		result.str.push_back(first.str[i]);
	}
	result.len = first.len + this->len;
	return result;
}

MyClass MyClass::operator /(int num) {
	MyClass result;


	vector<char> temp_str;
	for (int i = 0; i < this->len; i++) {
		if (i % num == 0) {
			temp_str.push_back(this->str[i]);
		}
	}
	this->str = temp_str;
	length(this->str);
	result.str = this->str;
	result.len = this->len;
	return result;
}
