#include <iostream>
using namespace std;


class Node
{
public:
	int data;
	Node* next;
	Node* prev;

};

// Insert at the beginning of Singly Linked List
void InseertAtBiginingSingly(Node*& head, int value)
{
	// Create a new node
	Node* newNode = new Node();

	// Assign the value to the new node
	newNode->data = value;
	// Make the next of the new node point to the current head
	newNode->next = head;

	// Update the head to point to the new node
	head = newNode;
}


// Insert at the beginning of Doubly Linked List
void InsertAtBiginingDoubly(Node*& head, int value)
{
	// Create a new node
	Node* newNode = new Node();

	// Assign the value to the new node
	newNode->data = value;

	// Make the next of the new node point to the current head
	newNode->next = head;

	// Since this is a doubly linked list, we also need to set the previous pointer of the new node to NULL
	newNode->prev = NULL;

	// If the linked list is not empty, we need to update the previous pointer of the current head to point to the new node
	if (head != NULL)
	{
		// Update the previous pointer of the current head to point to the new node
		head->prev = newNode;
	}

	// Update the head to point to the new node
	head = newNode;
}


// Insert after a given node in Singly Linked List
void InsertAfterSingly(Node*& head, int value)
{
	if (head == NULL)
	{
		cout << "The linked list is empty. Cannot insert after a non-existent node." << endl;
		return;
	}
	// Create a new node
	Node* newNode = new Node();
	// Assign the value to the new node
	newNode->data = value;
	// Make the next of the new node point to the next of the head
	newNode->next = head->next;

	// Update the next of the head to point to the new node
	head->next = newNode;

	// Update the head to point to the new node
	head = newNode;


}

void InserAfterDoubly(Node*& head, int value)
{
	if (head == NULL)
	{
		cout << "The linked list is empty. Cannot insert after a non-existent node." << endl;
		return;
	}
	// Create a new node
	Node* newNode = new Node();
	// Assign the value to the new node
	newNode->data = value;
	// Make the next of the new node point to the next of the head
	newNode->next = head->next;
	// Make the previous of the new node point to the head
	newNode->prev = head;

	// If the next of the head is not NULL, we need to update the previous pointer of the next node to point to the new node
	if (head->next != NULL)
	{
		// Update the previous pointer of the next node to point to the new node
		head->next->prev = newNode;
	}
	// Update the next of the head to point to the new node

	head->next = newNode;
	head = newNode;
}

void InsertAtEndSingly(Node*& head, int value)
{
	Node* newNode = new Node();
	newNode->data = value;
	newNode->next = NULL;

	if (head == NULL)
	{
		head = newNode;
		return;
	}

	Node* LastNode = head;
	while (LastNode->next != NULL)
	{
		LastNode = LastNode->next;
	}
	LastNode->next = newNode;
	return;
}



void InsertAtEndDoublly(Node*& head, int value)
{
	Node* newNode = new Node();
	newNode->data = value;
	newNode->next = NULL;

	if (head == NULL)
	{
		head = newNode;
		return;
	}

	Node* LastNode = head;
	while (LastNode->next != NULL)
	{
		LastNode = LastNode->next;
	}
	LastNode->next = newNode;
	newNode->prev = LastNode;
	return;
}










//Print the linked list
void printList(Node* head)
{
	// Traverse the linked list and print each node's data
	while (head != NULL)
	{
		// Print the data of the current node
		cout << head->data << " ";
		// Move to the next node
		head = head->next;
	}
	cout << endl;
}


// Find a node with a specific value in the linked list
Node* Find(Node* head, int value)
{
	// Traverse the linked list to find the node with the specified value
	while (head != NULL)
	{
		// Check if the current node's data matches the value we are looking for
		if (head->data == value)
		{
			return head; // Return the node if the value is found
		}
		head = head->next; // Move to the next node
	}
	return NULL; // Return NULL if the value is not found in the linked list
}

int main()
{
	Node* head = NULL; // Initialize the head of the linked list to NULL
	InseertAtBiginingSingly(head, 10); // Insert 10 at the beginning of the linked list
	InseertAtBiginingSingly(head, 20); // Insert 20 at the beginning of the linked list
	InseertAtBiginingSingly(head, 30); // Insert 30 at the beginning of the linked list
	InsertAtBiginingDoubly(head, 40); // Insert 40 at the beginning of the linked list
	InsertAtBiginingDoubly(head, 50); // Insert 50 at the beginning of the linked list
	printList(head); // Print the linked list

	InsertAtEndSingly(head, 60); // Insert 60 at the end of the linked list
	printList(head); // Print the linked list



	InsertAtEndDoublly(head, 70); // Insert 70 at the end of the linked list
	printList(head); // Print the linked list



	Node* foundNode1 = Find(head, 30); // Find the node with value 20 in the linked list

	InsertAfterSingly(foundNode1, 25); // Insert 60 after the head of the linked list
	printList(head); // Print the linked list


	Node* foundNode2 = Find(head, 40); // Find the node with value 20 in the linked list
	InserAfterDoubly(foundNode2, 35); // Insert 70 after the head of the linked list
	printList(head); // Print the linked list
}