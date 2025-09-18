// Write a program to check if a number is a perfect number.

#include <stdio.h>

int main() {
    int number;
    int i;
    int sum_of_divisors = 0;

    printf("Enter a positive integer to check if it's a perfect number:\n");
    scanf("%d", &number);
    for (i = 1; i <= number / 2; i++) {
        if (number % i == 0) {
            sum_of_divisors += i;
        }
    }

    if (sum_of_divisors == number) {
        printf("%d is a perfect number.\n", number);
    } else {
        printf("%d is not a perfect number.\n", number);
    }

    return 0;
}