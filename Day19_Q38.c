// Write a program to find the sum of digits of a number.

#include <stdio.h>

int main() {
    int number, originalNumber;
    int sum = 0;
    int digit;

    printf("Enter an integer to find the sum of its digits:\n");
    scanf("%d", &number);
    originalNumber = number;
    if (number < 0) {
        number = -number;
    }

    while (number > 0) {
        digit = number % 10;
        sum += digit;
        number = number / 10;
    }

    printf("The sum of the digits of %d is %d.\n", originalNumber, sum);
    return 0;
}