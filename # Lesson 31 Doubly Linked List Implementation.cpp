#include <iostream>
using namespace std;

class Node
{
public:
    int value;
    Node* Next;
	Node* Prev;
};
int main()
{
	// Create a doubly linked list with three nodes and print their values
    Node* head;
    Node* node1 = NULL;
    Node* node2 = NULL;
    Node* node3 = NULL;

	// Allocate memory for the nodes
	node1 = new Node();
    node2 = new Node();
    node3 = new Node();

	// Assign values to the nodes
	node1->value = 10;
    node2->value = 20;
    node3->value = 30;

	// Link the nodes together
    node1->Next = node2;
    node1->Prev = NULL;

	// Link node2 to node1 and node3
    node2->Next = node3;
    node2->Prev = node1;

	// Link node3 to node2 and set its Next to NULL
    node3->Next = NULL;
	node3->Prev = node2;

	// Set head to the first node
    head = node1;

	// Traverse the list and print the values of each node
	while (head != NULL)
	{
		cout << head->value << std::endl;
		head = head->Next;
	}

	
	system("pause");
	return 0;

    
}

