#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"
#include <iostream>

using namespace std;


static struct Node* head = NULL;
static struct Node* last = NULL;
static int Node_count = 0;

Node* new_node()
{
	Node* node = NULL;
	node = new Node;
	if (node != NULL)
	{
		node->data = 0;
		node->next = NULL;
		node->prev = NULL;
	}
	return node;
}

// Add the new item to the top of the list
// returns 1 if successes, 0 if failed
int Node_add_to_top(int item)
{
	Node* node = NULL;
	Node* next = NULL;

	node = new_node();
	if (node == NULL) // failed to allocate
		return 0;
	node->data = item;
	if (head == NULL) // or count==0
	{
		// first item
		head = node;
		head->next = NULL;
		head->prev = NULL;
		last = head;
	}
	else
	{
		node->next = head;
		node->prev = NULL;
		head = node;
	}
	Node_count++;
	return 1;
}

// remove the first item
// returns 1 if successes, 0 if failed
int Node_remove_head_item()
{
	if (head == NULL) // or count==0
		return 0;
	// save current head
	Node* next = head->next;
	delete head;
	head = next;
	head->prev = NULL;
	Node_count--;
	return 1;
}

// Function to print the nodes of  the linked list
void display()
{
	if (!head)
	{
		std::cout << "List is empty." << std::endl;
		return;
	}

	Node* temp = head;
	while (temp)
	{
		std::cout << temp->data << " -> ";
		temp = temp->next;
	}
	std::cout << "NULL" << std::endl;
}

