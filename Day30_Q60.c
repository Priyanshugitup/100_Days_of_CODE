// Count positive, negative, and zero elements in an array.

#include <stdio.h>

int main() {
    int n;
    int positiveCount = 0;
    int negativeCount = 0;
    int zeroCount = 0;

    printf("Enter the number of elements in the array:\n");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            positiveCount++;
        } else if (arr[i] < 0) {
            negativeCount++;
        } else {
            zeroCount++;
        }
    }

    printf("Total Positive numbers: %d\n", positiveCount);
    printf("Total Negative numbers: %d\n", negativeCount);
    printf("Total Zeroes: %d\n", zeroCount);

    return 0;
}
