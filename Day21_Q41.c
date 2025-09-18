// Write a program to swap the first and last digit of a number.

#include <stdio.h>

int main() {
    int number, originalNumber, swappedNumber;
    int firstDigit, lastDigit, temp;
    long long powerOf10 = 1; 
    printf("Enter an integer to swap its first and last digits:\n");
    scanf("%d", &originalNumber);

    number = originalNumber;

    if (number > -10 && number < 10) {
        swappedNumber = number;
    } else {
        int sign = (number < 0) ? -1 : 1;
        number = (number < 0) ? -number : number;

        lastDigit = number % 10;
        
        temp = number;
        while (temp >= 10) {
            temp = temp / 10;
            powerOf10 = powerOf10 * 10;
        }
        firstDigit = temp;

        int middleValue = number - (firstDigit * powerOf10) - lastDigit;

        swappedNumber = (lastDigit * powerOf10) + middleValue + firstDigit;
        
        swappedNumber *= sign;
    }

    printf("Original number: %d\n", originalNumber);
    printf("Number after swapping first and last digits: %d\n", swappedNumber);

    return 0;
}