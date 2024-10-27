#include "bits/stdc++.h"
using namespace std;

/*
 * Practice Question:
 * Write a C++ program to find the maximum sum of a circular subarray using
 * Kadane's algorithm. The program should first read 'n' integers into an array
 * and then calculate the maximum sum of both non-wrapped and wrapped subarrays.
 *
 * Explanation:
 * This program uses Kadane's algorithm to find the maximum sum of a subarray.
 * It calculates both the non-wrapped maximum subarray sum and the wrapped maximum
 * subarray sum by inverting the array elements and applying Kadane's algorithm again.
 */

// Function to implement Kadane's algorithm to find the maximum subarray sum
int kadane(int array[], int size)
{
  int currentSubarraySum = 0;       // Variable to track the current subarray sum
  int maximumSubarraySum = INT_MIN; // Initialize maximumSubarraySum to the smallest possible integer

  // Loop through the array to calculate the maximum subarray sum
  for (int i = 0; i < size; i++)
  {
    currentSubarraySum += array[i]; // Add current element to currentSubarraySum
    if (currentSubarraySum < 0)
    {
      currentSubarraySum = 0; // Reset currentSubarraySum if it becomes negative
    }
    maximumSubarraySum = max(maximumSubarraySum, currentSubarraySum); // Update maximumSubarraySum if currentSubarraySum is greater
  }
  return maximumSubarraySum; // Return the maximum subarray sum
}

int main()
{
  int numberOfElements;    // Variable to store the number of elements in the array
  cin >> numberOfElements; // Input the number of elements

  int elements[numberOfElements]; // Declare an array of size numberOfElements
  for (int i = 0; i < numberOfElements; i++)
  {
    cin >> elements[i]; // Input elements into the array
  }

  int wrappedSum;    // Variable to store the wrapped sum
  int nonWrappedSum; // Variable to store the non-wrapped sum

  nonWrappedSum = kadane(elements, numberOfElements); // Calculate the non-wrapped maximum subarray sum

  // Calculate the wrapped sum
  int totalSum = 0; // Variable to store the total sum of the array
  for (int i = 0; i < numberOfElements; i++)
  {
    totalSum += elements[i];    // Calculate total sum
    elements[i] = -elements[i]; // Invert the elements of the array
  }

  // Calculate the wrapped sum using the inverted array
  wrappedSum = totalSum + kadane(elements, numberOfElements); // totalSum - (-kadane(elements, numberOfElements))

  // Output the maximum of the wrapped and non-wrapped sums
  cout << max(wrappedSum, nonWrappedSum) << endl;

  return 0; // Indicate that the program ended successfully
}
