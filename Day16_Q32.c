// Write a program to check if a number is a palindrome.

#include <stdio.h>
int main() {
    int n, reversed_num = 0, remainder, original_num;

    printf("Enter an integer:\n");
    scanf("%d", &n);

    original_num = n;

    while (n > 0) {
        remainder = n % 10;
        reversed_num = reversed_num * 10 + remainder;
        n /= 10;
    }

    if (original_num == reversed_num) {
        printf("%d is a palindrome.\n", original_num);
    } else {
        printf("%d is not a palindrome.\n", original_num);
    }

    return 0;
}