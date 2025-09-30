// Rotate an array to the right by k positions.

#include <stdio.h>

void reverseArray(int arr[], int start, int end) {
    int temp;
    while (start < end) {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int main() {
    const int MAX_CAPACITY = 100;
    int arr[MAX_CAPACITY];
    int n, k;

    printf("Enter the number of elements in the array (max %d):\n", MAX_CAPACITY);
    scanf("%d", &n);

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number of positions to rotate right:\n");
    scanf("%d", &k);

    printf("\nOriginal array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    if (n > 1) {
        k = k % n;
        if (k < 0) {
            k = k + n;
        }

        if (k > 0) {
            reverseArray(arr, 0, n - 1);
            reverseArray(arr, 0, k - 1);
            reverseArray(arr, k, n - 1);
        }
    }

    printf("Array after rotating right by %d positions: ", k);
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}