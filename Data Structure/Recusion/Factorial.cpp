#include <iostream>
using namespace std;

int factorial(int n)
{
    if (n == 1)
    {
        return 1;
    }

    int fact_nm1 = factorial(n - 1); // factorial of n minus 1 recursive call
    int fact_n = n * fact_nm1;
    return fact_n;
}

int main()
{
    int n = 5;
    int ans = factorial(n);
    cout << " the factorial is : " << ans << endl;
    return 0;
}