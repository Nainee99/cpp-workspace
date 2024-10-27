# 📊 Sorting Algorithms

## What is Sorting?

Sorting is the process of arranging the elements of a list or an array in a particular order, typically in ascending or descending order. Sorting is a fundamental concept in computer science and is widely used in various applications, such as organizing data, optimizing search operations, and improving the efficiency of algorithms.

### Why is Sorting Important?

1. **Efficiency**: Sorted data can be searched more efficiently using algorithms like binary search.
2. **Organization**: Helps in organizing data, making it easier to read and analyze.
3. **Data Processing**: Many algorithms require sorted data as input to function correctly.

## Example of Sorting

Consider an array of integers:

```cpp
int arr[] = {5, 2, 9, 1, 5, 6};
```

After applying a sorting algorithm, the sorted array in ascending order would be:

```cpp
[1, 2, 5, 5, 6, 9]
```

## Common Sorting Algorithms

### 1. 🔄 Bubble Sort

**Basic Idea**: Compare adjacent elements and swap them if they are in the wrong order. Repeat this until no swaps are needed.

#### C++ Code Example:

```cpp
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
            }
        }
    }
}
```

- **Time Complexity**:
  - Worst Case: O(n²)
  - Best Case: O(n) (when the array is already sorted)
- **Space Complexity**: O(1)

### 2. 📏 Selection Sort

**Basic Idea**: Divide the array into a sorted and an unsorted region. Repeatedly select the smallest (or largest) element from the unsorted region and move it to the end of the sorted region.

#### C++ Code Example:

```cpp
void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        std::swap(arr[i], arr[minIndex]);
    }
}
```

- **Time Complexity**: O(n²) for all cases
- **Space Complexity**: O(1)

### 3. 🔄 Insertion Sort

**Basic Idea**: Build a sorted section of the array one element at a time by repeatedly taking the next unsorted element and inserting it into the correct position in the sorted section.

#### C++ Code Example:

```cpp
void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}
```

- **Time Complexity**:
  - Worst Case: O(n²)
  - Best Case: O(n) (when the array is already sorted)
- **Space Complexity**: O(1)

### 4. 🔀 Merge Sort

**Basic Idea**: A divide-and-conquer algorithm that splits the array into halves, recursively sorts them, and then merges the sorted halves back together.

#### C++ Code Example:

```cpp
void merge(int arr[], int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;
    int* L = new int[n1];
    int* R = new int[n2];

    for (int i = 0; i < n1; i++) L[i] = arr[left + i];
    for (int j = 0; j < n2; j++) R[j] = arr[mid + 1 + j];

    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k++] = L[i++];
        } else {
            arr[k++] = R[j++];
        }
    }
    while (i < n1) arr[k++] = L[i++];
    while (j < n2) arr[k++] = R[j++];

    delete[] L;
    delete[] R;
}

void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}
```

- **Time Complexity**: O(n log n) for all cases
- **Space Complexity**: O(n) (due to temporary arrays)

### 5. ⚡ Quick Sort

**Basic Idea**: Another divide-and-conquer algorithm that selects a 'pivot' element and partitions the array into elements less than and greater than the pivot. The sub-arrays are then sorted recursively.

#### C++ Code Example:

```cpp
int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1;
    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            i++;
            std::swap(arr[i], arr[j]);
        }
    }
    std::swap(arr[i + 1], arr[high]);
    return i + 1;
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}
```

- **Time Complexity**:
  - Worst Case: O(n²) (when the smallest or largest element is always chosen as the pivot)
  - Best and Average Case: O(n log n)
- **Space Complexity**: O(log n) (due to recursion stack)

### 6. 📐 Heap Sort

**Basic Idea**: Converts the array into a max heap (or min heap) structure, and then repeatedly extracts the maximum (or minimum) element to build the sorted array.

#### C++ Code Example:

```cpp
void heapify(int arr[], int n, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && arr[left] > arr[largest]) {
        largest = left;
    }
    if (right < n && arr[right] > arr[largest]) {
        largest = right;
    }
    if (largest != i) {
        std::swap(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }
}

void heapSort(int arr[], int n) {
    for (int i = n / 2 - 1; i >= 0; i--) {
        heapify(arr, n, i);
    }
    for (int i = n - 1; i > 0; i--) {
        std::swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }
}
```

- **Time Complexity**: O(n log n) for all cases
- **Space Complexity**: O(1)

## Conclusion

Sorting is a crucial aspect of computer science, with various algorithms available to accomplish it, each with its own advantages and trade-offs. Understanding these sorting algorithms will enhance your programming skills and enable you to write more efficient code.
```
