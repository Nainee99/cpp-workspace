// printing number in reverse order
#include <iostream>
using namespace std;

void PrintNumber(int n)
{
    // base acse
    if (n == 0)
    {
        return;
    }
    // print
    cout << n << endl;
    // Recursion
    PrintNumber(n - 1);
}
int main()
{

    PrintNumber(5);
    return 0;
}