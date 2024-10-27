# 📐 2D Arrays in C++

## What is a 2D Array?

A 2D array, or two-dimensional array, is an array of arrays. It is used to store data in a tabular format, consisting of rows and columns. Each element in a 2D array is accessed using two indices: one for the row and one for the column.

### Declaring a 2D Array

In C++, you can declare a 2D array using the following syntax:

```cpp
dataType arrayName[rows][columns];
```

- `dataType`: The type of data the array will hold (e.g., `int`, `float`, `char`).
- `arrayName`: The name of the 2D array.
- `rows`: The number of rows in the array.
- `columns`: The number of columns in the array.

### Example of Declaring a 2D Array

```cpp
int matrix[3][4]; // Declares a 2D array with 3 rows and 4 columns
```

### Initializing a 2D Array

You can initialize a 2D array at the time of declaration:

```cpp
int matrix[2][3] = {
    {1, 2, 3},
    {4, 5, 6}
};
```

Alternatively, you can initialize it using nested braces:

```cpp
int matrix[2][3] = { {1, 2, 3}, {4, 5, 6} };
```

### Accessing Elements in a 2D Array

You can access individual elements using the index operator `[][]`. The first index represents the row, and the second index represents the column.

```cpp
int matrix[2][3] = {
    {1, 2, 3},
    {4, 5, 6}
};
int element = matrix[1][2]; // element will be 6 (2nd row, 3rd column)
```

### Common Operations with 2D Arrays

1. **Finding the Size of a 2D Array**:

   To find the number of rows and columns in a 2D array, you can use the `sizeof` operator:

   ```cpp
   int rows = sizeof(matrix) / sizeof(matrix[0]); // Number of rows
   int columns = sizeof(matrix[0]) / sizeof(matrix[0][0]); // Number of columns
   ```

2. **Filling a 2D Array**:

   You can fill a 2D array using nested loops:

   ```cpp
   int matrix[3][3];
   for (int i = 0; i < 3; i++) {
       for (int j = 0; j < 3; j++) {
           matrix[i][j] = i * j; // Filling with product of indices
       }
   }
   ```

3. **Printing a 2D Array**:

   To print a 2D array, you can use nested loops:

   ```cpp
   for (int i = 0; i < 3; i++) {
       for (int j = 0; j < 3; j++) {
           std::cout << matrix[i][j] << " ";
       }
       std::cout << std::endl; // New line after each row
   }
   ```

### Example Program

Here’s a simple program that demonstrates the use of 2D arrays:

```cpp
#include <iostream>

int main() {
    // Declaring and initializing a 2D array
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // Printing the 2D array
    std::cout << "Matrix:" << std::endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }

    // Accessing a specific element
    int element = matrix[1][1]; // Accessing the element at 2nd row, 2nd column
    std::cout << "Element at (1, 1): " << element << std::endl;

    return 0;
}
```

### Conclusion

2D arrays are powerful data structures that allow for the organization of data in rows and columns. They are useful for applications that require tabular data, such as matrices, grids, and images. Understanding how to work with 2D arrays will enhance your programming skills and enable you to handle complex data efficiently.
```

