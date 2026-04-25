#include <iostream>
using namespace std;
class Node
{
public:
    int value;
	Node* next;
};

void InsertAtBiginning(Node* &head, int value)
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
int main()
{

	Node* head = NULL;	
	InsertAtBiginning(head, 10);
	InsertAtBiginning(head, 20);
	InsertAtBiginning(head, 30);

	PrintList(head);


	Node* FoundNode = Find(head, 10);
	if (FoundNode != NULL)
	{
		cout << "Value found: " << FoundNode->value << endl;
	}
	else
	{
		cout << "Value not found in the list." << endl;
	}



}

