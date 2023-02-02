// Add our class header files
#include "Stack.h"
#include <iostream>

int main()
{
    Stack a;

	// Declaring variables
    int num;
    int count = 0;
    int bin[100];

    // Grabbing input from user
    std::cout << "Please enter a decimal value: " << std::endl;
    std::cin >> num;

    // Looping the math expression while pushing data to the stack
    for (int i = 0; num > 0; i++)
    {
        bin[i] = num % 2;
        a.push(bin[i]);
        num = num / 2;
        count++;
    }

    // Test to see if the stack of binary will appear
    a.displayStack();

    // About to display binary code
    std::cout << "Binary Equivalence: " << std::endl;

    // Displaying the binary code back to the user in a standard form (not a stack)
    for (int j = count - 1; j >= 0; j--)
    {
        std::cout << bin[j];
        a.pop(); // Note: This is popping the stack results
    }

    // Just to make a new line/end the line of binary
    std::cout << std::endl;

    // Test if you can display the stack (there shouldn't be anything displayed)
    a.displayStack();
    // a.peek(); // Another way to see if the stack is officially empty

    return 0;

}