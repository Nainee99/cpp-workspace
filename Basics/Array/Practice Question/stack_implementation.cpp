#include <iostream>

const int MAX_SIZE = 100; // Maximum size of the stack

/*
 * Practice Question:
 * Implement a stack data structure using an array in C++.
 * Include operations for pushing an element, popping an element,
 * displaying the stack, and retrieving the top element.
 *
 * Explanation:
 * This program defines a stack class that allows the user to push
 * and pop integers, list the current stack contents, and get the
 * top element without removing it. The stack uses an array to store
 * its elements, and the maximum size is defined as a constant.
 */

class MyStack
{
private:
    int elements[MAX_SIZE]; // Array to store stack elements
    int topIndex;           // Index of the top element

public:
    MyStack()
    {
        topIndex = -1; // Initialize the top index to -1 to indicate an empty stack
    }

    void push(int value)
    {
        if (topIndex == MAX_SIZE - 1)
        {
            std::cout << "Stack is full. Cannot push." << std::endl; // Error message if the stack is full
            return;
        }

        topIndex++;                 // Increment the top index
        elements[topIndex] = value; // Add the new value to the stack
    }

    void pop()
    {
        if (topIndex == -1)
        {
            std::cout << "Stack is empty. Cannot pop." << std::endl; // Error message if the stack is empty
            return;
        }

        topIndex--; // Decrement the top index to remove the top element
    }

    void List()
    {
        if (topIndex == -1)
        {
            std::cout << "Stack is empty." << std::endl; // Indicate that the stack is empty
            return;
        }

        std::cout << "Stack: ";
        for (int i = 0; i <= topIndex; i++)
        {
            std::cout << elements[i] << " "; // Print each element in the stack
        }
        std::cout << std::endl;
    }

    int getTop()
    {
        if (topIndex == -1)
        {
            std::cout << "Stack is empty. No top element." << std::endl; // Error message if the stack is empty
            return -1;                                                   // Return a sentinel value
        }
        return elements[topIndex]; // Return the top element
    }
};

int main()
{
    MyStack stackInstance; // Create an instance of MyStack

    stackInstance.push(12); // Push elements onto the stack
    stackInstance.push(-5);
    stackInstance.pop(); // Pop the top element
    stackInstance.push(-8);
    stackInstance.push(20);
    stackInstance.pop();
    stackInstance.push(4);

    // Printing the values of the stack
    stackInstance.List(); // Display the stack contents

    // Getting the value of "top"
    int topValue = stackInstance.getTop(); // Retrieve the top value
    if (topValue != -1)
    {
        std::cout << "Value of 'top': " << topValue << std::endl; // Print the top value if it exists
    }

    return 0; // Indicate successful program termination
}
