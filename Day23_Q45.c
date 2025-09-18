// Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.

#include <stdio.h>
int main() {
    int n;
    int i;
    float sum = 0.0;

    printf("Enter the number of terms (n) for the series:\n");
    scanf("%d", &n);

    if (n > 0) {
        sum = 1.0;
        for (i = 2; i <= n; i++) {
            sum += (2.0 * i - 1.0) / (2.0 * i);
        }
    }

    printf("The sum of the series up to %d terms is: %f\n", n, sum);

    return 0;
}