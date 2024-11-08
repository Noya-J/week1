#include "stack.h"
#include <iostream>
using namespace std;


int main() 
{
    // Creating a stack
    Stack st;

    // Push elements onto the stack
    push(&st, 4);
    push(&st, 5);
    push(&st, 6);
    push(&st, 7);

    display();

    pop(&st);

    display();

    pop(&st);

    display();

    return 0;
}