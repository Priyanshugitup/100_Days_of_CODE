// Write a program to print numbers from 1 to n.

#include <stdio.h>

int main(){
    int n;
    int i;
    printf("\nEnter the total amount of the numbers you want's to display:\n");
    scanf("%d", &n);
    for(i = 1; i <= n; i++){
        printf("%d\t", i);
    }
    return 0;
}