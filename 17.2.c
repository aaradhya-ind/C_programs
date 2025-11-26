//Write a program to check if a number is prime.
#include <stdio.h>

int main() {
    int num, i, isPrime = 1;   // isPrime = 1 means we assume the number is prime

    // Input number from user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Prime numbers are greater than 1
    if (num <= 1) {
        printf("%d is not a prime number.\n", num);
        return 0;
    }

    // Check for factors from 2 to num/2
    for (i = 2; i <= num / 2; i++) {
        if (num % i == 0) {   // If divisible, not prime
            isPrime = 0;
            break;
        }
    }

    // Result
    if (isPrime == 1)
        printf("%d is a prime number.\n", num);
    else
        printf("%d is not a prime number.\n", num);

    return 0;
}
