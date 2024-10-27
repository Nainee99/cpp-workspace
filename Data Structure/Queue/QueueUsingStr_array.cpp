#include <iostream>
using namespace std;

const int Max = 100;

class Queue
{
private:
    int front1[Max], rear1[Max];
    int front2, rear2;

public:
    Queue() : front2(-1), rear2(-1) {}

    // This function inserts an element at the end of the queue
    void enqueue(int item)
    {
        if (rear2 == Max - 1)
            cout << "Queue is Full\n";
        else
        {
            if (front2 == -1)
                front2 = 0;
            rear2++;
            front1[rear2] = item;
        }
    }

    // This function deletes an element from the front of the queue
    int dequeue()
    {
        int item;
        if (front2 == -1 || front2 > rear2)
        {
            cout << "Queue is Empty\n";
            return -1;
        }
        else
        {
            item = front1[front2];
            front2++;
            if (front2 > rear2)
            {
                front2 = rear2 = -1;
            }
            return item;
        }
    }

    // This function displays the elements of the queue
    void display()
    {
        if (front2 == -1 || front2 > rear2)
            cout << "Queue is Empty\n";
        else
        {
            for (int i = front2; i <= rear2; i++)
                cout << front1[i] << " ";
            cout << endl;
        }
    }
};

int main()
{
    Queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.display();
    cout << "Deleted Element: " << q.dequeue() << endl;
    q.display();
    return 0;
}