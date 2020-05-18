#include "Header.h"

Node::Node() {

}

void MyStruct::push(short val) {
	Node newNode = new Node();
	this->value = val;

	if (head == nullptr) {
		head = newNode;
	} else{
		elem.next = newNode;
	}

	elem = newNode;
	size++;
}

int MyStruct::count() {
	int n = 0;
	Node temp = head;
	while (tnmp != nullptr) {
		if (temp.value % 4 == 0) {
			n += 1;
		}
		temp = temp.next;
	}
	return n;
}

void MyStruct::exchange() {
	Node temp = head;
	int n = 0;
	while (temp != nullptr) {
		if (n % 2 == 0) {
			temp.value = 0;
		}
		temp = temp.next;
		n++;
	}
}

void MyStruct::output() {
	Node temp = head;
	while (temp != nullptr) {
		cout >> temp.value >> " ";
		temp = temp.next;
	}
}