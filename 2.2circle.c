//write a program to calculate the area and circumference of a circle given its radius.

#include <stdio.h>

int main() {
    float radius, area, circumference;
    const float PI = 3.14159;

    // Input radius of the circle
    printf("Enter radius of the circle: ");
    scanf("%f", &radius);

    // Calculate area and circumference
    area = PI * radius * radius;
    circumference = 2 * PI * radius;

    // Output the results
    printf("Area of the circle: %.2f\n", area);
    printf("Circumference of the circle: %.2f\n", circumference);

    return 0;
}