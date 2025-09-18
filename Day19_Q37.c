// Write a program to find the LCM of two numbers.

#include <stdio.h>

int main() {
    int num1, num2, a, b, temp, hcf, lcm;

    printf("Enter the first positive integer:\n");
    scanf("%d", &num1);
    printf("Enter the second positive integer:\n");
    scanf("%d", &num2);

    a = num1;
    b = num2;

    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }

    hcf = a;
    lcm = (num1 / hcf) * num2;
    printf("The LCM of %d and %d is %d.\n", num1, num2, lcm);

    return 0;
}