// Add two matrices.

#include <stdio.h>

int main() {
    int rows1, cols1, rows2, cols2;

    printf("Enter the number of rows of matrix 1:\n");
    scanf("%d", &rows1);
    printf("Enter the number of columns of matrix 1:\n");
    scanf("%d", &cols1);

    int matrixA[rows1][cols1];
    printf("\nEnter the elements of the matrix 1:\n");
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            scanf("%d", &matrixA[i][j]);
        }
    }

    printf("Enter the number of rows of matrix 1:\n");
    scanf("%d", &rows2);
    printf("Enter the number of columns of matrix 1:\n");
    scanf("%d", &cols2);
    
    int matrixB[rows2][cols2];
    printf("\nEnter the elements of the matrix 2:\n");
    for (int i = 0; i < rows2; i++) {
        for (int j = 0; j < cols2; j++) {
            scanf("%d", &matrixB[i][j]);
        }
    }

    if (rows1 != rows2 || cols1 != cols2) {
        printf("\nError: Matrices must have the same dimensions for addition.\n");
        return 1;
    }

    int sumMatrix[rows1][cols1];

    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            sumMatrix[i][j] = matrixA[i][j] + matrixB[i][j];
        }
    }

    printf("\nThe sum of the two matrices is:\n");
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            printf("%d\t", sumMatrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}