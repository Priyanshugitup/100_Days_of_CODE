// Count even and odd numbers in an array.

#include <stdio.h>

int main() {
    int n;
    int evenCount = 0;
    int oddCount = 0;

    printf("Enter the number of elements in the array:\n");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }

    printf("Total Even numbers: %d\n", evenCount);
    printf("Total Odd numbers: %d\n", oddCount);

    return 0;
}