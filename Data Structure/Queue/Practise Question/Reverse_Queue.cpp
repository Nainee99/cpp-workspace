#include <iostream>
#include <stack>
#include <queue>
using namespace std;

queue<int> rev(queue<int> q)
{
    stack<int> S;
    // pushing elemnet from queue to stack
    while (!q.empty())
    {
        int element = q.front();
        q.pop();
        S.push(element);
    }
    // pushing elemnet from queue to stack
    while (!S.empty())
    {
        int element = S.top();
        S.pop();
        q.push(element);
    }
    return q;
}
int main()
{
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    // call the rev function
    q = rev(q);

    // print the reversed queue
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;

    return 0;
}