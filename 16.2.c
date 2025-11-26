//Write a program to check if a number is a palindrome.
#include <stdio.h>

int main() {
    int num, original, reversed = 0, remainder;

    // Get number from user
    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;   // Store original number to compare later

    // Reverse the number
    while (num != 0) {
        remainder = num % 10;               // Get last digit
        reversed = reversed * 10 + remainder; // Build reversed number
        num /= 10;                           // Remove last digit
    }

    // Check if original and reversed match
    if (original == reversed)
        printf("%d is a palindrome number.\n", original);
    else
        printf("%d is not a palindrome number.\n", original);

    return 0;
}
