// Q97 (Strings): Print the initials of a name
#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    printf("Enter full name: ");
    scanf(" %[^\n]", str);
    printf("Initials: ");
    if(str[0]!=' ')
        printf("%c", str[0]);
    for(int i=0; str[i]!='\0'; i++){
        if(str[i]==' ' && str[i+1]!=' ' && str[i+1]!='\0')
            printf("%c", str[i+1]);
    }
    printf("\n");
    return 0;
}
