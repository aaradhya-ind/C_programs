//Write a program to print the following pattern:
*****
*****
*****
*****
*****

#include <stdio.h>

int main() {
    int rows = 5;  // Number of rows
    int cols = 5;  // Number of columns

    // Outer loop for rows
    for (int i = 1; i <= rows; i++) {
        // Inner loop for columns
        for (int j = 1; j <= cols; j++) {
            printf("*");
        }
        printf("\n"); // Move to next row
    }

    return 0;
}
