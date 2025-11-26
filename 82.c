// Q132 (Enum): Create an enumeration for days and print each day with its integer value
#include <stdio.h>
enum Days {SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY};
int main() {
    enum Days d;
    for(d=SUNDAY; d<=SATURDAY; d++)
        printf("Day %d\n", d);
    return 0;
}
