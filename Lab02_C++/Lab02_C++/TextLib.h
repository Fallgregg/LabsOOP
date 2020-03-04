#include <iostream>
#include <string>
#include <vector>

using namespace std;

class CustomString {
private:
	string str;
public:
	CustomString(string str);
	string getStr();
	int compare(string str);
	int size();
};

class Text {
private:
	vector <CustomString> vect_str;
public:
	void addCustomString(CustomString customStr);
	void deleteCustomString(string str);
	void clearCustomString();
	string returnMinStr();
	int* numberChar(char ch);
	int size();
};
