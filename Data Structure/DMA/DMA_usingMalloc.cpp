#include <iostream>
using namespace std;
int main()
{
    int n, i;
    float *ptr;
    cout << " Enter the total no of values: " << endl;
    cin >> n;

    ptr = (float *)malloc(n * sizeof(float));

    cout << " Enter the values : " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> *(ptr + i);
    }
    cout << "The values are : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << *(ptr + i) << endl;
    }
    free(ptr);
    return 0;
}