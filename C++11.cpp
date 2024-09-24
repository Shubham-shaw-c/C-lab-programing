//Write a program in c to check whether a string is palindrome or not without using any library function.
#include <stdio.h>
int main() {
    char str[100];
    int length = 0, isPalindrome = 1;
    printf("Enter a string: ");
    gets(str);
    while (str[length] != '\0') {
        length++;
    }
    for (int i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            isPalindrome = 0;  // Set flag to 0 if characters don't match
            break;
        }
    }
    if (isPalindrome) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }
}
