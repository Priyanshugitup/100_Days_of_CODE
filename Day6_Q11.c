// Write a program to input an integer and check whether it is even or odd using if–else.

#include <stdio.h>

int main(){
    int n;
    printf("Enter an integer value:");
    scanf("%d", &n);
    if(n%2==0){
        printf("Eneterd value is even");
    }
    else{
        printf("Enter value is odd");
    }
    return 0;
}