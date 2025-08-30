//write a program to calculate the sum of first N natural numbers.

#include <stdio.h>
 int main()
    {
        int n, sum;
    
        // Input a positive integer N
        printf("Enter a positive integer: ");
        scanf("%d", &n);
    
        // Calculate the sum of first N natural numbers using the formula
        sum = n * (n + 1) / 2;
    
        // Output the result
        printf("Sum of first %d natural numbers: %d\n", n, sum);
    
        return 0;
    }
