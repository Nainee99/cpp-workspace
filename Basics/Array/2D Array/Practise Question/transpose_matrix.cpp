#include <iostream>
using namespace std;

/*
  Practice Question:
  Write a C++ program to transpose a 3x3 matrix.
  The program should swap the rows and columns of the matrix
  to obtain the transpose, and then print the transposed matrix.

  Explanation:
  This program initializes a 3x3 matrix and then uses a nested loop to swap elements
  across the diagonal. The outer loop iterates over the rows, while the inner loop iterates
  over the columns starting from the diagonal to avoid redundant swaps.
  After transposing the matrix, it prints the transposed matrix to the console.
*/

int main()
{
    // Initialize a 3x3 matrix
    int a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    // Transpose the matrix
    for (int i = 0; i < 3; i++)
    {
        for (int j = i; j < 3; j++)
        {
            // Swap elements to transpose the matrix
            int temp = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = temp;
        }
    }

    // Print the transposed matrix
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << a[i][j] << " "; // Output each element in the matrix
        }
        cout << "\n"; // Print a new line after each row
    }

    return 0; // Indicate successful program termination
}
