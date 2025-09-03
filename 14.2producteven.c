//write a program to print the product of even numbers from 1 to n.Write a program to print the sum of the first n odd numbers.


#include <stdio.h>
 int main() 
 {
    int n, i;
    int product = 1; // Initialize product to 1

    // Input the value of n
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    // Calculate the product of even numbers from 1 to n
    if (n >= 2) { // Ensure there is at least one even number
        for (i = 2; i <= n; i += 2) {
            product *= i;
        }
        // Display the result
        printf("The product of even numbers from 1 to %d is: %d\n", n, product);
    } else {
        printf("There are no even numbers between 1 and %d.\n", n);
    }

    return 0;
}