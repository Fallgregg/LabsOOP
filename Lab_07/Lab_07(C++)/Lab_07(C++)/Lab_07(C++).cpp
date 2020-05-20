#include "List.h"

int main() {
	Struct* test = new Struct();
	int size = 0;

	cout << "Enter number of elements: ";
	cin >> size;

	for (int i = 0; i < size; i++) {
		test->push(rand() % 50 + 10);
	}

	cout << "List: \n";
	test->output();
	
	cout << "\nNumber of elements multiple 4: " << test->amount();

	cout << "\n\nList after exchanging: \n";
	test->exchange();
	test->output();

	return 0;
}
	
