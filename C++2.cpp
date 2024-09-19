//On a sunnyday in Btech Cse section C xyz sir entered and checked whether Aakash Kumar is present ot not.write a  c programm to check
#include <stdio.h>
#include <string.h>
int main() {
    int n, found = 0;
    char name[50];
    printf("Enter the number of students in the class: ");
    scanf("%d", &n);
    char students[n][50];
    printf("Enter the names of the students:\n");
    for (int i = 0; i < n; i++) {
        scanf(" %[^\n]", students[i]);
        char target[] = "Akash Kumar";
        for (int i = 0; i < n; i++) {
            if (strcmp(students[i], target) == 0) {
                found = 1;
                break;
            }
        }
        if (found) {
            printf("Akash Kumar is present in the class.\n");
        }else {
            printf("Akash Kumar is absent in the class.\n");
        }
    }
}