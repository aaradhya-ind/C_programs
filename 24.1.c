//*
**
***
****
*****

#include <stdio.h>

int main() {
    int rows = 5;  // Number of rows

    // Outer loop for rows
    for (int i = 1; i <= rows; i++) {
        // Inner loop to print stars
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n"); // Move to next row
    }

    return 0;
}
