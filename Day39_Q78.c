// Find the sum of main diagonal elements for a square matrix.

#include <stdio.h>

int main() {
    int size;

    printf("Enter the size of the square matrix:\n");
    scanf("%d", &size);

    if (size <= 0) {
        printf("\nMatrix size must be positive.\n");
        return 1;
    }

    int matrix[size][size];

    printf("Enter the elements for the %dx%d matrix:\n", size, size);
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nThe entered matrix is:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
    
    long long sum = 0;
    for (int i = 0; i < size; i++) {
        sum += matrix[i][i];
    }

    printf("\nThe sum of the main diagonal elements is: %lld\n", sum);

    return 0;
}