//Find the digit that occurs the most times in an integer number.
#include <stdio.h>

int main() {
    long num;
    int count[10] = {0}; // Array to store frequency of digits 0-9

    // Input number
    printf("Enter an integer number: ");
    scanf("%ld", &num);

    // Make number positive if negative
    if (num < 0) {
        num = -num;
    }

    // Count frequency of each digit
    while (num > 0) {
        int digit = num % 10;
        count[digit]++;
        num /= 10;
    }

    // Find the digit with maximum frequency
    int maxFreq = count[0];
    int maxDigit = 0;
    for (int i = 1; i < 10; i++) {
        if (count[i] > maxFreq) {
            maxFreq = count[i];
            maxDigit = i;
        }
    }

    printf("The digit that occurs most frequently is %d (occurs %d times).\n", maxDigit, maxFreq);

    return 0;
}
