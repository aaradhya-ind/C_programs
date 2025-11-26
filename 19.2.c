//Write a program to find the sum of digits of a number.
#include <stdio.h>

int main() {
    int num, sum = 0, remainder;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Loop to extract digits and add them
    while (num != 0) {
        remainder = num % 10;   // Get last digit
        sum += remainder;        // Add digit to sum
        num /= 10;               // Remove last digit
    }

    // Print the result
    printf("Sum of digits: %d\n", sum);

    return 0;
}
