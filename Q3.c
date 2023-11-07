#include <stdio.h>

// Function to input array elements using pointers
void inputArray(int *arr, int size) {
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", arr + i);  // Using pointer arithmetic to access array elements
    }
}

// Function to print array elements using pointers
void printArray(const int *arr, int size) {
    printf("Array elements are:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", *(arr + i));  // Using pointer arithmetic to access array elements
    }
    printf("\n");
}

int main() {
    int size;

    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Declare an array of the given size
    int array[size];

    // Call the function to input array elements
    inputArray(array, size);

    // Call the function to print array elements
    printArray(array, size);

    return 0;
}

