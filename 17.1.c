//Write a program to check if a number is an Armstrong number.
#include <stdio.h>

int main() {
    int num, original, remainder, result = 0;

    // Get number from user
    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;   // Store original number

    // Calculate the sum of cubes of digits
    while (num != 0) {
        remainder = num % 10;          // Extract last digit
        result += remainder * remainder * remainder; // Cube and add
        num /= 10;                      // Remove last digit
