// Write a program to reverse a given number.

#include <stdio.h>

int main(){
    int num,remainder;
    int reversed_number = 0;
    printf("Enter NUMBER:\n");
    scanf("%d",&num);
    int original_number = num;
    while(num != 0){
        remainder = num % 10;
        reversed_number = (reversed_number * 10) + remainder;
        num /= 10;
    }
    printf("The reverse of the given number %d is:\n%d",original_number,reversed_number);
    return 0;
}