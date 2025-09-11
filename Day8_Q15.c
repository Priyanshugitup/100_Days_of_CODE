// Write a program to input a character and check whether it is an uppercase alphabet,
// lowercase alphabet, digit, or special character.

#include <stdio.h>

int main(){
    char l;
    
    printf("Enter the character:\n");
    scanf("%c", &l);
    if(l>='a' && l<='z'){
        printf("Entered character is lowercase alphabet.");
    }
    else if(l>='A' && l<='Z'){
        printf("Entered character is Uppercase alphabet.");
        }
    else if(l>='0' && l<='9'){
        printf("Entered character is a digit.");
    }
    else{
        printf("Entered charecter is a special charecter.");
    }
    return 0;
}