// Write a program to take a number as input and print its equivalent binary representation.

#include <stdio.h>
int main() {
    int num;
    int i;
    int leadingZero = 1;

    printf("Enter a non-negative integer:\n");
    if (scanf("%d", &num) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    if (num < 0) {
        printf("Error: The number must be non-negative.\n");
        return 1;
    }

    printf("Binary representation: ");

    if (num == 0) {
        printf("0");
    } else {
        for (i = sizeof(int) * 8 - 1; i >= 0; i--) {
            if ((num >> i) & 1) {
                leadingZero = 0;
                printf("1");
            } else {
                if (!leadingZero) {
                    printf("0");
                }
            }
        }
    }

    printf("\n");
    return 0;
}