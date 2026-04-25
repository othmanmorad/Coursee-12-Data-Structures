#include <iostream>
#include <string>
using namespace std;
class Node1
{
public:
	int value;
	Node1* next;
};

struct Node2
{
	int value;
	Node2* next;
};

int main()
{
	//Linked List Implementation
	//Linked List
	cout << "-----------------------------" << endl;
	cout << "class Node1" << endl;

	Node1* head;

	Node1* node1 = NULL;
	Node1* node2 = NULL;
	Node1* node3 = NULL;

	node1 = new Node1();
	node2 = new Node1();
	node3 = new Node1();



	node1->value = 10;
	node2->value = 20;
	node3->value = 30;


	node1->next = node2;
	node2->next = node3;
	node3->next = NULL;

	head = node1;

	while (head != NULL)
	{
		cout << head->value << endl;
		head = head->next;
	}



	//struct Node2

	cout << "-----------------------------" << endl;
	cout << "struct Node2" << endl;
	Node2* head2;

	Node2* node4 = NULL;
	Node2* node5 = NULL;
	Node2* node6 = NULL;

	node4 = new Node2();
	node5 = new Node2();
	node6 = new Node2();

	node4->value = 40;
	node5->value = 50;
	node6->value = 60;

	node4->next = node5;
	node5->next = node6;
	node6->next = NULL;

	head2 = node4;

	while (head2 != NULL)
	{
		cout << head2->value << endl;
		head2 = head2->next;
	}
}

