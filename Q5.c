#include <stdio.h>

// Function to add two matrices using pointers
void addMatrices(const int *mat1, const int *mat2, int *result, int rows, int cols) {
    const int *ptr1 = mat1;  // Pointer for the first matrix
    const int *ptr2 = mat2;  // Pointer for the second matrix
    int *ptrResult = result; // Pointer for the result matrix

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            // Add corresponding elements and store the result
            *ptrResult = *ptr1 + *ptr2;

            // Move pointers to the next elements in the matrices
            ptr1++;
            ptr2++;
            ptrResult++;
        }
    }
}

// Function to display a matrix
void displayMatrix(const int *mat, int rows, int cols) {
    const int *ptr = mat;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", *ptr);
            ptr++;
        }
        printf("\n");
    }
}

int main() {
    int rows, cols;

    // Input the number of rows and columns for the matrices
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int matrix1[rows][cols], matrix2[rows][cols], resultMatrix[rows][cols];

    // Input elements for the first matrix
    printf("Enter elements for the first matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Matrix1[%d][%d]: ", i, j);
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Input elements for the second matrix
    printf("Enter elements for the second matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Matrix2[%d][%d]: ", i, j);
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Call the function to add matrices
    addMatrices(&matrix1[0][0], &matrix2[0][0], &resultMatrix[0][0], rows, cols);

    // Display the matrices and the result
    printf("\nMatrix 1:\n");
    displayMatrix(&matrix1[0][0], rows, cols);

    printf("\nMatrix 2:\n");
    displayMatrix(&matrix2[0][0], rows, cols);

    printf("\nSum of Matrices:\n");
    displayMatrix(&resultMatrix[0][0], rows, cols);

    return 0;
}
