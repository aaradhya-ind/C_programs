//write a program to convert temperature from Celsius to Fahrenheit.

#include <stdio.h>
int main() {
    int celsius, fahrenheit;

    // Input temperature in Celsius
    printf("Enter temperature in Celsius: ");
    scanf("%d", &celsius);

    // Convert Celsius to Fahrenheit
    fahrenheit = (celsius * 9/5) + 32;

    // Output the result
    printf("Temperature in Fahrenheit: %2d\n", fahrenheit);

    return 0;
}