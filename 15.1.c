//Write a program to calculate the factorial of a number.
#include <stdio.h>

int main() {
    int n;
    long long factorial = 1;   // Using long long to store large results

    // Ask the user for input
    printf("Enter a number to find its factorial: ");
    scanf("%d", &n);

    // Factorial does not exist for negative numbers
    if (n < 0) {
        printf("Factorial of a negative number is not possible.\n");
    } else {
        // Loop to calculate factorial
        for (int i = 1; i <= n; i++) {
            factorial *= i;   // Multiply current result b*


        // Display the result
        printf("Factorial of %d is %lld\n", n, factorial);
    }

    return 0;   // Program ends
}