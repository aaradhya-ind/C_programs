//Write a program to print numbers from 1 to n.

#include <stdio.h>
 int main() 
 {
    int n, i;

    // Input the value of n
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    // Print numbers from 1 to n
    if (n > 0) {
        printf("Numbers from 1 to %d are:\n", n);
        for (i = 1; i <= n; i++) {
            printf("%d\n", i);
        }
    } else {
        printf("Please enter a positive integer greater than 0.\n");
    }

    return 0;
}