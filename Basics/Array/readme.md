# Arrays in C++ 📊

## Overview

Arrays are a fundamental data structure in C++ that allow you to store multiple values of the same type in a single variable. They are particularly useful for organizing data in a manageable way and are commonly used in various algorithms.

## Features of the Array Folder

This folder contains a collection of code examples and practice questions related to arrays, including:

- **Basic Array Operations**
- **Sorting Algorithms** (e.g., Bubble Sort, Selection Sort)
- **Searching Algorithms** (e.g., Linear Search, Binary Search)
- **2D Arrays** (e.g., matrices and grids)
- **Character Arrays** (e.g., C-style strings)
- **Practice Questions** covering various aspects of arrays

## Example: Basic Array Declaration and Initialization

```cpp
#include <iostream>
using namespace std;

int main() {
    // Declaration and Initialization of an Array
    int numbers[5] = {10, 20, 30, 40, 50};

    // Accessing Array Elements
    for (int i = 0; i < 5; i++) {
        cout << "Element at index " << i << ": " << numbers[i] << endl;
    }

    return 0;
}
```

### Sorting Example: Bubble Sort

```cpp
#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int arr[] = {64, 34, 25, 12, 22};
    int n = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
```

## Practice Questions

In this folder, you will also find various practice questions, including:

- Implementing different sorting algorithms
- Searching for an element in an array
- Manipulating 2D arrays
- Working with character arrays and strings

Feel free to explore the code examples and tackle the practice questions to strengthen your understanding of arrays in C++!
