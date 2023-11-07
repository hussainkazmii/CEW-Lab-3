#include <stdio.h>

// Function to search for an element in an array using pointers
int searchElement(const int *arr, int size, int key) {
    const int *ptr = arr;  // Initialize pointer to the beginning of the array

    // Iterate through the array using the pointer
    for (int i = 0; i < size; i++) {
        if (*ptr == key) {
            // Element found, return its position
            return i;
        }
        ptr++;  // Move the pointer to the next element
    }

    // Element not found, return -1
    return -1;
}

int main() {
    int size, key;

    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Declare an array of the given size
    int array[size];

    // Input array elements
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    // Input the element to search for
    printf("Enter the element to search for: ");
    scanf("%d", &key);

    // Call the function to search for the element
    int position = searchElement(array, size, key);

    // Check and display the result
    if (position != -1) {
        printf("Element %d found at position %d.\n", key, position + 1);
    } else {
        printf("Element %d not found in the array.\n", key);
    }

    return 0;
}

