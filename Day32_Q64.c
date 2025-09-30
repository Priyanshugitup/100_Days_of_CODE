// Find the digit that occurs the most times in an integer number.

#include <stdio.h>

int main() {
    long long num;

    printf("Enter an integer number:\n");
    scanf("%lld", &num);

    long long tempNum = num;
    int digits[20];
    int digitCount = 0;

    if (tempNum < 0) {
        tempNum = -tempNum;
    }

    do {
        digits[digitCount] = tempNum % 10;
        digitCount++;
        tempNum /= 10;
    } while (tempNum > 0);

    int frequency[10] = {0};
    for (int i = 0; i < digitCount; i++) {
        frequency[digits[i]]++;
    }

    int mostFrequentDigit = 0;
    int maxCount = 0;
    for (int i = 0; i < 10; i++) {
        if (frequency[i] > maxCount) {
            maxCount = frequency[i];
            mostFrequentDigit = i;
        }
    }

    printf("\nIn the number %lld, the most frequent digit is %d.\n", num, mostFrequentDigit);
    printf("It appears %d time(s).\n", maxCount);

    return 0;
}