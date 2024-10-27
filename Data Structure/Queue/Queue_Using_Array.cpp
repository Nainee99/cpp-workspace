#include <iostream>
using namespace std;

const int MAX = 10;
class Queue
{
private:
  int a[MAX];
  int front, rear;

public:
  // contructor
  Queue()
  {
    front = rear = -1;
  }

  // Enqueue Function
  void Enqueue(int x)
  {
    if (rear == MAX - 1)
    {
      cout << " Queue is full " << endl;
      return;
    }
    rear++;
    a[rear] = x;
    if (front == -1)
    {
      front = 0;
    }
  }

  // Dequeue Function
  int Dequeue()
  {
    if (front == -1)
    {
      cout << " Queue is Empty " << endl;
      return NULL;
    }
    int x = a[front];
    if (front == rear) // if front and rear are pointing to same node then after dequeuing the queue will be empty that's why i wrote the condition front=rear=-1
    {
      front = rear = -1;
    }
    else
    {
      front++;
      return x;
    }
  }
  // Display Function
  void displayQueue()
  {
    if (front == -1)
    {
      return;
    }
    for (int i = front; i <= rear; i++)
    {
      cout << a[i] << "    " << endl;
    }
  }
  // Peek Function
  void Peek()
  {
    cout << "The front number is : " << a[front] << endl;
  }
};
// Driver code
int main()
{
  Queue q;
  q.Enqueue(5);
  q.Enqueue(6);
  q.Enqueue(7);
  q.displayQueue();

  int i = q.Dequeue();
  cout << endl;
  cout << "The dequeued element is : " << i << endl;
  q.displayQueue();
  q.Peek();
  return 0;
}