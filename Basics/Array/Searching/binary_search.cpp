#include <iostream>
using namespace std;

/*
  Practice Question:
  Write a C++ program to implement Binary Search on a sorted array of integers.
  The program should read 'n' integers into an array and a 'key' to search for in the array.

  Explanation:
  This program performs a Binary Search, which is an efficient algorithm for finding a target value
  within a sorted array. It repeatedly divides the search interval in half, comparing the target
  value to the middle element of the array. If the target value is equal to the middle element,
  the search is complete. If the target value is less than the middle element, the search continues
  in the lower half of the array. Otherwise, it continues in the upper half.
*/

// Function to perform Binary Search
int BinarySearch(int arr[], int n, int key)
{
    int start = 0;   // Starting index of the array
    int end = n - 1; // Ending index of the array

    while (start <= end) // Continue until the search space is valid
    {
        int mid = (start + end) / 2; // Calculate the middle index

        if (arr[mid] == key) // Check if the middle element is the key
        {
            return mid; // Return the index if found
        }
        else if (arr[mid] > key) // If the key is less than the middle element
        {
            end = mid - 1; // Narrow the search to the left half
        }
        else // If the key is greater than the middle element
        {
            start = mid + 1; // Narrow the search to the right half
        }
    }
    return -1; // Return -1 if the key is not found
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

    // Perform Binary Search and output the result
    int result = BinarySearch(arr, numElements, key);
    cout << result << endl; // Print the index of the found key or -1 if not found

    return 0; // Indicate successful program termination
}
