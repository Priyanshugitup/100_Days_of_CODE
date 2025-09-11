// Write a program to input a character and check whether it is a vowel or consonant using if–else.
#include <stdio.h>

int main(){
    char l;
    printf("Enter the Alphabet\n");
    scanf("%c", &l);
    if(l == 'a'||l=='e'||l=='i'||l=='o'||l=='u'||l=='A'||l=='E'||l=='I'||l=='O'||l=='U'){
        printf("Entered letter is a Vowel.");
    }
    else{
        printf("Entered letter is a Consonant.");
    }
    return 0;
}