#include "bits/stdc++.h"

using namespace std;

/*
 * Practice Question:
 * Given an array of integers and a target sum, find the starting
 * and ending indices of a contiguous subarray whose sum equals the target.
 * If no such subarray exists, print "-1 -1".
 *
 * Explanation:
 * This program uses the sliding window technique to find a contiguous
 * subarray that sums to the specified target. It maintains a window defined
 * by two pointers and adjusts the sum accordingly until it finds the desired
 * subarray or determines that it doesn't exist.
 */

int main()
{
    int arraySize, targetSum;
    cin >> arraySize >> targetSum; // Input the size of the array and the target sum

    int elements[arraySize];
    for (int i = 0; i < arraySize; i++)
    {
        cin >> elements[i]; // Input the elements of the array
    }

    int leftPointer = 0, rightPointer = 0, startIndex = -1, endIndex = -1, currentSum = 0;

    // Expand the window to the right as long as the sum is less than or equal to targetSum
    while (rightPointer < arraySize && currentSum + elements[rightPointer] <= targetSum)
    {
        currentSum += elements[rightPointer]; // Add the right element to the sum
        rightPointer++;
    }

    // Check if we found a subarray that meets the target sum
    if (currentSum == targetSum)
    {
        cout << rightPointer << " " << rightPointer << endl; // Output the indices
        return 0;
    }

    // Move the window to find the required subarray
    while (rightPointer < arraySize)
    {
        currentSum += elements[rightPointer]; // Include the right element in the sum
        while (currentSum > targetSum)
        {
            currentSum -= elements[leftPointer]; // Remove the left element from the sum
            leftPointer++;
        }

        // Check if the current sum matches the target sum
        if (currentSum == targetSum)
        {
            startIndex = leftPointer + 1; // Update the starting index
            endIndex = rightPointer + 1;  // Update the ending index
            break;
        }
        rightPointer++; // Expand the window to the right
    }

    cout << startIndex << " " << endIndex << endl; // Output the results

    return 0; // Indicate successful program termination
}
