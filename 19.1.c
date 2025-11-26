//Write a program to find the LCM of two numbers.
#include <stdio.h>

int main() {
    int a, b, num1, num2, remainder;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Store original values for later use
    num1 = a;
    num2 = b;

    // Find GCD using Euclidean algorithm
    while (num2 != 0) {
        remainder = num1 % num2;
        num1 = num2;
        num2 = remainder;
    }

    // num1 now contains GCD
    int gcd = num1;

    // Calculate LCM
    int lcm = (a * b) / gcd;

    // Print the LCM
    printf("LCM of %d and %d is: %d\n", a, b, lcm);

    return 0;
}
