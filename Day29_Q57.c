// Find the sum of array elements.

#include <stdio.h>

int main() {
    int n;

    printf("Enter the number of elements you want to sum:\n");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    printf("\nThe sum of the array elements is: %d\n", sum);

    return 0;
}