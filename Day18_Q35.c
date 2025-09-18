// Write a program to print all factors of a given number.

#include <stdio.h>

int main() {
    int number;
    int i;

    printf("Enter a positive integer to find its factors:\n");
    scanf("%d", &number);

    if (number <= 0) {
        printf("Please enter a positive integer greater than zero.\n");
        return 1;
    }

    printf("The factors of %d are: ", number);

    for (i = 1; i <= number; i++) {
        if (number % i == 0) {
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}