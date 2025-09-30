// Find the maximum and minimum element in an array.

#include <stdio.h>

int main() {
    int n;

    printf("Enter the number of elements in the array:\n");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int maxElement = arr[0];
    int minElement = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > maxElement) {
            maxElement = arr[i];
        }

        if (arr[i] < minElement) {
            minElement = arr[i];
        }
    }

    printf("\nMaximum element is: %d\n", maxElement);
    printf("Minimum element is: %d\n", minElement);

    return 0;
}