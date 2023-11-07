#include <stdio.h>
#include <string.h>

// Function to print a string in reverse using pointers
void printReverse(const char *str) {
    // Find the length of the string
    int length = strlen(str);

    // Pointing to the last character of the string
    const char *ptr = str + length - 1;

    // Print characters in reverse order
    printf("Reversed String: ");
    while (ptr >= str) {
        printf("%c", *ptr);
        ptr--;
    }

    printf("\n");
}

int main() {
    char inputString[100];

    // Input the string
    printf("Enter a string: ");
    fgets(inputString, sizeof(inputString), stdin);

    // Remove the newline character from the input string
    inputString[strcspn(inputString, "\n")] = '\0';

    // Call the function to print the string in reverse
    printReverse(inputString);

    return 0;
}

