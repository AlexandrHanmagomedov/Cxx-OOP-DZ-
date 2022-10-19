#pragma once
#include <iostream>
using namespace std;
class first
{
	struct Node {
		int data;
		struct Node* link;
	};
	struct Node* top;

	void push(int data) {
		struct Node* temp;
		temp = new Node();
		if (!temp) {
			cout << " Heap Overflow";
			exit(1);
		}
		temp->data = data;
		temp->link = top;
		top = temp;
	}

	int isEmpty() {
		return top == NULL;
	}
	int peek() {
		if (!isEmpty())
			return top->data;
		else
			exit(1);
	}
	void pop() {
		struct Node* temp;
		if (top == NULL) {
			exit(1);
		}
		else {
			temp = top;
			top = top->link;
			temp->link = NULL;
			free(temp);
		}
	}
	void print() {
		struct Node* temp;
		if (top == NULL) {
			exit(1);
		}
		else {
			temp = top;
			while (temp != NULL) {
				cout << temp->data << ", ";
				temp = temp->link;
			}
		}
	}

};

