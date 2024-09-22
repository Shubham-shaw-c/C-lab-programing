//Write a program in c to implement to copy concatinate, compare using string.h header file.
#include <stdio.h>
#include <string.h>
int main() {
    char str1[100], str2[100], str3[100];
    printf("Enter the first string: ");
    gets(str1);
    printf("Enter the second string: ");
    gets(str2);
    strcpy(str3, str1);
    printf("\nAfter copying, str3: %s\n", str3);
    strcat(str1, str2);
    printf("After concatenation, str1: %s\n", str1);
    int comparison = strcmp(str1, str2);
    if (comparison == 0) {
        printf("str1 and str2 are equal.\n");
    } else if (comparison > 0) {
        printf("str1 is greater than str2.\n");
    } else {
        printf("str1 is less than str2.\n");
    }
}