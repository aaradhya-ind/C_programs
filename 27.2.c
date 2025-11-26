//Write a program to print the following pattern:

   *
  ***
 *****
*******
 *****
  ***
   *
   
   #include <stdio.h>

int main() {
    int rows = 4;  // Number of rows in the upper half

    // Upper half of the diamond
    for (int i = 1; i <= rows; i++) {
        // Print leading spaces
        for (int s = 1; s <= rows - i; s++) {
            printf(" ");
        }
        // Print stars
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Lower half of the diamond
    for (int i = rows - 1; i >= 1; i--) {
        // Print leading spaces
        for (int s = 1; s <= rows - i; s++) {
            printf(" ");
        }
        // Print stars
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
