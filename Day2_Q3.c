#include <stdio.h>

int main(){
    int length,breadth;
    printf("Enter length of the rectangle:");
    scanf("%d", &length);
    printf("Enter breadth of the rectangle:");
    scanf("%d", &breadth);
    printf("The area and perimeter of the rectangle is %d and %d respectively", length*breadth,2*(length+breadth));
    return 0;
}