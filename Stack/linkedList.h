
#ifndef LINKLIST_H
#define LINKLIST_H

#include <stdio.h>
#include <stdlib.h>


// A Linked List Node
typedef struct Node
{
    int data;	// integer data
    struct Node* next;	// pointer to the next node
    struct Node* prev;	// previous node 
} Node;

// Add the new item to the top of the list
// returns 1 if successes, 0 if failed
int Node_add_to_top(int item);


// remove the first item
// returns 1 if successes, 0 if failed
int Node_remove_head_item();

// display the LinkedList
void display();

#endif /* LINKLIST.H */

