#include <iostream>
using namespace std;

/*
  Practice Question:
  Write a C++ program to implement Linear Search on an array of integers.
  The program should read 'n' integers into an array and a 'key' to search for in the array.

  Explanation:
  This program performs a Linear Search, which is a straightforward method to find a target
  value within an array. It sequentially checks each element of the array until it finds
  the target value or reaches the end of the array. The time complexity of this algorithm
  is O(n), where n is the number of elements in the array.
*/

// Function to perform Linear Search
int linearSearch(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++) // Iterate through each element of the array
    {
        if (arr[i] == key) // Check if the current element is the key
        {
            return i; // Return the index if the key is found
        }
    }
    return -1; // Return -1 if the key is not found in the array
}

int main()
{
    int numElements;    // Variable to store the number of elements in the array
    cin >> numElements; // Input the number of elements

    int arr[numElements]; // Declare an array of size numElements
    for (int i = 0; i < numElements; i++)
    {
        cin >> arr[i]; // Input elements into the array
    }

    int key;    // Variable to store the key to be searched
    cin >> key; // Input the key

    // Perform Linear Search and output the result
    cout << linearSearch(arr, numElements, key) << endl; // Print the index of the found key or -1 if not found

    return 0; // Indicate successful program termination
}
