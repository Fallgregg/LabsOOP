#include "List.h"

Struct::Struct() {
	this->head = nullptr;
	this->tail = nullptr;
}

void Struct::push(short int data) {
	Node* node = new Node(data);
	if (this->head == nullptr) {
		this->head = node;
	} else {
		this->tail->next = node;
		node->prev = this->tail;
	}
	this->tail = node;
}

void Struct::output() {
	Node* temp = this->head;
	while (temp != nullptr) {
		cout << temp->value << " ";
		temp = temp->next;
	}
	cout << endl;
}

int Struct::amount() {
	int n = 0;
	Node* temp = this->head;
	while (temp != nullptr) {
		if (temp->value % 4 == 0) {
			n++;
		}
		temp = temp->next;
	}
	return n;
}

void Struct::exchange() {
	int n = 0;
	Node* temp = this->head;
	while (temp != nullptr) {
		if (n % 2 == 0) {
			temp->value = 0;
		}
		n++;
		temp = temp->next;
	}
}

