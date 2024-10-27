#include <iostream>
using namespace std;

/*
  Practice Question:
  Write a C++ program to count the number of peaks in an array.
  A peak is an element that is greater than its neighbors.

  Explanation:
  This program reads 'n' integers into an array and initializes the last element
  as -1 to handle the boundary condition. It then iterates through the array
  to count the number of peaks, where a peak is defined as an element that
  is greater than its neighbors.
 */

int main()
{
    int numElements; // Number of elements in the array
    cin >> numElements;

    int arr[numElements]; // Declare an array of size n

    for (int i = 0; i < numElements; i++)
    {
        cin >> arr[i]; // Input elements into the array
    }

    // Handle the case for only one element
    if (numElements == 1)
    {
        cout << "1" << endl; // If there's only one element, it is a peak
        return 0;
    }

    int peakCount = 0; // Count of peaks

    for (int i = 0; i < numElements; i++)
    {
        // Check for peaks
        if ((i == 0 && arr[i] > arr[i + 1]) ||                                            // First element is a peak
            (i == numElements - 1 && arr[i] > arr[i - 1]) ||                              // Last element is a peak
            (i > 0 && i < numElements - 1 && arr[i] > arr[i - 1] && arr[i] > arr[i + 1])) // Middle element is a peak
        {
            peakCount++; // Increment peak count
        }
    }

    cout << peakCount << endl; // Output the number of peaks
    return 0;                  // Indicate successful program termination
}
