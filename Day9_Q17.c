// Write a program to find the roots of a quadratic equation and categorize them.

#include <stdio.h>
#include <math.h>
int main(){
    float a,b,c,discriminant,root1,root2;
    printf("Enter the coefficient a, b, and c:\n");
    scanf("%f %f %f", &a,&b,&c);
    printf("The Quadratic Equation is:\n %.2fx^2 + (%.2fx) + (%.2f)\n",a,b,c);
    discriminant = (b*b) - (4*a*c);
    root1 = (-b + sqrtf(discriminant)) / (2*a);
    root2 = (+b + sqrtf(discriminant)) / (2*a);
    if(discriminant > 0){
        printf("\nRoots of the given equation are REAL and DIFFERENT.\n");
        printf("Root 1 = %.2f\n", root1);
        printf("Root 2 = %.2f\n", root2);
    }
    else if(discriminant == 0){
        printf("\nRoots of the given equation are REAL and EQUAL.\n");
        printf("Root 1 = Root 2 = %.2f", root1);
    }
    else if(discriminant < 0){
        printf("\nRoots of the given equation are COMPLEX and DIFFERENT.\n");

    }

    return 0;
}