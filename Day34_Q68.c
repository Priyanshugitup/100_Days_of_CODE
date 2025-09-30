// Delete an element from an array.

#include <stdio.h>

int main() {
    const int MAX_CAPACITY = 100;
    int arr[MAX_CAPACITY];
    int n;

    printf("Enter the number of elements in the array (max %d):\n", MAX_CAPACITY);
    scanf("%d", &n);

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int key;
    printf("\nEnter the element to delete: ");
    scanf("%d", &key);

    int foundIndex = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            foundIndex = i;
            break;
        }
    }

    if (foundIndex != -1) {
        for (int i = foundIndex; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        n--;

        printf("\nArray after deleting %d: ", key);
        if (n == 0) {
            printf("The array is now empty.\n");
        } else {
            for (int i = 0; i < n; i++) {
                printf("%d ", arr[i]);
            }
            printf("\n");
        }
    } else {
        printf("\nElement %d not found in the array.\n", key);
    }

    return 0;
}