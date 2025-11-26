//Write a program to check if a number is a perfect number.
#include <stdio.h>

int main() {
    int num, sum = 0;

    // Input the number from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Perfect number check:
    // Sum all proper divisors of the number (except the number itself)
    for (i
