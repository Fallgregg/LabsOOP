#include "Header.h"

int main() {

	PNode head = NULL;
	short int el;
	int n;
	short int add;
	int size;

	cout << "Enter first element: \n";
	cin >> el;
	head = create(el);

	cout << "Enter number of elements in your list: ";
	cin >> size;

	cout << "Enter element: \n";
	for (int i = 0; i < size; i++) {
		cin >> add;
		if (add >= -32768 && add <= 32767) {
			push(head, add);
		}
	}

	cout << "List: \n";
	output(head);

	n = count(head);
	cout << "\nNumber of elements multiple 4: " << n;

	exchange(head);

	cout << "\nNew list: ";
	output(head);

	return 0;
}



	
