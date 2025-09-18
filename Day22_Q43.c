// Write a program to check if a number is a strong number.

#include <stdio.h>

int main() {
    int number, originalNumber;
    int digit, i;
    long long sum_of_factorials = 0;
    long long fact_of_digit;

    printf("Enter a non-negative integer to check if it's a strong number:\n");
    scanf("%d", &number);

    if (number < 0) {
        printf("Invalid input. Strong numbers cannot be negative.\n");
        return 1;
    }

    originalNumber = number;

    do {
        digit = number % 10;
        
        fact_of_digit = 1;
        for (i = 1; i <= digit; i++) {
            fact_of_digit = fact_of_digit * i;
        }
        
        sum_of_factorials += fact_of_digit;
        
        number = number / 10;
    } while (number > 0);

    if (sum_of_factorials == originalNumber) {
        printf("%d is a strong number.\n", originalNumber);
    } else {
        printf("%d is not a strong number.\n", originalNumber);
    }

    return 0;
}