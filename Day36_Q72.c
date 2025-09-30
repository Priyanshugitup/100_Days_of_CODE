// Find the sum of all elements in a matrix.

#include <stdio.h>

int main() {
    int rows, cols;

    printf("Enter the number of rows for the matrix:\n");
    scanf("%d", &rows);
    printf("Enter the number of columns for the matrix:\n");
    scanf("%d", &cols);

    int matrix[rows][cols];
    int sum = 0;
    printf("\nEnter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j];
        }
    }

    printf("\nThe sum of all elements in the matrix is: %d\n", sum);

    return 0;
}