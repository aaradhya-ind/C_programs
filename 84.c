// Q134 (Enum): Months enum and print days in each month
#include <stdio.h>
enum Month {JAN=1, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC};
int main() {
    int days;
    enum Month m;
    for(m=JAN; m<=DEC; m++){
        switch(m){
            case FEB: days=28; break;
            case APR: case JUN: case SEP: case NOV: days=30; break;
            default: days=31;
        }
        printf("Month %d has %d days\n", m, days);
    }
    return 0;
}
