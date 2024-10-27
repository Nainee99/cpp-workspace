#include <iostream>
using namespace std;

const int MAX = 5;
class CircularQueue
{
    int arr[MAX];
    int front; // index of the front element
    int rear;  // index of the rear element
public:
    // constructor to initialize the queue
    CircularQueue()
    {
        front = rear = -1; // initially empty
    }

    // function to check if the queue is empty
    bool isEmpty()
    {
        return (front == -1);
    }

    // function to check if the queue is full
    bool isFull()
    {
        return ((rear + 1) % MAX == front);
    }

    // function to insert an element at the rear of the queue
    void enqueue(int x)
    {
        if (isFull())
        {
            cout << "Queue is full\n";
            return;
        }
        if (isEmpty())
        {
            front = rear = 0; // first element
        }
        else
        {
            rear = (rear + 1) % MAX; // circular increment
        }
        arr[rear] = x; // store the element
    }

    // function to remove and return an element from the front of the queue
    int dequeue()
    {
        if (isEmpty())
        {
            cout << "Queue is empty\n";
            return -1;
        }
        int x = arr[front]; // get the element
        if (front == rear)
        {
            front = rear = -1; // last element
        }
        else
        {
            front = (front + 1) % MAX; // circular increment
        }
        return x; // return the element
    }

    // function to display the queue elements
    void display()
    {
        if (isEmpty())
        {
            cout << "Queue is empty\n";
            return;
        }
        cout << "Queue elements are:\n";
        int i = front;
        while (i != rear)
        {
            cout << arr[i] << " ";
            i = (i + 1) % MAX; // circular increment
        }
        cout << arr[i] << "\n"; // print the rear element
    }
};

// main function to test the code
int main()
{
    CircularQueue cq;
    cq.enqueue(10);
    cq.enqueue(20);
    cq.enqueue(30);
    cq.enqueue(40);
    cq.enqueue(50);

    cq.display();
    cout << endl;

    cq.dequeue();
    cq.enqueue(90);
    cq.isFull();
    cq.enqueue(80);
    cq.display();
    cout << endl;

    return 0;
}