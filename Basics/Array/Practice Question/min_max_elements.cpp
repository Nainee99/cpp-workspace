#include <iostream>
#include <climits>
using namespace std;

/*
 * Practice Question:
 * Write a C++ program to find the minimum and maximum elements in an array.
 * The program should first read 'n' integers into an array and then determine
 * the minimum and maximum values using built-in functions.
 *
 * Explanation:
 * This program takes an integer 'n' as input, followed by 'n' integers in an array.
 * It initializes the minimum and maximum values to the largest and smallest possible
 * integers respectively and iterates through the array to find the minimum and
 * maximum elements using built-in functions.
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

    int maximumValue = INT_MIN; // Initialize maximumValue to the smallest possible integer
    int minimumValue = INT_MAX; // Initialize minimumValue to the largest possible integer

    // Loop through the array to find the minimum and maximum values
    for (int i = 0; i < numberOfElements; i++)
    {
        // Using built-in functions to find min and max
        maximumValue = max(maximumValue, elements[i]); // Update maximumValue using the built-in max function
        minimumValue = min(minimumValue, elements[i]); // Update minimumValue using the built-in min function
    }

    cout << minimumValue << "  " << maximumValue << endl; // Output the minimum and maximum values

    return 0; // Indicate that the program ended successfully
}
