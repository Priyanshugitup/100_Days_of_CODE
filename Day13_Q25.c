// Write a program to implement a basic calculator using switch-case for +, -, *, /, %

#include <stdio.h>

int main(){
    int num1,num2,sum,diff,multiplication,Remainder;
    float Division;
    char choice;
    while(1) {
    printf("Enter num1:\n");
    scanf("%d", &num1);
    printf("Enter num2:\n");
    scanf("%d", &num2);
    printf("Enter your CHOICE (+, -, *, /, %%):\n");
    scanf(" %c", &choice);
    switch (choice){
        case '+': sum = num1 + num2;
        printf("sum = %d", sum);
        break;
         case '-': diff = num1 - num2;
        printf("diff = %d", diff);
        break;
        case '*': multiplication = num1 * num2;
        printf("multiplication = %d", multiplication);
        break;
        case '/': 
        if(num2 == 0){
        printf("'ERROR! Division by ZERO is not allowed.");
        }
        else{
        Division = (float)num1 / num2;
        printf("Division = %f", Division);
        }
        break;
        case '%':
        if(num2 == 0){
        printf("'ERROR! Division by ZERO is not allowed.");
        }
        else{
         Remainder = num1 % num2;
        printf("Remainder = %d", Remainder);
        }
        break;
        default:
        printf("Invalid choice");
        break;
    }
    printf("\n\n----------------------\n");
}
    return 0;
}