// Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

#include <stdio.h>

int main() {
    int n;
    int i;
    float sum = 0.0f;

    printf("Enter the number of terms (n) for the series:\n");
    scanf("%d", &n);

    if (n > 0) {
        sum = 1.0f;
        for (i = 2; i <= n; i++) {
            sum += (2.0f * i - 1.0f) / (2.0f * i);
        }
    }

    printf("The sum of the series up to %d terms is: %f\n", n, sum);

    return 0;
}