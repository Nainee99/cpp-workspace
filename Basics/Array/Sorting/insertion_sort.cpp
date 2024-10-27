#include <iostream>
using namespace std;

/*
  Practice Question:
  Write a C++ program to implement Insertion Sort on an array of integers.
  The program should read 'n' integers into an array and output the sorted array.

  Explanation:
  This program uses the Insertion Sort algorithm, which builds a sorted array one element at a time.
  It takes each element from the input array and places it at the correct position in the sorted part
  of the array by comparing it with elements in the sorted section, moving larger elements one position up
  to make space for the new element.
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

    // Implementing Insertion Sort
    for (int i = 1; i < numElements; i++)
    {
        int currentElement = arr[i]; // Store the current element to be inserted
        int j = i - 1;               // Initialize j to the index before the current element

        // Move elements of arr[0..i-1], that are greater than currentElement,
        // to one position ahead of their current position
        while (j >= 0 && arr[j] > currentElement)
        {
            arr[j + 1] = arr[j]; // Shift the larger element to the right
            j--;                 // Move to the previous element
        }
        arr[j + 1] = currentElement; // Insert the current element in its correct position
    }

    // Output the sorted array
    for (int i = 0; i < numElements; i++)
    {
        cout << arr[i] << " "; // Print each element of the sorted array
    }
    cout << endl; // Newline after printing the array

    return 0; // Indicate successful program termination
}
