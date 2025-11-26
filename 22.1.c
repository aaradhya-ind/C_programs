//Write a program to check if a number is a strong number.

#include <stdio.h>

// Function to calculate factorial of a digit
int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int num, temp, digit, sum = 0;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num; // Store original number

    // Calculate sum of factorials of digits
    while (temp > 0) {
        digit = temp % 10;        // Extract digit
        sum += factorial(digit);  // Add factorial of digit to sum
        temp /= 10;               // Remove last digit
    }

    // Check if strong number
    if (sum == num) {
        printf("%d is a Strong Number.\n", num);
    } else {
        printf("%d is not a Strong Number.\n", num);
    }

    return 0;
}
