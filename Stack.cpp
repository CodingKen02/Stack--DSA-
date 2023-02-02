#include "Stack.h"
#include <iostream>

//###########################################################################//

//--Stack Deconstructor--//
Stack::~Stack()
{
	// Initialize a node set to the top
	Node *current = top;

	// Loop through stack until your current node is a nullpt
	while (current != nullptr)
	{
		// Set top to the next node
		top = top->next;
		// Delete current node
		delete current;
		// Set current node to new top
		current = top;
	}
}

//###########################################################################//

void Stack::push(int data)
{
	// Create a new Node in memory that contains
    // our data attribute
	Node *current = new Node(data);

    // Increase the size of our stack accordingly
	length++;

	// Point our current Node to the top
	current->next = top;

	// Set our top to the new Node
	top = current;
}

//###########################################################################//

void Stack::pop()
{
    // If stack is empty, return
    if (top == nullptr)
    {
        std::cout << "No data to delete" << std::endl;
		return;
    }

    // Adjust length accordingly
    length--;

    // Initialize node set to top
    Node *node = top;

    // Adjust our top to what it points to
    top = top->next;

    // Delete original top
    delete node;
}

//###########################################################################//

void Stack::peek()
{
    // If stack is empty, return
    if (top == nullptr)
    {
        std::cout << "The Stack is empty" << std::endl;
        return;
    }	

	// Simply prints the top value of the stack
	std::cout << top->data << std::endl;
}

//###########################################################################//

void Stack::displayStack()
{
	// Initialize node set to top to keep track of location
	Node *current = top;

	// Loop through stack
	while (current != nullptr)
	{
		// Print current node's data and move to the next node
		std::cout << "[ " << current->data << " ]" << std::endl;
		current = current->next;
	}
}