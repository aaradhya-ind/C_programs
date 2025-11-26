// Q86 (Strings): Check if a string is a palindrome
#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    printf("Enter a string: ");
    scanf(" %[^\n]", str);
    int len = 0;
    while(str[len] != '\0') len++;
    int flag = 1;
    for(int i=0; i<len/2; i++){
        if(str[i] != str[len-1-i]){
            flag = 0;
            break;
        }
    }
    if(flag)
        printf("String is a palindrome.\n");
    else
        printf("String is not a palindrome.\n");
    return 0;
}
