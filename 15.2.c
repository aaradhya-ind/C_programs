//Write a program to reverse a given number.
#include <stdio.h>

int main() {
    int num, reversed = 0, remainder;

    // Ask the user for a number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Reverse the number using a loop
    while (num != 0) {
        remainder = num % 10;            // Get the last digit
        reversed = reversed * 10 + remainder; // Append digit to reversed number
        num /= 10;                       // Remove last digit from num
    }

    // Print the reversed number
    printf("Reversed number: %d\n", reversed);

    return 0;
}
