// Q140 (Enum): Show that enums store integers by printing values
#include <stdio.h>
enum Level {LOW=1, MEDIUM, HIGH};
int main() {
    enum Level l;
    for(l=LOW; l<=HIGH; l++)
        printf("Level %d\n", l);
    return 0;
}
