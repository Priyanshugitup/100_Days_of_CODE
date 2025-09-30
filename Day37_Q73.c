// Find the sum of each row of a matrix and store it in an array.

#include <stdio.h>

int main() {
    int rows, cols;

    printf("Enter the number of rows for the matrix:\n");
    scanf("%d", &rows);
    printf("Enter the number of columns for the matrix:\n");
    scanf("%d", &cols);


    int matrix[rows][cols];
    int rowSums[rows];
    printf("\nEnter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i = 0; i < rows; i++) {
        rowSums[i] = 0;
        for (int j = 0; j < cols; j++) {
            rowSums[i] += matrix[i][j];
        }
    }

    printf("\nThe sum of each row is:\n");
    for (int i = 0; i < rows; i++) {
        printf("Sum of row %d: %d\n", i + 1, rowSums[i]);
    }

    return 0;
}