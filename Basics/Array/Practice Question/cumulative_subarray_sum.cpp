#include <iostream>
using namespace std;

/*
 * Practice Question:
 * Given an array of integers, the program calculates and prints
 * the cumulative sum of all subarrays. For each starting index in
 * the array, it iterates through the possible ending indices and
 * computes the sum of the elements from the starting index to the
 * ending index.
 *
 * Explanation:
 * This code uses a nested loop to generate and sum all possible
 * subarrays of the given array. For each starting index, it
 * calculates the sum of elements from that index to every other
 * index to its right.
 */

int main()
{
    int arraySize;    // Variable to store the number of elements
    cin >> arraySize; // Input the size of the array

    int elements[arraySize]; // Declare an array of the specified size
    for (int i = 0; i < arraySize; i++)
    {
        cin >> elements[i]; // Input elements into the array
    }

    // Loop through the array to find the cumulative sum of all subarrays
    for (int i = 0; i < arraySize; i++)
    {
        int currentSum = 0; // Variable to track the sum of the current subarray
        for (int j = i; j < arraySize; j++)
        {
            currentSum += elements[j];  // Add the current element to the sum
            cout << currentSum << endl; // Output the current sum
        }
    }

    return 0; // Indicate successful program termination
}
