#include <iostream>
using namespace std;

/*
  Practice Question:
  Write a C++ program to find the length and the longest word in a given string.
  The program should handle multiple words and return the length of the longest word.

  Explanation:
  This program reads a line of text and identifies the longest word by checking each character.
  It keeps track of the current word's length, the maximum length found, and the starting index
  of the longest word. The program outputs the length of the longest word and prints the word itself.
*/

int main()
{
    int n;        // Length of the input string
    cin >> n;     // Input the length of the string
    cin.ignore(); // Ignore the newline character after the length input

    char arr[n + 1];     // Declare a character array of size n+1 for null termination
    cin.getline(arr, n); // Input the entire line

    int i = 0;                   // Index for traversal
    int currLen = 0, maxLen = 0; // Current word length and maximum length found
    int start = 0, maxStart = 0; // Starting index for the current word and the longest word

    // Loop to find the longest word
    while (1)
    {
        // Check for end of string or space
        if (arr[i] == '\0' || arr[i] == ' ')
        {
            // Update max length if current word is longer
            if (currLen > maxLen)
            {
                maxLen = currLen; // Update max length
                maxStart = start; // Update starting index of the longest word
            }
            currLen = 0;   // Reset current length
            start = i + 1; // Update starting index for the next word
        }
        else
        {
            currLen++; // Increment current word length
        }

        // Break if newline character is encountered
        if (arr[i] == '\n')
        {
            break;
        }

        i++; // Move to the next character
    }

    // Output the length of the longest word
    cout << maxLen << endl;

    // Output the longest word
    for (int i = 0; i < maxLen; i++)
    {
        cout << arr[i + maxStart]; // Print each character of the longest word
    }

    return 0; // Indicate successful program termination
}
