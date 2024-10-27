#include <iostream>
using namespace std;

/*
  Practice Question:
  Write a C++ program to print the elements of a 2D array in spiral order.
  The program should read the dimensions of the array and its elements,
  and then output the elements in a spiral pattern starting from the top-left corner.

  Explanation:
  This program takes the dimensions of a 2D array and its elements as input.
  It utilizes four pointers to define the boundaries of the current layer of the spiral:
  `row_start`, `row_end`, `column_start`, and `column_end`.
  In each iteration, it prints the top row, right column, bottom row, and left column of the current layer,
  adjusting the pointers as it progresses inward until all elements are printed.
*/

int main()
{
    int n, m;      // Dimensions of the 2D array
    cin >> n >> m; // Input number of rows (n) and columns (m)
    int a[n][m];   // Declare the 2D array

    // Input elements into the 2D array
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j]; // Fill the array
        }
    }

    // Spiral order printing
    int row_start = 0;      // Initialize the starting row
    int row_end = n - 1;    // Initialize the ending row
    int column_start = 0;   // Initialize the starting column
    int column_end = m - 1; // Initialize the ending column

    while (row_start <= row_end && column_start <= column_end)
    {
        // Print the top row
        for (int col = column_start; col <= column_end; col++)
        {
            cout << a[row_start][col] << " "; // Print each element in the current top row
        }
        row_start++; // Move down to the next row

        // Print the right column
        for (int row = row_start; row <= row_end; row++)
        {
            cout << a[row][column_end] << " "; // Print each element in the current right column
        }
        column_end--; // Move left to the next column

        // Print the bottom row if there's still a valid row to print
        if (row_start <= row_end)
        {
            for (int col = column_end; col >= column_start; col--)
            {
                cout << a[row_end][col] << " "; // Print each element in the current bottom row
            }
            row_end--; // Move up to the next row
        }

        // Print the left column if there's still a valid column to print
        if (column_start <= column_end)
        {
            for (int row = row_end; row >= row_start; row--)
            {
                cout << a[row][column_start] << " "; // Print each element in the current left column
            }
            column_start++; // Move right to the next column
        }
    }
    cout << endl; // Print a newline after completing the spiral order
    return 0;     // Indicate successful program termination
}
