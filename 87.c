// Q137 (Enum): Menu choices enum and switch operation
#include <stdio.h>
enum Menu {ADD, SUBTRACT, MULTIPLY};
int main() {
    enum Menu choice;
    int a=5, b=3;
    for(choice=ADD; choice<=MULTIPLY; choice++){
        switch(choice){
            case ADD: printf("Addition: %d\n", a+b); break;
            case SUBTRACT: printf("Subtraction: %d\n", a-b); break;
            case MULTIPLY: printf("Multiplication: %d\n", a*b); break;
        }
    }
    return 0;
}
