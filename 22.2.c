//Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.
#include <stdio.h>

int main() {
    int n;
    float sum = 0.0;

    // Input the number of terms
    printf("Enter number of terms: ");
    scanf("%d", &n);

    int numerator = 1;
    int denominator = 2;

    // Calculate series sum
    for (int i = 1; i <= n; i++) {
        sum += (float)numerator / denominator;

        numerator += 2;    // Next odd number
        denominator += 2;  // Next even number
    }

    printf("Sum of the series up to %d terms = %.4f\n", n, sum);

    return 0;
}
