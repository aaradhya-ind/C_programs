//Write a program to take a number as input and print its equivalent binary representation.
#include <stdio.h>

int main() {
    int num, binary[32], index = 0;

    // Input number from user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Special case for zero
    if (num == 0) {
        printf("Binary: 0\n");
        return 0;
    }

    // Convert decimal to binary
    while (num > 0) {
        binary[index] = num % 2;   // Store remainder (0 or 1)
        num = num / 2;             // Divide number by 2
        index++;
    }

    // Print binary in reverse (because we stored LSB first)
    printf("Binary: ");
    for (int i = index - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }
    printf("\n");

    return 0;
}
