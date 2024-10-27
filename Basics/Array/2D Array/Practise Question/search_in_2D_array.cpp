#include <iostream>
using namespace std;

/*
  Practice Question:
  Write a C++ program to search for a given element in a 2D array.
  The program should accept the dimensions of the array and its elements as input,
  and then find the specified element using both linear search and an optimized approach.

  Explanation:
  This program takes the dimensions of a 2D array and its elements as input.
  It implements two searching techniques: a brute-force linear search,
  and an optimized approach that takes advantage of the sorted nature of the array
  (if applicable). The optimized method searches from the top-right corner,
  moving left if the current element is greater than the target, and down if it is
  less. Finally, it reports whether the target element was found.
*/

int main()
{
    int n, m;      // Dimensions of the 2D array
    cin >> n >> m; // Input number of rows and columns
    int arr[n][m]; // Declare the 2D array

    // Input elements into the 2D array
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j]; // Fill the array
        }
    }

    // Searching in the array
    int x;    // Value to search
    cin >> x; // Input the target value to search for

    /*
       Linear search:
       Brute force approach

    bool flag = false; // Flag to check if the element is found
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == x)
            {
                cout << i << " " << j << endl; // Print the position if found
                flag = true; // Set flag to true
            }
        }
    }

    if (flag)
    {
        cout << "Element is found\n";
    }
    else
    {
        cout << "Element is not found\n";
    }
    */

    // Better approach
    int r = 0;          // Start from the first row
    int c = m - 1;      // Start from the last column
    bool found = false; // Flag to check if the element is found

    while (r < n && c >= 0)
    {
        if (arr[r][c] == x) // Check if the current element matches the target
        {
            found = true;                                          // Set found to true
            cout << "Element found at: " << r << " " << c << endl; // Print the position
            break;                                                 // Exit the loop since we found the element
        }
        if (arr[r][c] > x) // If current element is greater, move left
        {
            c--;
        }
        else // If current element is less, move down
        {
            r++;
        }
    }

    if (!found) // If the element was not found
    {
        cout << "Element is not found\n";
    }

    return 0; // Indicate successful program termination
}
