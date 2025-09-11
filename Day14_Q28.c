// Write a program to print the product of even numbers from 1 to n.

#include <stdio.h>

int main(){
    int n;
    int i;
    int product = 1;
    printf("Enter the number of EVEN numbers:\n");
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {   if(i % 2 == 0){
        product *= i;
    }
    }
    printf("PRODUCT of the %d EVEN numbers = %d",n, product);
    return 0;
}