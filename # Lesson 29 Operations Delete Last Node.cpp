#include <iostream>
using namespace std;
class Node
{
public:
	int value;
	Node* next;
};

void InsertAtBiginning(Node*& head, int value)
{
	Node* NewNode = new Node();
	NewNode->value = value;
	NewNode->next = head;
	head = NewNode;
}
void PrintList(Node* head)
{
	while (head != NULL)
	{
		cout << head->value << endl;
		head = head->next;
	}

}

Node* Find(Node* Head, int value)
{
	while (Head != NULL)
	{
		if (Head->value == value)
		{
			return Head;
		}
		Head = Head->next;
	}
	return NULL;
}

void InsertAfter(Node* Prev, int value)
{
	if (Prev == NULL)
	{
		cout << "\nPrevious node cannot be NULL.";
		return;
	}

	Node* new_node = new Node();
	new_node->value = value;
	new_node->next = Prev->next;
	Prev->next = new_node;
}


void InsertAtAnd(Node*& head, int value)
{
	Node* new_node = new Node();
	new_node->value = value;
	new_node->next = NULL;

	if (head == NULL)
	{
		head = new_node;
		return;

	}

	Node* LastNode = head;
	while (LastNode->next != NULL)
	{
		LastNode = LastNode->next;
	}
	LastNode->next = new_node;
	return;
}

void DeleteNode(Node*& head, int value)
{
	Node* Current = head, * Prev = head;

	//if Linked List is empty
	if (head == NULL)
	{
		return;
	}

	//if First Node is the node to be deleted
	if (Current->value == value)
	{
		head = Current->next;
		delete Current;
		return;
	}

	//Search for the node to be deleted, keep track of the previous node as we need to change 'Prev->next'
	while (Current != NULL && Current->value != value)
	{
		Prev = Current;

		Current = Current->next;

	}

	//If value was not present in linked list
	if (Current == NULL)
	{
		return;
	}

	//delete the node from linked list
	Prev->next = Current->next;
	delete Current;//free memory

}



void DeleteFirstNode(Node*& head)
{
	Node* FirstNode = head;

	//if Linked List is empty
	if (head == NULL)
	{
		return;
	}

	//if First Node is the node to be deleted

	head = FirstNode->next;
	delete FirstNode;
	return;

}

void DeleteLastNode(Node*& head)
{
	Node* Current = head, * Prev = head;
	//if Linked List is empty
	if (head == NULL)
	{
		return;
	}
	//if First Node is the node to be deleted
	if (Current->next == NULL)
	{
		head = NULL;
		delete Current;
		return;
	}

	//Search for the node to be deleted, keep track of the previous node as we need to change 'Prev->next'
	while (Current!=NULL &&Current->next != NULL)
	{
		Prev = Current;
		Current = Current->next;
	}

	//delete the node from linked list
	Prev->next = NULL;
	delete Current;//free memory
}

int main()
{

	Node* head = NULL;
	InsertAtAnd(head, 1);
	InsertAtAnd(head, 2);
	InsertAtAnd(head, 3);
	InsertAtAnd(head, 4);
	InsertAtBiginning(head, 0);

	PrintList(head);

	cout << "\nAfter Deleting Last Node\n";
	DeleteLastNode(head);
	PrintList(head);
}