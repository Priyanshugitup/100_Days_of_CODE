// Write a program to print the following pattern:
//     5
//    45
//   345
//  2345
// 12345

#include <stdio.h>
int main() {
    int rows = 5;
    int i, j, k;

    for (i = rows; i >= 1; i--) {
        
        for (j = 1; j <= i - 1; j++) {
            printf(" ");
        }
        for (k = i; k <= rows; k++) {
            printf("%d", k);
        }
        printf("\n");
    }

    return 0;
}