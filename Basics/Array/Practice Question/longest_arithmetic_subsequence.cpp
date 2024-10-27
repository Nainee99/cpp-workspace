#include <iostream>
using namespace std;

/*
 * Practice Question:
 * Write a C++ program to find the length of the longest arithmetic
 * subsequence in an array. An arithmetic subsequence is a sequence of
 * numbers in which the difference between consecutive terms is constant.
 *
 * Explanation:
 * This program takes an integer 'n' as input, followed by 'n' integers in an array.
 * It calculates the length of the longest arithmetic subsequence by comparing the
 * differences between consecutive elements and updating the maximum length accordingly.
 */

int main()
{
    int numberOfElements;    // Variable to store the number of elements in the array
    cin >> numberOfElements; // Input the number of elements

    int elements[numberOfElements]; // Declare an array of size numberOfElements
    for (int i = 0; i < numberOfElements; i++)
    {
        cin >> elements[i]; // Input elements into the array
    }

    int longestSubsequenceLength = 2;                 // Variable to store the length of the longest arithmetic subsequence
    int commonDifference = elements[1] - elements[0]; // Initial common difference
    int currentSubsequenceLength = 2;                 // Variable to store the current length of the arithmetic subsequence
    int index = 2;                                    // Index for iteration

    // Loop to find the length of the longest arithmetic subsequence
    while (index < numberOfElements)
    {
        // Check if the current difference matches the previous common difference
        if (commonDifference == elements[index] - elements[index - 1])
        {
            currentSubsequenceLength++; // Increment the current length
        }
        else
        {
            commonDifference = elements[index] - elements[index - 1]; // Update common difference
            currentSubsequenceLength = 2;                             // Reset current length to 2
        }

        longestSubsequenceLength = max(currentSubsequenceLength, longestSubsequenceLength); // Update longest length if necessary
        index++;                                                                            // Move to the next index
    }

    cout << longestSubsequenceLength << " " << endl; // Output the length of the longest arithmetic subsequence
    return 0;                                        // Indicate that the program ended successfully
}
