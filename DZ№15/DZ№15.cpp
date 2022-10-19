// DZ№15.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

struct Node{
	int data;
	struct Node* link;
};
struct Node* top;

void push(int data){
	struct Node* temp;
	temp = new Node();
	if (!temp)	{
	cout << " Heap Overflow";
	exit(1);
	}
	temp->data = data;
	temp->link = top;
	top = temp;
}

int isEmpty(){
	return top == NULL;
}
int peek(){
	if (!isEmpty())
		return top->data;
	else
		exit(1);
}
void pop(){
	struct Node* temp;
	if (top == NULL)	{
		exit(1);
	}
	else	{
		temp = top;
		top = top->link;
		temp->link = NULL;
		free(temp);
	}
}
void print(){
	struct Node* temp;
	if (top == NULL)	{
		exit(1);
	}
	else	{
		temp = top;
		while (temp != NULL)		{
			cout << temp->data << ", ";
			temp = temp->link;
		}
	}
}



int main(){
	push(1);
	push(2);
	push(3);
	print();
	cout << " Verhniy element "<< peek() << endl;
	pop();
	pop();
	print();
	cout << " Verhniy element "<< peek() << endl;



}
