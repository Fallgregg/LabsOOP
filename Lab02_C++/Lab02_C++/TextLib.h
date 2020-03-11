#include <iostream>
#include <string>
#include <vector>

using namespace std;

	class CustomString {
	private:
		vector<char> str;
	public:
		CustomString(vector<char> str);
		~CustomString();
		vector<char> getStr();
		int size();
	};

	class Text {
	private:
		vector<CustomString> text;
	public:
		vector<CustomString> getText();
		void addStr(CustomString str);
		void deleteCustomString(int i);
		void clear();
		vector<char> findFritstChars();
		CustomString minStr();
		int numberCharsInText(char ch);
	};
