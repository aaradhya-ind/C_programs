//Write a program to swap the first and last digit of a number.
#include <stdio.h>

int main() {
    int num, original, firstDigit, lastDigit, temp, divisor = 1;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;  // Store original value

    lastDigit = num % 10;  // Extract last digit

    // Find first digit and divisor (like 1000 for 4-digit number)
    while (num >= 10) {
        num /= 10;
        divisor *= 10;
    }
    firstDigit = num;

    // Swap operation:
    // Remove first digit and last digit from the number, then rebuild
    temp = original % divisor;           // Remove first digit
    temp = temp / 10;                    // Remove last digit

    int swapped = lastDigit * divisor + temp * 10 + firstDigit;

    printf("Number after swapping first and last digit: %d\n", swapped);

    return 0;
}
