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


void InsertAtAnd(Node* &head, int value)
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


int main()
{

	Node* head = NULL;
	InsertAtAnd(head, 1);
	InsertAtAnd(head, 2);
	InsertAtAnd(head, 3);
	InsertAtBiginning(head, 0);

	PrintList(head);
}
