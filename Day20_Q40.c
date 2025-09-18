// Write a program to find the 1’s complement of a binary number and print it.

#include <stdio.h>

int main() {
    char binaryNumber[100];
    int i;
    int isBinary = 1;

    printf("Enter a binary number:\n");
    scanf("%s", binaryNumber);

    for (i = 0; binaryNumber[i] != '\0'; i++) {
        if (binaryNumber[i] != '0' && binaryNumber[i] != '1') {
            isBinary = 0;
            break;
        }
    }

    if (isBinary) {
        printf("The original binary number is: %s\n", binaryNumber);
        
        for (i = 0; binaryNumber[i] != '\0'; i++) {
            if (binaryNumber[i] == '0') {
                binaryNumber[i] = '1';
            } else {
                binaryNumber[i] = '0';
            }
        }
        
        printf("The 1's complement is: %s\n", binaryNumber);
    } else {
        printf("Error: The input '%s' is not a valid binary number.\n", binaryNumber);
    }

    return 0;
}