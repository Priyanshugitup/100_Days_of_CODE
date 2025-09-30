// check if a matrix is symmetric.

#include <stdio.h>

int main() {
    int rows, cols;

    printf("Enter the number of rows for the matrix: ");
    scanf("%d", &rows);
    printf("Enter the number of columns for the matrix: ");
    scanf("%d", &cols);

    if (rows != cols) {
        printf("\nThe matrix is not symmetric because it is not a square matrix.\n");
        return 0;
    }

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

    int isSymmetric = 1;

    for (int i = 0; i < rows; i++) {
        for (int j = i + 1; j < cols; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                isSymmetric = 0;
                break;
            }
        }
        if (isSymmetric == 0) {
            break;
        }
    }

    if (isSymmetric) {
        printf("\nThe matrix is symmetric.\n");
    } else {
        printf("\nThe matrix is not symmetric.\n");
    }

    return 0;
}