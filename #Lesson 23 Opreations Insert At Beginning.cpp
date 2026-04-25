#include <iostream>
using namespace std;

class Node
{
public:
	int value;
	Node* next;
};
void InsertAtBeginning(Node*& head, int value)
{
	Node* New_node = new Node();
	New_node->value = value;
	New_node->next = head;
	head = New_node;
}
void PrintList(Node* head)
{

	while (head != NULL)
	{
		cout << head->value << " ";
		head = head->next;
	}
}
int main()
{
	Node* head = NULL;
	InsertAtBeginning(head, 10);
	InsertAtBeginning(head, 20);
	InsertAtBeginning(head, 30);
	PrintList(head);
	return 0;

}

