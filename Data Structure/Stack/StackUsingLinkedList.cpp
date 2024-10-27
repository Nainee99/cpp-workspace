#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
};

class LinkedListStack
{
private:
    Node *top;
    int size;

public:
    LinkedListStack()
    {
        top = nullptr;
        size = 0; // Initialize the size of the stack
    }

    void push(int data)
    {
        Node *newNode = new Node;
        newNode->data = data;
        newNode->next = top;
        top = newNode;
        size++; // Increment the size
    }

    int pop()
    {
        if (isEmpty())
        {
            cout << "Stack is empty. Cannot pop." << endl;
            return -1;
        }
        int data = top->data;
        Node *temp = top;
        top = top->next;
        delete temp;
        size--; // Decrement the size
        return data;
    }

    bool isEmpty()
    {
        return top == nullptr;
    }

    int peek()
    {
        if (isEmpty())
        {
            cout << "Stack is empty." << endl;
            return -1;
        }
        return top->data;
    }

    void print()
    {
        if (isEmpty())
        {
            cout << "Stack is empty." << endl;
            return;
        }
        Node *current = top;
        while (current != nullptr)
        {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }

    int getSize()
    {
        return size; // Return the size of the stack
    }

    void clear()
    {
        while (!isEmpty())
        {
            pop(); // Pop all elements to clear the stack
        }
    }
};

int main()
{
    LinkedListStack stack;
    int choice, data;

    while (true)
    {
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Peek" << endl;
        cout << "4. Print Stack" << endl;
        cout << "5. Get Size" << endl;
        cout << "6. Clear Stack" << endl;
        cout << "7. Quit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter the element to push: ";
            cin >> data;
            stack.push(data);
            break;

        case 2:
            data = stack.pop();
            if (data != -1)
            {
                cout << "Popped element: " << data << endl;
            }
            break;

        case 3:
            data = stack.peek();
            if (data != -1)
            {
                cout << "Top element: " << data << endl;
            }
            break;

        case 4:
            cout << "Stack elements: ";
            stack.print();
            break;

        case 5:
            cout << "Stack size: " << stack.getSize() << endl;
            break;

        case 6:
            stack.clear();
            cout << "Stack cleared." << endl;
            break;

        case 7:
            return 0;

        default:
            cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}
