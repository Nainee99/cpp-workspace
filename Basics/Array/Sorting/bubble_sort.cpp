#include <iostream>
using namespace std;

/*
  Practice Question:
  Write a C++ program to implement Bubble Sort on an array of integers.
  The program should read 'n' integers into an array and output the sorted array.

  Explanation:
  This program uses the Bubble Sort algorithm, which repeatedly steps through the list,
  compares adjacent elements, and swaps them if they are in the wrong order.
  The process is repeated until the list is sorted. If no swaps occur during a pass,
  the algorithm terminates early as the array is already sorted.
*/

int main()
{
    int numElements;    // Variable to store the number of elements in the array
    cin >> numElements; // Input the number of elements

    int arr[numElements]; // Declare an array of size numElements
    for (int i = 0; i < numElements; i++)
    {
        cin >> arr[i]; // Input elements into the array
    }

    // Implementing Bubble Sort
    bool swapped; // Flag to check if a swap occurred
    for (int counter = 0; counter < numElements - 1; counter++)
    {
        swapped = false; // Reset swapped for each outer loop iteration

        // Inner loop to compare adjacent elements
        for (int i = 0; i < numElements - 1 - counter; i++)
        {
            // If the current element is greater than the next, swap them
            if (arr[i] > arr[i + 1])
            {
                int temp = arr[i]; // Temporary variable for swapping
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
                swapped = true; // Set flag indicating a swap occurred
            }
        }

        // If no two elements were swapped, the array is sorted
        if (!swapped)
        {
            break; // Exit early if the array is sorted
        }
    }

    // Output the sorted array
    for (int i = 0; i < numElements; i++)
    {
        cout << arr[i] << " "; // Print each element of the sorted array
    }
    cout << endl; // Newline after printing the array

    return 0; // Indicate successful program termination
}
