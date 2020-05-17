#include "Class.h"

class MyClass {
private: string str;
		 char ch;
public: MyClass() {
	this->str = str;
	this->ch = ch;
}
		string getStr() {
			return str;
		}

		void cleanStr() {
			str = '\0';
		}

		bool findLitertal() {
			for (int i = 0; i < str.length; i++) {
				if (str[i] == ch) {
					return true;
					break;
				}
			}
			return false;
		}
};