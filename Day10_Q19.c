// Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

#include <stdio.h>

int main(){
    int side1,side2,side3;
    printf("Enter length of sides of the triangle.\n");
    scanf("%d %d %d", &side1,&side2,&side3);
    if(side1 == side2 && side2 == side3){
        printf("\nIt is an EQUILATERAL triangle.");
    }
    else if(side1 == side2 && side3 != side1){
        printf("\nIt is an ISOSCELES triangle.");
    }
    else if(side2 == side3 && side1 != side2){
        printf("\nIt is an ISOSCELES triangle.");
    }
    else if(side1 == side3 && side3 != side2){
        printf("\nIt is an ISOSCELES triangle.");
    }
    else if(side1 != side2 && side2 != side3 && side3 != side1){
        printf("\nIt is an SCALENE triangle.");
    }
    return 0;
}