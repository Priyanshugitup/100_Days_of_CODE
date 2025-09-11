// Write a program to input three numbers and find the largest among them using if–else.

#include <stdio.h>

int main(){
    int num1,num2,num3;
    printf("Enter num1:\n");
    scanf("%d", &num1);
    printf("Enter num2:\n");
    scanf("%d", &num2);
    printf("Enter num3:\n");
    scanf("%d", &num3);
    if(num1>num2 && num1>num3){
        printf("num1 is largest among all.");
    }
    else if(num2>num1 && num2>num3){
        printf("num2 is largest among all.");
    }
    else if(num3>num1 && num3>num2){
        printf("num3 is largest among all.");
    }
    return 0;
}