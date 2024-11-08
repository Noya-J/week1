#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "LinkedList.h"

using namespace std;

int main() 
{
    //Node* head = NULL;
    
    // Insert element at the beginning
    Node_add_to_top(7);
    Node_add_to_top(6);
    Node_add_to_top(5);

    std::cout << "Linked list after insertions: ";
    display();

    // Delete element from the beginning
    Node_remove_head_item();
    std::cout << "Linked list after deleting from beginning: ";
    display();

    // Delete element from the end
    Node_remove_head_item();
    std::cout << "Linked list after deleting from end: ";
    display();

    std::cout << "Linked list after deleting from end: ";
    return 0;
}