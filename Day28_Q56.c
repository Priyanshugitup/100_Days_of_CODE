// Read and print elements of a one-dimensional array.

#include <stdio.h>

int main() {
    int arr[50];
    int n;
    int i;

    printf("Enter the number of elements you want to store (up to 50):\n");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("\nThe elements in the array are:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}