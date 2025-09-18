// Write a program to print the following pattern:

// *

// *
// *
// *

// *
// *
// *
// *
// *

// *
// *
// *

// *

#include <stdio.h>
int main() {
    int num_blocks = 5;
    int stars_to_print = 1;
    int change = 2;
    int middle_block = (num_blocks / 2) + 1;
    int i, j;

    for (i = 1; i <= num_blocks; i++) {
        for (j = 0; j < stars_to_print; j++) {
            printf("*\n");
        }
        
        if (i < num_blocks) {
            printf("\n");
        }
        
        if (i == middle_block) {
            change = -2;
        }
        
        stars_to_print += change;
    }

    return 0;
}