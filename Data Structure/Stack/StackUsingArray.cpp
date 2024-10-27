#include <iostream>
using namespace std;

#define MAX 4

int stack_arr[MAX];
int top = -1;

// Isfull function
int Isfull()
{
    if (top == MAX - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

 // IsEmpty function
int IsEmpty()
{
    if (top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

// push function
void Push(int data)
{
    if (Isfull())
    {
        cout << "Error : Stack Overflow!!! " << endl;
        return;
    }

    top = top + 1;
    stack_arr[top] = data;
}

// pop function
int Pop()
{
    int value;
    if (IsEmpty())
    {
        cout << "Error  : Stack underflow!!! " << endl;
        exit(1);
    }
    value = stack_arr[top];
    top = top - 1;
    return value;
}

// peek function
int peek()
{
    if (IsEmpty())
    {
        cout << "Error  : Stack underflow!!! " << endl;
        exit(1);
    }
    return stack_arr[top];
}

// print function
void print()
{
    int i;
    if (top == -1)
    {
        cout << "Stack is empty" << endl; 
        return;
    }
    for (i = top; i >= 0; i--)
    {
        cout << stack_arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int choice, data;
    while (1)
    {
        cout << endl;
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Print the top element\n";
        cout << "4. Print all the elements of the stack\n";
        cout << "5. Quit\n";

        cout << "Please Enter Your Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter the element to be pushed: ";
            cin >> data;
            Push(data);
            break;
        case 2:
            data = Pop();
            cout << "Deleted element is " << data << endl;
            break;
        case 3:
            if (!IsEmpty())
            {
                cout << "The topmost element of the stack is " << peek() << endl;
            }
            break;
        case 4:
            print();
            break;
        case 5:
            exit(0); // Use 0 to exit successfully
        default:
            cout << "Wrong choice" << endl;
            break;
        }
    }

    return 0;
}
