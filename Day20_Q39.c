// Write a program to find the product of odd digits of a number.

#include <stdio.h>

int main() {
    int number, originalNumber;
    int product = 1;
    int digit;
    int foundOddDigit = 0;

    printf("Enter an integer to find the product of its odd digits:\n");
    scanf("%d", &number);

    originalNumber = number;
    if (number < 0) {
        number = -number;
    }
    
    while (number > 0) {
        digit = number % 10;
        
        if (digit % 2 != 0) {
            foundOddDigit = 1;
            product = product * digit;
        }
        
        number = number / 10;
    }

    if (foundOddDigit) {
        printf("The product of the odd digits in %d is %d.\n", originalNumber, product);
    } else {
        printf("There are no odd digits in %d.\n", originalNumber);
    }

    return 0;
}