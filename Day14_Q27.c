// Write a program to print the sum of the first n odd numbers.

#include <stdio.h>

int main(){
    int n;
    int i;
    int sum = 0;
    printf("Enter the amount of numbers:\n");
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        sum += (2*i - 1);
    }
    printf("sum of the first n ODD numbers = %d", sum);
    return 0;
}