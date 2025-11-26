// Q95 (Strings): Check if one string is a rotation of another
#include <stdio.h>
#include <string.h>
int main() {
    char str1[100], str2[100], temp[200];
    printf("Enter first string: ");
    scanf(" %[^\n]", str1);
    printf("Enter second string: ");
    scanf(" %[^\n]", str2);
    if(strlen(str1) != strlen(str2)){
        printf("Not a rotation.\n");
        return 0;
    }
    strcpy(temp, str1);
    strcat(temp, str1);
    if(strstr(temp, str2) != NULL)
        printf("String 2 is a rotation of String 1.\n");
    else
        printf("String 2 is not a rotation of String 1.\n");
    return 0;
}
