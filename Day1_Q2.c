#include <stdio.h>

int main(){
    int x,y;
    printf("Enter first number:");
    scanf("%d", &x);
    printf("Enter second number:");
    scanf("%d", &y);
    printf("The sum, difference, product, and quotient of given two numbers is %d,%d,%d,%d respectively", x+y,x-y,x*y,x/y);
    return 0;
}