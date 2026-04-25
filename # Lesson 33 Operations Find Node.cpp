// # Lesson 33 Operations Find Node.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>
using namespace std;

class Node
{
public:
	int value;
	Node* next;
	Node* prev;
};

// Insert a new node at the beginning of the list
void  InsertAtBigninning(Node*& head, int value)
{
	// Create a new node
	Node* NewNode = new Node();

	// Set the value 
	NewNode->value = value;

	// Update the pointers
	NewNode->next = head;


	NewNode->prev = NULL;

	// Update the previous head's prev pointer if the list is not empty
	if (head != NULL)
	{
		head->prev = NewNode;
	}

	// Update the head pointer to point to the new node
	head = NewNode;

}

// Function to find a node with a specific value in the list
Node* Find(Node* head, int value)
{

	// Traverse the list until the end is reached
	while (head != NULL)
	{
		// Check if the current node's value matches the target value
		if (head->value == value)
			// If a match is found, return a pointer to the current node
			return head;
		// Move to the next node in the list
		head = head->next;
	}
	// If the end of the list is reached without finding a match, return NULL
	return NULL;
}

// Function to print the details of a node (value, next, and prev)
void PrintNodeDetails(Node* head)
{
	// Print the previous node's value if it exists, otherwise print "NULL"
	if (head->prev != NULL)
	{
		cout << head->prev->value << "<-";
	}
	else
	{
		cout << "NULL<-";
	}


	// Print the current node's value
	cout << " <--> " << head->value << " <--> ";



	// Print the next node's value if it exists, otherwise print "NULL"
	if (head->next != NULL)
	{
		cout << head->next->value << " ";
	}
	else
	{
		cout << " NULL ";
	}
}

// Function to print the details of all nodes in the list
void PrintListDetails(Node* head)
{
	// Traverse the list and print the details of each node
	while (head != NULL)
	{

		PrintNodeDetails(head);
		cout << endl;
		// Move to the next node
		head = head->next;
	}
}

// Function to print the values of all nodes in the list
void PrintList(Node* head)
{
	// Traverse the list and print the value of each node
	while (head != NULL)
	{

		cout << head->value << " ";
		/// Move to the next node
		head = head->next;
	}
	// If the list is empty, print "NULL"
	cout << NULL;
}

int main()
{
	// Create an empty list
	Node* head = NULL;

	InsertAtBigninning(head, 10);
	InsertAtBigninning(head, 20);
	InsertAtBigninning(head, 30);

	// Print the values of the nodes in the list
	cout << "List: ";
	PrintList(head);

	// Print the details of the nodes in the list
	cout << "\nList Details: " << endl;
	PrintListDetails(head);

	// Find a node with a specific value
	cout << "\nFinding Node with value ..." << endl;
	Node* FounNode = Find(head, 20);
	if (FounNode != NULL)
	{
		cout << "\nFound Node Details: " << endl;
		PrintNodeDetails(FounNode);
		
	}
	else
	{
		cout << "\nNode was not found." << endl;
	}

}
