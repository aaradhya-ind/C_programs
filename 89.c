// Q139 (Enum): Print all enum names and integer values
#include <stdio.h>
enum Color {RED, GREEN, BLUE};
int main() {
    enum Color c;
    for(c=RED; c<=BLUE; c++)
        printf("Enum value: %d\n", c);
    return 0;
}
