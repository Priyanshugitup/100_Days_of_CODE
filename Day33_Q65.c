// Search in a sorted array using binary search.

#include <stdio.h>

int main() {
    int n;

    printf("Enter the number of elements in the array:\n");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d integers in SORTED ASCENDING order:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int key;
    printf("\nEnter the element to search for: ");
    scanf("%d", &key);

    int low = 0;
    int high = n - 1;
    int foundIndex = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == key) {
            foundIndex = mid;
            break;
        }

        if (key < arr[mid]) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    if (foundIndex != -1) {
        printf("\nElement %d found at position %d (index %d).\n", key, foundIndex + 1, foundIndex);
    } else {
        printf("\nElement %d not found in the array.\n", key);
    }

    return 0;
}