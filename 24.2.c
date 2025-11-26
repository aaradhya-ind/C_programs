//Write a program to print the following pattern:
1
12
123
1234
12345

#include <stdio.h>

int main() {
    int rows = 5;  // Number of rows

    // Outer loop for rows
    for (int i = 1; i <= rows; i++) {
        // Inner loop to print numbers from 1 to current row number
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n"); // Move to next row
    }

    return 0;
}
