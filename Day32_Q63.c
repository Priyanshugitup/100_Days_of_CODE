// Merge two arrays.

#include <stdio.h>

int main() {
    int size1, size2;

    printf("Enter the size of the first array:\n");
    scanf("%d", &size1);
    int arr1[size1];
    if (size1 > 0) {
        printf("Enter %d integers for the first array:\n", size1);
        for (int i = 0; i < size1; i++) {
            scanf("%d", &arr1[i]);
        }
    }

    printf("\nEnter the size of the second array:\n");
    scanf("%d", &size2);
    int arr2[size2];
    if (size2 > 0) {
        printf("Enter %d integers for the second array:\n", size2);
        for (int i = 0; i < size2; i++) {
            scanf("%d", &arr2[i]);
        }
    }

    int mergedSize = size1 + size2;
    int mergedArr[mergedSize];

    for (int i = 0; i < size1; i++) {
        mergedArr[i] = arr1[i];
    }

    for (int i = 0; i < size2; i++) {
        mergedArr[size1 + i] = arr2[i];
    }

    printf("\nMerged array: ");
    if (mergedSize == 0) {
        printf("The merged array is empty.\n");
    } else {
        for (int i = 0; i < mergedSize; i++) {
            printf("%d ", mergedArr[i]);
        }
        printf("\n");
    }

    return 0;
}