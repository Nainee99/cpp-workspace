/* Practice Question:
   Write a C++ program to implement a basic queue data structure using an array.
   The program should support the following operations:
   1. Enqueue: Add an element to the back of the queue.
   2. Dequeue: Remove an element from the front of the queue.
   3. List: Display the current elements in the queue.

   Explanation:
   The program uses a fixed-size array to store elements of the queue, with pointers
   to track the front and rear of the queue. The enqueue operation adds elements
   to the rear, while the dequeue operation removes elements from the front.
   The list function displays the current state of the queue.
*/

#include <iostream>
using namespace std;

const int MAX_SIZE = 100; // Maximum size of the queue

class MyQueue
{
private:
    int arr[MAX_SIZE]; // Array to store queue elements
    int front;         // Index of the front element
    int rear;          // Index of the rear element

public:
    MyQueue()
    {
        front = -1; // Initialize front to -1 indicating the queue is empty
        rear = -1;  // Initialize rear to -1 indicating the queue is empty
    }

    void enque(int value)
    {
        if (rear == MAX_SIZE - 1)
        {
            cout << "Queue is full. Cannot enqueue." << endl;
            return; // Return if the queue is full
        }

        if (front == -1)
        {
            front = 0; // If the queue is empty, set front to 0
        }

        rear++;            // Move rear to the next position
        arr[rear] = value; // Add the new value to the queue
    }

    void Deque()
    {
        if (front == -1)
        {
            cout << "Queue is empty. Cannot dequeue." << endl;
            return; // Return if the queue is empty
        }

        if (front == rear)
        {
            // If there's only one element in the queue, reset front and rear
            front = -1;
            rear = -1;
        }
        else
        {
            front++; // Move front to the next position
        }
    }

    void List()
    {
        if (front == -1)
        {
            cout << "Queue is empty." << endl;
            return; // Return if the queue is empty
        }

        cout << "Queue: ";
        for (int i = front; i <= rear; i++)
        {
            cout << arr[i] << " "; // Print elements from front to rear
        }
        cout << endl;
    }
};

int main()
{
    MyQueue Q1; // Create an instance of MyQueue

    Q1.enque(10); // Enqueue 10
    Q1.enque(20); // Enqueue 20
    Q1.Deque();   // Dequeue an element
    Q1.enque(11); // Enqueue 11
    Q1.enque(24); // Enqueue 24
    Q1.List();    // List current elements in the queue
    Q1.enque(33); // Enqueue 33
    Q1.Deque();   // Dequeue an element

    return 0; // Indicate successful program termination
}
