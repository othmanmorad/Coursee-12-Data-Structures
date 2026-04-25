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

int main()
{

	Node* head = NULL;
	InsertAtBiginning(head, 10);
	InsertAtBiginning(head, 20);
	InsertAtBiginning(head, 30);
//	InsertAfter(Find(head, 20), 25);
	//InsertAfter(head, 25);	

	Node* N1 = Find(head, 30);
	InsertAfter(N1, 25);
	PrintList(head);
}
