#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"
#include <iostream>

using namespace std;

int main() 
{
    
    // Insert element at the beginning
    Node_add_to_top(5);
    Node_add_to_top(6);
    Node_add_to_top(7);

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