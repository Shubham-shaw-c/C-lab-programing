//Write a program to access array element using pointer
#include <stdio.h>
int main() {
    int arr[5];
    int *ptr;
    ptr = arr;
    printf("Enter 5 integers:\n");
    for (int i = 0; i < 5; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", ptr + i);
    }
    printf("\nThe elements of the array are:\n");
    for (int i = 0; i < 5; i++) {
        printf("Element %d: %d\n", i + 1, *(ptr + i));
    }
}