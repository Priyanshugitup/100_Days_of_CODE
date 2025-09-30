// Read and print a matrix.

#include <stdio.h>

int main() {
    int rows, cols;

    printf("Enter the number of rows for the matrix:\n");
    scanf("%d", &rows);
    printf("Enter the number of columns for the matrix:\n");
    scanf("%d", &cols);

    int matrix[rows][cols];
    printf("\nEnter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nThe entered matrix is:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}