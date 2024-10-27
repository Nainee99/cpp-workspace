#include <iostream>
using namespace std;

const int Max = 5;
class deque
{
    int F;
    int R;
    int dq[Max];

public:
    deque()
    {
        F = R = -1;
    }

    // Enqueue at the front function
    void Insert_Front(int x)
    {
        // overflow condition
        if (F == 0 && R == Max - 1)
        {
            cout << "Queue is full" << endl;
            return;
        }
        // condition if the deque is empty
        else if (F == -1 && R == -1)
        {
            F = R = 0;
            dq[F] = x;
        }
        else if (F > 0)
        {
            F--;
            dq[F] = x;
        }
        else
        {
            cout << "No space from Front side " << endl;
        }
    }

    // Enqueue at the Rear function
    void Insert_Rear(int x)
    {
        // overflow condition
        if (F == 0 && R == Max - 1)
        {
            cout << "Queue is full" << endl;
        }
        // condition if the deque is empty
        else if (F == -1 && R == -1)
        {
            F = R = 0;
            dq[R] = x;
        }
        else if (R < Max - 1)
        {
            R++;
            dq[R] = x;
        }
        else
        {
            cout << "No space from Rear side " << endl;
        }
    }

    // dequeue at the front function
    int Del_front()
    {
        // Underflow condition
        if (F == -1 && R == -1)
        {
            cout << "Queue is empty" << endl;
            return -1;
        }
        int removedItem = dq[F];
        if (F == R)
        {
            F = R = -1;
        }
        else if (F == 0)
        {
            F = Max - 1;
        }
        else
            F--;
        return removedItem;
    }

    // dequeue at the Rear function
    int Del_End()
    {
        // Underflow condition
        if (F == -1 && R == -1)
        {
            cout << "Queue is empty" << endl;
            return -1;
        }
        int removedItem = dq[R];
        if (R == F)
        {
            R = F = -1;
        }
        else
            R--;
        return removedItem;
    }

    // Display Function
    void DisplayDeque()
    {
        // Underflow condition
        if (F == -1 && R == -1)
        {
            cout << "Queue is empty" << endl;
            return;
        }
        for (int i = F; i <= R; i++)
        {
            cout << dq[i] << "\t";
        }
        cout << endl;
    }
};
int main()
{
    deque dq;
    dq.Insert_Front(1);
    dq.Insert_Front(2);
    dq.Insert_Rear(3);
    dq.Insert_Rear(4);
    dq.Insert_Front(5);
    dq.Insert_Front(6);

    dq.DisplayDeque();

    return 0;
}