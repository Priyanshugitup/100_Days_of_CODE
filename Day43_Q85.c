// Reverse a string.

#include <stdio.h>
int main(){
    char str[40];
    printf("Enter a string: ");
    gets(str);
    int size = 0;
    for(int i=0;str[i]!='\0';i++){
        size = size +1;
    }
    for(int i=0,j=size-1;i<=j;i++,j--){
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
    puts("The reverse of Given string is: ");
    puts(str);
    return 0;
}