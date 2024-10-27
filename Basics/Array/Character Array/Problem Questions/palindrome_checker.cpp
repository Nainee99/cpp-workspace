#include <iostream>
using namespace std;

/*
  Practice Question:
  Write a C++ program to check if a given string is a palindrome.
  A palindrome is a word that reads the same forwards and backwards, such as "nithin" or "racecar".

  Explanation:
  This program takes an integer 'n' as input, followed by a string of 'n' characters.
  It checks if the string is a palindrome by comparing characters from the start and the end
  of the string moving towards the center. If all corresponding characters match, it is a palindrome.
*/

int main()
{
    int length;    // Length of the string
    cin >> length; // Input the length of the string

    char str[length + 1]; // Declare a character array of size n+1 for null termination
    cin >> str;           // Input the string

    bool isPalindrome = true; // Flag to check if the string is a palindrome

    // Check if the string is a palindrome
    for (int i = 0; i < length / 2; i++)
    {
        if (str[i] != str[length - 1 - i]) // Compare characters from the start and end
        {
            isPalindrome = false; // Set flag to false if mismatch found
            break;                // Exit the loop early
        }
    }

    // Output the result
    if (isPalindrome)
    {
        cout << "The word is a palindrome." << endl; // If palindrome
    }
    else
    {
        cout << "The word is not a palindrome." << endl; // If not a palindrome
    }

    return 0; // Indicate successful program termination
}
