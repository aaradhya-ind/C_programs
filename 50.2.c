// Q100 (Strings): Print all sub-strings of a string
#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    printf("Enter a string: ");
    scanf(" %[^\n]", str);
    int len = strlen(str);
    printf("Substrings:\n");
    for(int i=0;i<len;i++){
        for(int j=i;j<len;j++){
            for(int k=i;k<=j;k++)
                printf("%c", str[k]);
            printf("\n");
        }
    }
    return 0;
}
