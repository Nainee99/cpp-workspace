#include <iostream>
using namespace std;

void Printsum(int i, int n, int sum)
{
    if (i == n)
    {
        sum += i;
        cout << sum << endl;
        return;
    }
    sum += i;
    Printsum(i + 1, n, sum);
}
int main()
{
    Printsum(1, 5, 0);
    return 0;
}