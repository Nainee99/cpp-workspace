# 🔍 Searching Algorithms

## What is Searching?

Searching is the process of finding a specific element or group of elements in a data structure (like an array, list, or database) that meets certain criteria. It is a fundamental operation in computer science and is crucial for efficient data retrieval.

### Why is Searching Important?

1. **Efficiency**: Searching algorithms enable quick access to data, which is essential in large datasets.
2. **Optimization**: Many applications rely on efficient searching to enhance performance, such as databases, search engines, and more.
3. **Data Retrieval**: Helps in finding specific items from large datasets easily.

## Common Searching Algorithms

### 1. 🔍 Linear Search

**Basic Idea**: Iterate through each element in the list until the desired element is found or the end of the list is reached.

#### C++ Code Example:

```cpp
int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i; // Element found at index i
        }
    }
    return -1; // Element not found
}
```

- **Time Complexity**: O(n) (in the worst case)
- **Space Complexity**: O(1)

### 2. 📏 Binary Search

**Basic Idea**: This algorithm works on sorted arrays. It divides the search interval in half repeatedly, checking if the target value is in the left or right half of the current interval.

#### C++ Code Example:

```cpp
int binarySearch(int arr[], int n, int key) {
    int left = 0;
    int right = n - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == key) {
            return mid; // Element found
        }
        if (arr[mid] < key) {
            left = mid + 1; // Search in the right half
        } else {
            right = mid - 1; // Search in the left half
        }
    }
    return -1; // Element not found
}
```

- **Time Complexity**: O(log n)
- **Space Complexity**: O(1)

### 3. 📚 Exponential Search

**Basic Idea**: This algorithm is an extension of binary search. It starts by finding a range where the element may exist and then performs a binary search in that range.

#### C++ Code Example:

```cpp
int binarySearch(int arr[], int left, int right, int key) {
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == key) return mid;
        if (arr[mid] < key) left = mid + 1;
        else right = mid - 1;
    }
    return -1;
}

int exponentialSearch(int arr[], int n, int key) {
    if (arr[0] == key) return 0;
    int i = 1;
    while (i < n && arr[i] <= key) {
        i *= 2;
    }
    return binarySearch(arr, i / 2, std::min(i, n - 1), key);
}
```

- **Time Complexity**: O(log n)
- **Space Complexity**: O(1)

### 4. 🏷️ Interpolation Search

**Basic Idea**: This algorithm improves upon binary search for uniformly distributed sorted arrays. It estimates the position of the target value based on the values at the ends of the search range.

#### C++ Code Example:

```cpp
int interpolationSearch(int arr[], int n, int key) {
    int low = 0, high = n - 1;

    while (low <= high && key >= arr[low] && key <= arr[high]) {
        if (low == high) {
            if (arr[low] == key) return low;
            return -1;
        }

        int pos = low + ((double)(high - low) / (arr[high] - arr[low]) * (key - arr[low]));

        if (arr[pos] == key) return pos;
        if (arr[pos] < key) low = pos + 1;
        else high = pos - 1;
    }
    return -1; // Element not found
}
```

- **Time Complexity**: O(log log n) (for uniformly distributed data), O(n) in the worst case
- **Space Complexity**: O(1)

### 5. 🗃️ Fibonacci Search

**Basic Idea**: This algorithm is similar to binary search but uses Fibonacci numbers to divide the array into parts. It works on sorted arrays.

#### C++ Code Example:

```cpp
int fibMonaccianSearch(int arr[], int n, int key) {
    int fib2 = 0; // (m-2)'th Fibonacci
    int fib1 = 1; // (m-1)'th Fibonacci
    int fibM = fib2 + fib1; // m'th Fibonacci

    while (fibM < n) {
        fib2 = fib1;
        fib1 = fibM;
        fibM = fib2 + fib1;
    }

    int offset = -1;

    while (fibM > 1) {
        int i = std::min(offset + fib2, n - 1);

        if (arr[i] < key) {
            fibM = fib1;
            fib1 = fib2;
            fib2 = fibM - fib1;
            offset = i;
        } else if (arr[i] > key) {
            fibM = fib2;
            fib1 = fib1 - fib2;
            fib2 = fibM - fib1;
        } else {
            return i;
        }
    }

    if (fib1 && arr[offset + 1] == key) return offset + 1;

    return -1; // Element not found
}
```

- **Time Complexity**: O(log n)
- **Space Complexity**: O(1)

## Conclusion

Searching algorithms are essential for efficiently retrieving data from various data structures. Understanding these algorithms will improve your problem-solving skills and enhance your programming capabilities.
```
