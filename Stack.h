#pragma once
#include "Node.h"

class Stack
{   
    // Private variables only accessible from the class
    private:
        Node *top;
        int length;

    // Public methods accessible from anywhere
    public:

        // Constructor (this is a blank slate Stack)
        Stack():
            top(nullptr) {}
        
        // Deconstructor
        ~Stack();

        // Inserting and Removing Node Methods
        void push(int data);
        void pop();

        // Interface Methods (display, search, etc.)
        void peek();
        void displayStack();
};


