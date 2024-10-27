#include <iostream>
using namespace std;

/*
  File Name: MatrixMultiplication.cpp

  Practice Question:
  Write a C++ program to multiply two matrices. The program should take dimensions
  and elements for both matrices as input, and then output the resulting matrix.

  Explanation:
  This program reads the dimensions of two matrices, then takes user input to fill
  both matrices. It performs matrix multiplication according to the rules of linear
  algebra, where the number of columns in the first matrix must equal the number of
  rows in the second matrix. Finally, it outputs the resulting matrix after multiplication.
*/

int main()
{
    int n1, n2, n3;        // Variables to store the dimensions of the matrices
    cin >> n1 >> n2 >> n3; // Input dimensions for the matrices

    // Declare matrices based on user input dimensions
    int m1[n1][n2]; // First matrix with dimensions n1 x n2
    int m2[n2][n3]; // Second matrix with dimensions n2 x n3

    // Taking input for the first matrix
    cout << "Enter elements for the first matrix (size " << n1 << "x" << n2 << "):\n";
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            cin >> m1[i][j]; // Fill the first matrix
        }
    }

    // Taking input for the second matrix
    cout << "Enter elements for the second matrix (size " << n2 << "x" << n3 << "):\n";
    for (int i = 0; i < n2; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            cin >> m2[i][j]; // Fill the second matrix
        }
    }

    // Declare the resulting matrix for multiplication
    int ans[n1][n3];

    // Initialize the resulting matrix to zero
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            ans[i][j] = 0; // Set initial value for each element in the result matrix
        }
    }

    // Perform matrix multiplication
    for (int i = 0; i < n1; i++) // Iterate over rows of the first matrix
    {
        for (int j = 0; j < n3; j++) // Iterate over columns of the second matrix
        {
            for (int k = 0; k < n2; k++) // Multiply and sum the products
            {
                ans[i][j] += m1[i][k] * m2[k][j]; // Update the result matrix
            }
        }
    }

    // Output the resulting matrix
    cout << "Resulting matrix after multiplication:\n";
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            cout << ans[i][j] << " "; // Print each element
        }
        cout << "\n"; // Move to the next line after each row
    }

    return 0; // Indicate successful program termination
}
