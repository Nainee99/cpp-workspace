# 📖 Character Arrays in C++

## What is a Character Array?

A character array is a collection of characters stored in contiguous memory locations. It is primarily used to store strings in C and C++. Character arrays allow for efficient manipulation of string data, such as storing names, sentences, or any textual information.

### Declaring a Character Array

In C++, you can declare a character array using the following syntax:

```cpp
char arrayName[size];
```

- `arrayName`: The name of the character array.
- `size`: The maximum number of characters the array can hold, including the null terminator (`\0`).

### Example of Declaring a Character Array

```cpp
char name[20]; // Declares a character array to hold a string of up to 19 characters + null terminator
```

### Initializing a Character Array

You can initialize a character array at the time of declaration:

```cpp
char name[] = "John Doe"; // Automatically allocates enough space for the string
```

Alternatively, you can specify the size:

```cpp
char name[20] = "John Doe"; // Explicitly defines the size
```

### Accessing Characters in a Character Array

You can access individual characters using the index operator `[]`. The first character is at index `0`, the second at index `1`, and so on.

```cpp
char name[] = "John";
char firstChar = name[0]; // 'J'
```

### Common Operations with Character Arrays

1. **Finding the Length of a Character Array**:

   You can find the length of a character array (string) using the `strlen` function from the `<cstring>` library:

   ```cpp
   #include <cstring>

   char name[] = "John Doe";
   int length = strlen(name); // length will be 8 (not including the null terminator)
   ```

2. **Copying a Character Array**:

   Use the `strcpy` function to copy one character array to another:

   ```cpp
   #include <cstring>

   char source[] = "Hello";
   char destination[20];
   strcpy(destination, source); // destination now holds "Hello"
   ```

3. **Concatenating Character Arrays**:

   You can concatenate (join) two character arrays using the `strcat` function:

   ```cpp
   #include <cstring>

   char firstName[20] = "John";
   char lastName[] = "Doe";
   strcat(firstName, " "); // Add a space
   strcat(firstName, lastName); // firstName now holds "John Doe"
   ```

4. **Comparing Character Arrays**:

   To compare two character arrays, use the `strcmp` function:

   ```cpp
   #include <cstring>

   char str1[] = "apple";
   char str2[] = "banana";
   int result = strcmp(str1, str2); // result will be negative since "apple" < "banana"
   ```

### Example Program

Here’s a simple program that demonstrates character arrays:

```cpp
#include <iostream>
#include <cstring>

int main() {
    char name[20] = "John Doe";
    std::cout << "Name: " << name << std::endl;

    // Length of the string
    std::cout << "Length: " << strlen(name) << std::endl;

    // Copying strings
    char copy[20];
    strcpy(copy, name);
    std::cout << "Copied Name: " << copy << std::endl;

    // Concatenating strings
    strcat(copy, " Jr.");
    std::cout << "Full Name: " << copy << std::endl;

    return 0;
}
```

### Conclusion

Character arrays are a fundamental part of C and C++ programming for handling strings. They allow for efficient storage and manipulation of textual data. Understanding how to use character arrays effectively will enhance your programming skills and enable you to work with strings efficiently in your applications.

```

```
