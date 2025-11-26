//Write a program to find the HCF (GCD) of two numbers.
#include <stdio.h>

int main() {
    int a, b, temp;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Euclidean Algorithm to find GCD
    while (b != 0) {
        temp = b;        // Store b
        b = a % b;       // Replace b with remainder
        a = temp;        // Replace a with old b
    }

    // When b becomes 0, 'a' contains the GCD
    printf("HCF (GCD) is: %d\n", a);

    return 0;
}
