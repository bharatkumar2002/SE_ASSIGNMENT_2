#include <stdio.h>

void main() {
    // One-dimensional array
    int oneDArray[5];
    int i,j;
    // Input 5 integers
    printf("Enter 5 integers:\n");
    for (i = 0; i < 5; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &oneDArray[i]);
    }

    // Print the one-dimensional array
    printf("You entered:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", oneDArray[i]);
    }
    printf("\n");

    // Two-dimensional array (3x3 matrix)
    int matrix[3][3];
    int sum = 0;

    // Input elements for the 3x3 matrix
    printf("Enter 9 integers for a 3x3 matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j]; // Calculate sum
        }
    }

    // Print the 3x3 matrix
    printf("The 3x3 matrix is:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // Print the sum of all elements
    printf("The sum of all elements in the matrix is: %d\n", sum);

}

