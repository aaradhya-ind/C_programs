//
#include <stdio.h>

int main() {
    // First group of 4 stars
    for (int i = 1; i <= 4; i++) {
        printf("*\n");
    }
    printf("\n"); // Blank line between groups

    // Second group of 5 stars
    for (int i = 1; i <= 5; i++) {
        printf("*\n");
    }
    printf("\n"); // Blank line between groups

    // Third group of 3 stars
    for (int i = 1; i <= 3; i++) {
        printf("*\n");
    }
    printf("\n"); // Blank line between groups

    // Fourth group of 1 star
    printf("*\n");

    return 0;
}
