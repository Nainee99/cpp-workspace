/* Practice Question:
   Write a C++ program to determine if there exists a pair of elements in a sorted array
   whose sum equals a given target 'k'. The program should implement two approaches:
   1. A brute force approach with O(n²) complexity.
   2. A two-pointer approach with O(n) complexity for an optimized solution.

   Explanation:
   The program first tries to find a pair of elements that sum to 'k' using two methods.
   The brute force method iterates through all pairs, while the two-pointer approach
   takes advantage of the sorted array to achieve linear time complexity, O(n).
*/

#include "bits/stdc++.h"
using namespace std;

// Optimized function to find a pair of elements in a sorted array that sum to 'k' using two pointers
bool pairSum(int arr[], int n, int k)
{
    int low = 0;      // Start of the array
    int high = n - 1; // End of the array

    while (low < high)
    {
        int currentSum = arr[low] + arr[high]; // Calculate the sum of the two pointers
        if (currentSum == k)
        {
            cout << low << " " << high << endl; // Print indices of the pair if sum equals k
            return true;
        }
        else if (currentSum > k)
        {
            high--; // Move the high pointer left if the current sum is greater than k
        }
        else
        {
            low++; // Move the low pointer right if the current sum is less than k
        }
    }
    return false; // Return false if no such pair exists
}

int main()
{
    int arr[] = {2, 4, 7, 11, 14, 16, 20, 21};
    int k = 31;

    cout << pairSum(arr, 8, k) << endl; // Output whether a pair was found
    return 0;                           // Indicate successful program termination
}
