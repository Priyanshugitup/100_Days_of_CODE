// Count characters in a string without using built-in length functions.
#include <stdio.h>

int main(){
    char str[40];
    printf("Enter a string: ");
    fgets(str, 40, stdin);
    int size = 0;
    for(int i=0;str[i]!='\0';i++){
        size = size +1;
    }
    printf("The size of string is: %d",size);
    return 0;
}