//write a program to swap two numbers without using a third variable.

#include <stdio.h>
 int main() {
    int num1, num2;

    // Input two numbers
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    // Swap the numbers without using a third variable
    num1 = num1 + num2; 
    num2 = num1 - num2; 
    num1 = num1 - num2;

    // Output the swapped numbers
    printf("After swapping:\n");
    printf("First number: %d\n", num1);
    printf("Second number: %d\n", num2);

    return 0;
    }