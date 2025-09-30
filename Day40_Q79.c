// Perform diagonal traversal of a matrix.

#include <stdio.h>

int main() {
    int rows, cols;

    printf("Enter the number of rows:\n");
    scanf("%d", &rows);
    printf("Enter the number of columns:\n");
    scanf("%d", &cols);

    int matrix[rows][cols];
    printf("Enter the elements for the %dx%d matrix:\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i, j);
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

    printf("\nDiagonal traversal of the matrix:\n");
    int maxSum = (rows - 1) + (cols - 1);

    for (int line = 0; line <= maxSum; line++) {
        for (int i = 0; i < rows; i++) {
            int j = line - i;
            if (j >= 0 && j < cols) {
                printf("%d ", matrix[i][j]);
            }
        }
    }
    printf("\n");

    return 0;
}