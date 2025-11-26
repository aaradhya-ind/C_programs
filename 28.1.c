//Write a program to print all the prime numbers from 1 to n.
#include <stdio.h>

int main() {
    int n;

    // Input upper limit
    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Prime numbers from 1 to %d are:\n", n);

    // Loop through numbers from 2 to n
    for (int i = 2; i <= n; i++) {
        int isPrime = 1; // Assume number is prime

        // Check divisibility from 2 to sqrt(i)
        for (int j = 2; j
