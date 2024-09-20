//Wap in c to count Vowels and Consonat in a string using switchcase.
#include <stdio.h>
#include <ctype.h>
int main() {
    char str[100];
    int vowels = 0, consonants = 0, i = 0;
    printf("Enter a string: ");
    gets(str);
    while (str[i] != '\0') {
        char ch = tolower(str[i]);
        if ((ch >= 'a' && ch <= 'z')) {
            switch (ch) {
                case 'a':
                case 'e':
                case 'i':
                case 'o':
                case 'u':
                    vowels++;
                    break;
                default:
                    consonants++;
                    break;
            }
        }
        i++;
    }
    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);
}