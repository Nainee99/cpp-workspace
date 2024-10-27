#include <iostream>
using namespace std;

int main()
{
    int n;    // Declare variable n to store the size of the array
    cin >> n; // Input the size of the array

    int arr[n]; // Declare an array of size n

    // Loop to read n elements into the array
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i]; // Input elements into the array
    }

    // Loop to display the elements of the array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i]; // Output each element of the array
    }

    return 0; // Indicate that the program ended successfully
}
