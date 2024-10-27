#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    // contructor
    Node(int val)
    {
        this->data = val;
        this->next = NULL;
    }
};

class Queue
{
    Node *head;
    Node *tail;
    int size;

public:
    // contructor
    Queue()
    {
        this->head = NULL;
        this->tail = NULL;
        this->size = 0;
    }

    // Enqueue
    void enqueue(int data)
    {
        Node *newNode = new Node(data);
        if (this->head == NULL)
        {
            // LL is emmpty
            this->head = this->tail = newNode;
        }
        else
        {
            this->tail->next = newNode; // pehle tail ky next main new node dal duu
            this->tail = newNode;       // phir tail ky pointer sey newnode ko point karwa du
        }
        this->size++;
    }

    void dequeue()
    {
        if (this->head == NULL)
        {
            return;
        }
        else
        {
            Node *temp = this->head;
            this->head = temp->next;
            delete temp;
        }
    }

    int getsize()
    {
        return this->size;
    }

    bool isempty()
    {
        return this->head == NULL;
    }

    int getfront()
    {
        if (this->head == NULL)
        {
            return -1;
        }

        return this->head->data;
    }

    void DisplayQueue()
    {
        Node *temp = this->head;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }
};
int main()
{
    Queue qu;
    qu.enqueue(10);
    qu.enqueue(20);
    qu.enqueue(30);
    qu.dequeue();
    qu.enqueue(40);

    qu.DisplayQueue();

    return 0;
}