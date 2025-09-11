// Write a program to calculate the factorial of a number.

#include <stdio.h>

int main(){
    int n;
    int i;
    long long factorial = 1;
    printf("Enter number:\n");
    scanf("%d", &n);
    if(n < 0){
        printf("ERROR!, The factorial of negative integers is undefined");
        return 1;
    }
    for(i = 1; i <= n; i++){
        factorial *= i;
    }
    printf("Factorial = %lld",factorial);
    return 0;
}