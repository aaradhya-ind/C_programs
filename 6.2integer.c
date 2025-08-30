//write a program to input an integer and check whether it is positive, negative or zero using nested if-else statement.

#include <stdio.h>
 int main() {
    int number;

    // Input an integer
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Check if the number is positive, negative or zero using nested if-else statement
    if (number > 0) {
        printf("%d is positive.\n", number);
    } else {
        if (number < 0) {
            printf("%d is negative.\n", number);
        } else {
            printf("The number is zero.\n");
        }
    }

    return 0;
 }