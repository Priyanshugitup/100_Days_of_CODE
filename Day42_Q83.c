// Count vowels and consonants in a string.

#include <stdio.h>
int main() {
    char str[150];
    int vowels = 0, consonants = 0;
    int i = 0;
    printf("Enter a string: ");
    fgets(str, 150, stdin);
    while (str[i] != '\0') {
        char ch = str[i];
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            vowels++;
        }
        else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            consonants++;
        }
        i++;
    }
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d", consonants);
    return 0;
}