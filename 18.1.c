//Write a program to print all factors of a given number.
#include <stdio.h>

int main() {
    int num, i;

    // Take input from user
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Factors of %d are: ", num);

    // Loop to find all factors
    for (i = 1; i <= num; i++) {
        if (num % i == 0) {   // If i divides num completely
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}
