//Write a program to find the product of odd digits of a number.
#include <stdio.h>

int main() {
    int num, digit;
    int product = 1;        // Start product with 1
    int foundOdd = 0;       // To check if any odd digit exists

    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Process each digit
    while (num != 0) {
        digit = num % 10;          // Extract last digit

        if (digit % 2 != 0) {      // Check if digit is odd
            product *= digit;      // Multiply
            foundOdd = 1;          // Mark that an odd digit was found
        }

        num /= 10;                 // Remove last digit
    }

    // If no odd digits were found
    if (!foundOdd) {
        printf("No odd digits found.\n");
    } else {
        printf("Product of odd digits: %d\n", product);
    }

    return 0;
}
