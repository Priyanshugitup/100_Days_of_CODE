// Write a program to input a year and check whether it is a leap year or not using conditional statements.
#include <stdio.h>

int main(){
    int year;
    printf("Enter Year:\n");
    scanf("%d", &year);
    if(year % 4 == 0 && year % 100 != 0){
        printf("Entered year is a Leap year");
    }
    else if(year % 400 == 0){
        printf("Entered year is a Leap year");
    }
    else{
        printf("Entered Year is not a Leap Year");
    }
    return 0;
}