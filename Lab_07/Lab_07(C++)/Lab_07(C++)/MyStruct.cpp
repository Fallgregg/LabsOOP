#include "Header.h"



PNode create(short int  val) {
	PNode newNode = new Node;
	newNode->elem = val;
	newNode->count = 1;
	newNode->next = NULL;
	return newNode;
}


void push(PNode& head, short elem)
{
	PNode node = create(elem);
	PNode temp = head;
	if (head == NULL) {
		head = node;
		return;
	}
	while (temp->next) {
		temp = temp->next;
	}
	node->next = temp->next;
	temp->next = node;
}


int count(PNode head) {
	PNode temp = head;
	int n = 0;
	while (temp) {
		if (temp->elem % 4 == 0) {
			n++;
		}
		temp = temp->next;
	}
	return n;
}

void exchange(PNode head) {
	int n = 0;
	PNode temp = head;
	while (temp) {
		if (n % 2 == 0) {
			temp->elem = 0;
		}
		n++;
		temp = temp->next;
	}
}

void output(PNode head) {
	PNode temp = head;
	while (temp) {
		cout << temp->elem << " ";
		temp = temp->next;
	}
	cout << endl;
}