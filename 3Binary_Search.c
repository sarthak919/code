#include <stdio.h>

// Function to perform Binary Search (Iterative)
int binarySearch(int arr[], int n, int key) {
    int low = 0, high = n - 1;

    // Continue searching while the range is valid
    while (low <= high) {
        int mid = low + (high - low) / 2; // Calculate mid index

        if (arr[mid] == key)
            return mid; // Key found at mid
        else if (arr[mid] < key)
            low = mid + 1; // Search right half
        else
            high = mid - 1; // Search left half
    }

    return -1; // Key not found
}

// Function to print the result
void printResult(int index) {
    if (index == -1)
        printf("Element not found in the array.\n");
    else
        printf("Element found at index %d.\n", index);
}

int main() {
    // Array must be sorted for binary search
    int arr[] = {10, 20, 30, 40, 50, 60, 70};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 40;

    int result = binarySearch(arr, n, key); // Call the search function
    printResult(result); // Display result

    return 0;
}