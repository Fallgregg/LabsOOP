#include <iostream>
using namespace std;

struct Node {
	short int elem;
	int count;
	Node* next;
};

typedef Node* PNode;

PNode create(short int);
void push(PNode&, short int);
int count(PNode);
void exchange(PNode&);
void output(PNode);
