/*
 * Practice Question:
 * Write a C++ program to find the first repeating element in an array
 * and return its index. If there is no repeating element, return -1.
 *
 * Explanation:
 * This program reads 'n' integers into an array and uses an index array
 * to track the first occurrence of each element. It then iterates through
 * the input array to find the index of the first repeating element.
 */

#include "bits/stdc++.h"
using namespace std;

int main()
{
  int numElements; // Number of elements in the array
  cin >> numElements;

  int inputArray[numElements]; // Declare an array of size n

  for (int i = 0; i < numElements; i++)
  {
    cin >> inputArray[i]; // Input elements into the array
  }

  const int MAX_SIZE = 1e6 + 2; // Maximum size for the index array
  int firstIndex[MAX_SIZE];     // Array to store the first index of each element

  for (int i = 0; i < MAX_SIZE; i++)
  {
    firstIndex[i] = -1; // Initialize all entries to -1
  }

  int minIndex = INT_MAX; // Variable to store the minimum index of repeating elements

  for (int i = 0; i < numElements; i++)
  {
    if (firstIndex[inputArray[i]] != -1)
    {
      minIndex = min(minIndex, firstIndex[inputArray[i]]); // Update minIndex if a repeat is found
    }
    else
    {
      firstIndex[inputArray[i]] = i; // Store the first index of the element
    }
  }

  if (minIndex == INT_MAX)
  {
    cout << "-1" << endl; // No repeating element found
  }
  else
  {
    cout << minIndex + 1 << endl; // Output the 1-based index of the first repeating element
  }

  return 0; // Indicate successful program termination
}
