#include <iostream>
using namespace std;
int main()
{
    int n, i, *ptr;
    cout << " Enter the total no of values: " << endl;
    cin >> n;

    ptr = (int *)malloc(n * sizeof(int));

    cout << " Enter the values : " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> *(ptr + i);
    }

    cout << " ENter the updated size of n: " << endl;
    cin >> n;
    cout << " Enter the updated values : " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> *(ptr + i);
    }

    int *ptr1 = (int *)realloc(ptr, n * sizeof(int));
    cout << "Previous address: " << ptr << endl;
    cout << "New address: " << ptr1 << endl;

    cout << "The values are : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << *(ptr1 + i) << endl;
    }
    free(ptr1);
    return 0;
}