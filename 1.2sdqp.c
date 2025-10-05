#include <stdio.h>
 int main() {
     int a, b, sum, product, difference, quotient;

     printf("Enter first number:");
     scanf("%d", &a);

     printf("Enter second number:");
     scanf("%d", &b);

    sum = a + b;
      product = a * b;
        difference = a - b;
          quotient = a / b;
        
        printf("The sum is: %d\n", sum);
        printf("The product is: %d\n", product);
        printf("The difference is: %d\n", difference);
        printf("The quotient is: %d\n", quotient);

        return 0;
    }
  
