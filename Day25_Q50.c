// Write a program to print the following pattern:
// *****
//  ****
//   ***
//    **
//     *

#include <stdio.h>
int main() {
    int rows = 5;
    int i, j, k;

    for (i = 1; i <= rows; i++) {
        
        for (j = 1; j <= i - 1; j++) {
            printf(" ");
        }
        
        for (k = 1; k <= rows - i + 1; k++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}