// Q91 (Strings): Remove all vowels from a string
#include <stdio.h>
int main() {
    char str[100], result[100];
    printf("Enter a string: ");
    scanf(" %[^\n]", str);
    int j = 0;
    for(int i=0; str[i]!='\0'; i++){
        char ch = str[i];
        if(!(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
             ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')){
            result[j++] = ch;
        }
    }
    result[j] = '\0';
    printf("String after removing vowels: %s\n", result);
    return 0;
}
