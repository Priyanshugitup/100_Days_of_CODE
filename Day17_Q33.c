// Write a program to check if a number is an Armstrong number.

#include <stdio.h>
#include <math.h>

int main() {
    int inputNumber;

    printf("Enter a number to check if it's an Armstrong number:\n");

    if (scanf("%d", &inputNumber) == 1) {
        if (inputNumber < 0) {
            printf("%d is not an Armstrong number.\n", inputNumber);
        } else {
            int originalNum = inputNumber;
            int order = 0;
            int tempNum = inputNumber;
            long long sum = 0;
            int digit;

            if (inputNumber == 0) {
                order = 1;
            } else {
                while (tempNum > 0) {
                    tempNum /= 10;
                    order++;
                }
            }

            tempNum = inputNumber;
            while (tempNum > 0) {
                digit = tempNum % 10;
                sum += (long long)(pow(digit, order) + 0.5);
                tempNum /= 10;
            }

            if (sum == originalNum) {
                printf("%d is an Armstrong number.\n", inputNumber);
            } else {
                printf("%d is not an Armstrong number.\n", inputNumber);
            }
        }
    } else {
        printf("Invalid input. Please enter a valid integer.\n");
    }

    return 0;
}
