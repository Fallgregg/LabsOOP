#include"Header.h"

using namespace std;

int main()
{
	const int n = 4;
	Exception* obj[n]; 
	obj[0] = new Exception(1, 13, 25, 13);
	obj[1] = new Exception(1, 1, 1, 41);
	obj[2] = new Exception(4, 2, 5, 10);
	obj[3] = new Exception(1, 41, 12, 121);
	
	for (int i = 0; i < n; i++) {
		cout << "Value" << i + 1 << " = " << obj[i]->value() << endl; 
	}
	return 0;
}