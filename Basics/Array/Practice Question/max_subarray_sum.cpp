#include "bits/stdc++.h"
using namespace std;

/*
 * Practice Question:
 * Write a C++ program to find the maximum sum of a contiguous subarray.
 * This program should use three methods in order of increasing efficiency:
 * a brute force method, a cumulative sum approach, and Kadane’s Algorithm.
 * Kadane’s Algorithm finds the maximum sum subarray in linear time, O(n).
 *
 * Explanation:
 * The program takes an integer 'n' as input, followed by an array of 'n' integers.
 * It calculates the maximum sum of a contiguous subarray using three approaches:
 * 1. A brute force approach with O(n³) complexity.
 * 2. A cumulative sum approach with O(n²) complexity.
 * 3. Kadane’s Algorithm with O(n) complexity, which efficiently tracks the current
 *    subarray sum and resets it to zero when it becomes negative, while keeping
 *    track of the maximum sum encountered.
 */

int main()
{
  int numberOfElements; // Number of elements in the array
  cin >> numberOfElements;

  int elements[numberOfElements]; // Declare an array to hold the elements
  for (int i = 0; i < numberOfElements; i++)
  {
    cin >> elements[i]; // Input array elements
  }

  // Using Kadane's Algorithm to find the maximum sum subarray
  int currentSubarraySum = 0; // Stores current subarray sum
  int maximumSum = INT_MIN;   // Stores the maximum sum found

  for (int i = 0; i < numberOfElements; i++)
  {
    currentSubarraySum += elements[i]; // Add current element to currentSubarraySum
    if (currentSubarraySum < 0)
    {
      currentSubarraySum = 0; // Reset if currentSubarraySum goes negative
    }
    maximumSum = max(currentSubarraySum, maximumSum); // Update maximumSum if currentSubarraySum is higher
  }

  cout << maximumSum << endl; // Output the maximum subarray sum
  return 0;                   // Indicate successful program termination
}
