//Write a program to find the 1’s complement of a binary number and print it.
#include <stdio.h>
#include <string.h>

int main() {
    char binary[100];

    // Input binary number as a string
    printf("Enter a binary number: ");
    scanf("%s", binary);

    // Find length of string
    int len = strlen(binary);

    // Convert each bit to its 1's complement
    for (int i = 0; i < len; i++) {
        if (binary[i] == '0')
            binary[i] = '1';   // Flip 0 → 1
        else if (binary[i] == '1')
            binary[i] = '0';   // Flip 1 → 0
        else {
            printf("Invalid binary number.\n");
            return 0;
        }
    }

    // Print 1's complement
    printf("1's Complement: %s\n", binary);

    return 0;
}