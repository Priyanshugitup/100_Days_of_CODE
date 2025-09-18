// Write a program to print all the prime numbers from 1 to n.

#include <stdio.h>
int main() {
    int n, i, j;
    int isPrime;

    printf("Enter the upper limit (n) to find prime numbers:\n");
    scanf("%d", &n);
    printf("Prime numbers between 1 and %d are:\n", n);

    for (i = 2; i <= n; i++) {
        isPrime = 1;
        for (j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime == 1) {
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}