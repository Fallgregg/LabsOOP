#include <iostream>
#include <vector>

using namespace std;

class MyClass {
public: int len;
		vector<char> str;
		MyClass();
		MyClass(vector<char> vect);
		MyClass(MyClass&);
		MyClass operator +(MyClass first);
		MyClass operator /(int num);
		vector<char> getStr();

private:void init();
		void length(vector<char> str);
};

