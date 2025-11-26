// Q98 (Strings): Print initials of a name with the surname displayed in full
#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    printf("Enter full name: ");
    scanf(" %[^\n]", str);
    int lastSpace=-1;
    for(int i=0; str[i]!='\0'; i++){
        if(str[i]==' ')
            lastSpace = i;
    }
    printf("Formatted name: ");
    // print initials of first and middle names
    for(int i=0; i<=lastSpace; i++){
        if(i==0 || (str[i-1]==' ' && str[i]!=' '))
            printf("%c.", str[i]);
    }
    // print surname
    for(int i=lastSpace+1; str[i]!='\0'; i++)
        printf("%c", str[i]);
    printf("\n");
    return 0;
}
