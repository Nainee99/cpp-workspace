#include <iostream>
#include <vector>
using namespace std;

void merge(int arr[], int l, int mid, int r)
{
    int an = mid - l + 1;
    int bn = r - mid;
    // crete two temp arrays

    int a[an];
    int b[bn];

    for (int i = 0; i < an; i++)
    {
        a[i] = arr[l + i];
    }
    for (int j = 0; j < bn; j++)
    {
        b[j] = arr[mid + 1 + j];
    }

    int i = 0; // intial index of first subarray , a
    int j = 0; // intial index of second subarray , b
    int k = l; // intial index of merged subarray

    while (i < an && j < bn)
    {
        if (a[i] < b[j])
        {
            arr[k++] = a[i++];
        }
        else
        {
            arr[k++] = b[j++];
        }
    }

    while (i < an)
    {
        arr[k++] = a[i++];
    }
    while (j < bn)
    {
        arr[k++] = b[j++];
    }
}

void mergeSort(int arr[], int l, int r)
{
    // base case
    if (l >= r)
    {
        return;
    }
    int mid = (l + r) / 2;
    // recursive function
    mergeSort(arr, mid, l);
    mergeSort(arr, mid + 1, r);
    merge(arr, l, mid, r);
}

int main()
{
    int arr[] = {10, 28, 24, 6, 34, 18, 44};
    int n = sizeof(arr) / sizeof(arr[0]);

    mergeSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}