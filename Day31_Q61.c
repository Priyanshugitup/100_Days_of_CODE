// Search for an element in an array using linear search.

#include <stdio.h>

int main() {
    int n;
    int key;
    int foundIndex = -1;

    printf("Enter the number of elements in the array:\n");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nEnter the element to search for: ");
    scanf("%d", &key);

    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            foundIndex = i;
            break;
        }
    }

    if (foundIndex != -1) {
        printf("\nElement %d found at position %d (index %d).\n", key, foundIndex + 1, foundIndex);
    } else {
        printf("\nElement %d not found in the array.\n", key);
    }

    return 0;
}