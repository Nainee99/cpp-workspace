#include <iostream>
#include <limits>
using namespace std;

/*
 * Practice Question:
 * Write a C++ program to find the maximum element in an array.
 * The program should read 'n' integers into an array and output the maximum
 * value found in the array while also printing the current maximum at each step.
 *
 * Explanation:
 * This program initializes a variable to hold the maximum value found in
 * the array. It iterates through each element, updating the maximum value
 * when a larger element is found, and prints the current maximum after
 * checking each element.
 */

int main()
{
     int numberOfElements;                        // Variable to store the number of elements in the array
     int currentMax = numeric_limits<int>::min(); // Initialize currentMax to the smallest possible integer
     cin >> numberOfElements;                     // Input the number of elements

     int elements[numberOfElements]; // Declare an array of size numberOfElements
     for (int i = 0; i < numberOfElements; i++)
     {
          cin >> elements[i]; // Input elements into the array
     }

     for (int i = 0; i < numberOfElements; i++)
     {
          currentMax = max(currentMax, elements[i]); // Update currentMax if the current element is greater
          cout << currentMax << endl;                // Output the current maximum value
     }

     return 0; // Indicate that the program ended successfully
}
