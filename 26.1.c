//Write a program to print the following pattern:
    5
   45
  345
 2345
12345
#include <stdio.h>

int main() {
    int rows = 5;

    // Outer loop for each row
    for (int i = 1; i <= rows; i++) {
        // Print leading spaces
        for (int s = 1; s <= rows - i; s++) {
            printf(" ");
        }
        // Print numbers in each row
        for (int j = rows - i + 1; j <= 5; j++) {
            printf("%d", j);
        }
        printf("\n"); // Move to next row
    }

    return 0;
}
