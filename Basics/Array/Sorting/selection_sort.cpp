#include <iostream>
using namespace std;

/*
  Practice Question:
  Write a C++ program to implement Selection Sort on an array of integers.
  The program should read 'n' integers into an array and output the sorted array.

  Explanation:
  This program uses the Selection Sort algorithm, which divides the input array into two parts:
  a sorted part and an unsorted part. It repeatedly selects the smallest (or largest) element
  from the unsorted part and moves it to the end of the sorted part.
*/

int main()
{
    int numElements;    // Variable to store the number of elements in the array
    cin >> numElements; // Input the number of elements

    int arr[numElements]; // Declare an array of size numElements

    // Input elements into the array
    for (int i = 0; i < numElements; i++)
    {
        cin >> arr[i]; // Read each element
    }

    // Implementing Selection Sort
    for (int i = 0; i < numElements - 1; i++)
    {
        // Find the minimum element in the unsorted portion of the array
        int minIndex = i; // Assume the current index is the minimum
        for (int j = i + 1; j < numElements; j++)
        {
            if (arr[j] < arr[minIndex]) // Update minIndex if a smaller element is found
            {
                minIndex = j; // Update minIndex to the new minimum
            }
        }
        // Swap the found minimum element with the first element of the unsorted portion
        if (minIndex != i) // Only swap if a new minimum was found
        {
            int temp = arr[minIndex]; // Temporary variable for swapping
            arr[minIndex] = arr[i];   // Swap the elements
            arr[i] = temp;            // Complete the swap
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
