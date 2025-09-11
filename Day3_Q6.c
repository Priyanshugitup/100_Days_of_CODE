#include <stdio.h>

int main(){
    int num1;
    printf("Enter the value of num1:");
    scanf("%d", &num1);
    int num2;
    printf("Enter the value of num2:");
    scanf("%d", &num2);
    printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);
    int temp = num1;
    num1 = num2;
    num2 = temp;
    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}