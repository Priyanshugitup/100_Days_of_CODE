// Insert an element in an array at a given position.

#include <stdio.h>

int main() {
    const int MAX_CAPACITY = 100;
    int arr[MAX_CAPACITY];
    int n;

    printf("Enter the number of elements in the array (max %d): ", MAX_CAPACITY - 1);
    scanf("%d", &n);

    if (n > 0) {
        printf("Enter %d integers:\n", n);
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }
    }

    int key, position;
    printf("\nEnter the element to insert: ");
    scanf("%d", &key);
    printf("Enter the position to insert at (1 to %d): ", n + 1);
    scanf("%d", &position);

    if (position < 1 || position > n + 1) {
        printf("\nInvalid position. Please enter a position between 1 and %d.\n", n + 1);
    } else {
        int index = position - 1;
        for (int i = n - 1; i >= index; i--) {
            arr[i + 1] = arr[i];
        }
        arr[index] = key;
        n++;

        printf("\nArray after insertion: ");
        for (int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}