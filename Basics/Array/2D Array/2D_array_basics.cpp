#include <iostream>
using namespace std;

/*
  Practice Question:
  Write a C++ program to input and display a 2D array (matrix) of size n x m.

  Explanation:
  This program first reads the dimensions of the matrix (n and m), then initializes a 2D array
  of size n x m. It fills the array with user-provided values and finally prints the matrix in
  a structured format. This allows users to visualize the array as a grid.
*/

int main()
{
    int n, m;      // Variables to store the number of rows (n) and columns (m)
    cin >> n >> m; // Input the dimensions of the matrix

    // Declaration of a 2D array of size n x m
    int arr[n][m];

    // Input values into the 2D array
    cout << "Enter elements for the matrix:\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j]; // Fill the array with user input
        }
    }

    // Printing the 2D array (matrix)
    cout << "Matrix is:\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " "; // Print each element followed by a space
        }
        cout << endl; // Move to the next line after printing a row
    }

    return 0; // Indicate successful program termination
}
