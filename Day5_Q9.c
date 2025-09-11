#include <stdio.h>

int main(){
    int principal,rate,time;
    printf("Enter value of principal:");
    scanf("%d", &principal);
    printf("Enter value of rate:");
    scanf("%d", &rate);
    printf("Enter value of time:");
    scanf("%d", &time);
    printf("Simple Interest for given data is %d", (principal*rate*time)/100);
    return 0;
}