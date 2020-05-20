#include <iostream>
using namespace std;

class Struct {
private:
	struct Node {
		short value;
		struct Node* prev;
		struct Node* next;
		Node(short data) {
			this->value = data;
			this->prev = nullptr;
			this->next = nullptr;
		}
	};
	struct Node* head;
	struct Node* tail;
public:
	Struct();
	void push(short int data);
	int amount();
	void exchange();
	void output();
};

