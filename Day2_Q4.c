#include <stdio.h>

int main(){
    int radius;
    printf("Enter radius of the Circle:");
    scanf("%d", &radius);
    printf("The Area and Circumference of Circle of given radius is %f and %f respectively", 3.14*radius*radius,2*3.14*radius);
    return 0;
}