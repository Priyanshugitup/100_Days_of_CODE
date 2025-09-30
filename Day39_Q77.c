// Check if the elements on the diagonal of a matrix are distinct.

#include <stdio.h>

int main() {
    int size;

    printf("Enter the size of the square matrix:\n");
    scanf("%d", &size);

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

    int areDistinct = 1;

    if (size > 1) {
        for (int i = 0; i < size; i++) {
            for (int j = i + 1; j < size; j++) {
                if (matrix[i][i] == matrix[j][j]) {
                    areDistinct = 0;
                    break;
                }
            }
            if (areDistinct == 0) {
                break;
            }
        }
    }

    if (areDistinct) {
        printf("\nThe elements on the main diagonal are distinct.\n");
    } else {
        printf("\nThe elements on the main diagonal are NOT distinct.\n");
    }

    return 0;
}