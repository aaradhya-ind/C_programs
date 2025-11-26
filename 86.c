// Q136 (Enum): Enum with explicit values starting from 10
#include <stdio.h>
enum Numbers {TEN=10, ELEVEN, TWELVE};
int main() {
    enum Numbers n;
    for(n=TEN; n<=TWELVE; n++)
        printf("%d\n", n);
    return 0;
}
