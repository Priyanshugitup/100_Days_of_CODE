// Find the second largest element in an array.

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

    int largest, secondLargest;

    if (arr[0] > arr[1]) {
        largest = arr[0];
        secondLargest = arr[1];
    } else {
        largest = arr[1];
        secondLargest = arr[0];
    }

    for (int i = 2; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] < largest) {
            secondLargest = arr[i];
        }
    }

    if (largest == secondLargest) {
        printf("\nThere is no second largest element in the array.\n");
    } else {
        printf("\nThe second largest element is: %d\n", secondLargest);
    }

    return 0;
}