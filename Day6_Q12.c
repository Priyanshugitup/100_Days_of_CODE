#include <stdio.h>

int main(){
    int num;
    printf("Enter the value of Integer:\n");
    scanf("%d", &num);
    if(num >= 0){
        if(num == 0){
            printf("Entered value is zero");
            }
            else{
                printf("Entered value is Positive");
            }
    }
    else{
        printf("Entered value is Negative");
    }

    return 0;
}