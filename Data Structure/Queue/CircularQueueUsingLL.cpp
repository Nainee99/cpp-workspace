#include <iostream>
using namespace std;

// Node class to represent a node in the queue
class Node
{
public:
    int data;   // data field
    Node *next; // pointer to the next node
    // constructor
    Node(int data)
    {
        this->data = data;
        this->next = nullptr;
    }
};

// CircularQueue class to represent a circular queue
class CircularQueue
{
private:
    Node *front; // pointer to the front node
    Node *rear;  // pointer to the rear node
public:
    // constructor
    CircularQueue()
    {
        front = rear = nullptr;
    }

    // function to check if the queue is empty
    bool isEmpty()
    {
        return front == nullptr;
    }
    // function to enqueue an element
    void enqueue(int data)
    {
        // create a new node with the given data
        Node *newNode = new Node(data);
        // if the queue is empty, set both front and rear to the new node
        if (isEmpty())
        {
            front = rear = newNode;
        }
        else
        {
            // otherwise, insert the new node after the rear node
            rear->next = newNode;
            // update the rear pointer
            rear = newNode;
        }
        // link the rear node to the front node
        rear->next = front;
        // print a message
        cout << data << " has been enqueued." << endl;
    }
    // function to dequeue an element
    int dequeue()
    {
        // if the queue is empty, return -1
        if (isEmpty())
        {
            cout << "Queue is empty." << endl;
            return -1;
        }
        // get the data of the front node
        int data = front->data;
        // if the queue has only one node, set both front and rear to nullptr
        if (front == rear)
        {
            delete front;
            front = rear = nullptr;
        }
        else
        {
            // otherwise, remove the front node and update the front pointer
            Node *temp = front;
            front = front->next;
            delete temp;
            // link the rear node to the front node
            rear->next = front;
        }
        // return the data
        return data;
    }
    // function to display the queue
    void display()
    {
        // if the queue is empty, print a message
        if (isEmpty())
        {
            cout << "Queue is empty." << endl;
        }
        else
        {
            // otherwise, print the queue from front to rear
            cout << "Queue: ";
            Node *temp = front;
            do
            {
                cout << temp->data << " ";
                temp = temp->next;
            } while (temp != front);
            cout << endl;
        }
    }
};

// main function to test the queue
int main()
{
    // create a circular queue object
    CircularQueue queue;
    // enqueue some elements
    queue.enqueue(10);
    queue.enqueue(20);
    queue.enqueue(30);
    // display the queue
    queue.display();
    // dequeue some elements
    cout << queue.dequeue() << " has been dequeued." << endl;
    cout << queue.dequeue() << " has been dequeued." << endl;
    // display the queue
    queue.display();
    // enqueue some more elements
    queue.enqueue(40);
    queue.enqueue(50);
    // display the queue
    queue.display();
    // return 0
    return 0;
}
