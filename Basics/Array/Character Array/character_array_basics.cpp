// File Name: character_array_basics.cpp

#include <iostream>
using namespace std;

int main()
{
   // Declaration of a character array with a maximum size of 100
   char charArray[100];

   // Prompt the user to enter a string
   cout << "Enter a string (max 99 characters): ";
   cin >> charArray; // Read input into the character array

   // Output the entire string
   cout << "You entered: " << charArray << endl;

   // Output the third character in the string, if it exists
   if (charArray[2] != '\0') // Check if the third character is within bounds
   {
      cout << "The third character is: " << charArray[2] << endl;
   }
   else
   {
      cout << "The third character does not exist." << endl; // Handle cases where the string is too short
   }

   // Print each character in the character array
   cout << "Each character in the string:" << endl;
   for (int i = 0; charArray[i] != '\0'; i++) // Loop until the null terminator is encountered
   {
      cout << charArray[i] << endl; // Print the current character
   }

   return 0; // Indicate successful program termination
}
