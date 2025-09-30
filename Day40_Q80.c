// Multiply two matrices.

#include <stdio.h>

int main() {
    int rows1, cols1, rows2, cols2;

    printf("Enter First Matrix:\n");
    printf("Enter the number of rows: ");
    scanf("%d", &rows1);
    printf("Enter the number of columns: ");
    scanf("%d", &cols1);

    int matrixA[rows1][cols1];
    printf("Enter the elements for the first matrix:\n");
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            printf("Element A[%d][%d]: ", i, j);
            scanf("%d", &matrixA[i][j]);
        }
    }

    printf("\nEnter Second Matrix:\n");
    printf("Enter the number of rows: ");
    scanf("%d", &rows2);
    printf("Enter the number of columns: ");
    scanf("%d", &cols2);

    int matrixB[rows2][cols2];
    printf("Enter the elements for the second matrix:\n");
    for (int i = 0; i < rows2; i++) {
        for (int j = 0; j < cols2; j++) {
            printf("Element B[%d][%d]: ", i, j);
            scanf("%d", &matrixB[i][j]);
        }
    }

    if (cols1 != rows2) {
        printf("\nError: Matrix multiplication not possible.\n");
        printf("The number of columns in the first matrix (%d) must equal the number of rows in the second matrix (%d).\n", cols1, rows2);
        return 1;
    }

    int productMatrix[rows1][cols2];
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            productMatrix[i][j] = 0;
            for (int k = 0; k < cols1; k++) {
                productMatrix[i][j] += matrixA[i][k] * matrixB[k][j];
            }
        }
    }

    printf("\nMatrix A (%dx%d):\n", rows1, cols1);
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            printf("%d\t", matrixA[i][j]);
        }
        printf("\n");
    }

    printf("\nMatrix B (%dx%d):\n", rows2, cols2);
    for (int i = 0; i < rows2; i++) {
        for (int j = 0; j < cols2; j++) {
            printf("%d\t", matrixB[i][j]);
        }
        printf("\n");
    }

    printf("\nProduct of Matrix A * Matrix B (%dx%d)\n", rows1, cols2);
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            printf("%d\t", productMatrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}