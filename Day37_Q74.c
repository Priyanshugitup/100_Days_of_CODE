// Find the transpose of a matrix.

#include <stdio.h>

int main() {
    int rows, cols;

    printf("Enter the number of rows for the matrix:\n");
    scanf("%d", &rows);
    printf("Enter the number of columns for the matrix:\n");
    scanf("%d", &cols);

    int originalMatrix[rows][cols];
    printf("\nEnter the elements of the matrix:\n");

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &originalMatrix[i][j]);
        }
    }

    printf("\nThe entered matrix is:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", originalMatrix[i][j]);
        }
        printf("\n");
    }

    int transposeMatrix[cols][rows];

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transposeMatrix[j][i] = originalMatrix[i][j];
        }
    }

    printf("\nThe transpose of the matrix is:\n");
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            printf("%d\t", transposeMatrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}