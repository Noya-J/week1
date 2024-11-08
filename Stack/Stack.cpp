#include <iostream>
#include "Stack.h"
#include "LinkedList.h"

using namespace std;


void initStack(Stack* s)
{
    s->_count = 0;
    s->_elements = new Node;
    //initList(s->_elements);
}


void cleanStack(Stack* s)
{
    delete s->_elements;
}


int pop(Stack* s)
{
	if (!isEmpty(s))
	{
		s->_count--;
		return Node_remove_head_item();
	}
	else
	{
		return -1;
	}
}


void push(Stack* s, unsigned int element)
{
    Node_add_to_top(element);
    s->_count++;
}


bool isEmpty(Stack* s)
{
	return s->_count == 0;
}


bool isFull(Stack* s)
{
    return false;
}
