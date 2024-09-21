//Write a program in c to add two distances given in feet and inches using structure
#include <stdio.h>
struct Distance {
    int feet;
    int inches;
};
struct Distance addDistances(struct Distance d1, struct Distance d2) {
    struct Distance result;
    result.feet = d1.feet + d2.feet;
    result.inches = d1.inches + d2.inches;
    if (result.inches >= 12) {
        result.feet += result.inches / 12;
        result.inches = result.inches % 12;
    }
    return result;
}
int main() {
    struct Distance d1, d2, result;
    printf("Enter the first distance:\n");
    printf("Feet: ");
    scanf("%d", &d1.feet);
    printf("Inches: ");
    scanf("%d", &d1.inches);
    printf("Enter the second distance:\n");
    printf("Feet: ");
    scanf("%d", &d2.feet);
    printf("Inches: ");
    scanf("%d", &d2.inches);
    result = addDistances(d1, d2);
    printf("\nThe total distance is: %d feet and %d inches\n", result.feet, result.inches);
}