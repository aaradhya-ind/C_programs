//
#include <stdio.h>

int main() {
    int rows = 5;

    // Outer loop for each row
    for (int i = 1; i <= rows; i++) {
        // Print leading spaces
        for (int j = 1; j < i; j++) {
            printf(" ");
        }
        // Print stars
        for (int k = 1; k <= rows - i + 1; k++) {
            printf("*");
        }
        printf("\n"); // Move to next row
    }

    return 0;
}
