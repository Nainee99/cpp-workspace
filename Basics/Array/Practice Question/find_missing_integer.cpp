/*
 * Practice Question:
 * Write a C++ program to find the smallest positive missing integer
 * from an array of integers.
 *
 * Explanation:
 * This program reads 'n' integers into an array and uses a boolean
 * array to keep track of which positive integers are present. It
 * then iterates through the boolean array to find the smallest
 * positive integer that is missing from the input array.
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

    const int MAX_SIZE = 1e6 + 2; // Maximum size for the boolean array
    bool isPresent[MAX_SIZE];     // Boolean array to track presence of positive integers
    for (int i = 0; i < MAX_SIZE; i++)
    {
        isPresent[i] = false; // Initialize all entries to false
    }

    for (int i = 0; i < numElements; i++)
    {
        if (inputArray[i] >= 0)
        {
            isPresent[inputArray[i]] = true; // Mark the integer as present
        }
    }

    int missingInteger = -1; // Variable to store the smallest missing positive integer

    for (int i = 1; i < MAX_SIZE; i++)
    {
        if (!isPresent[i])
        { // Check for the first missing positive integer
            missingInteger = i;
            break;
        }
    }

    cout << missingInteger << endl; // Output the smallest missing positive integer
    return 0;                       // Indicate successful program termination
}
