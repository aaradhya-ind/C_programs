// Q120 (File Handling): Convert string to sentence case
#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main() {
    char str[200];
    printf("Enter a string: ");
    scanf(" %[^\n]", str);
    int n=strlen(str);
    for(int i=0;i<n;i++){
        if(i==0 && str[i]>='a' && str[i]<='z') str[i]-='a'-'A';
        else if(str[i-1]=='.' && str[i]==' ') continue;
        else if(str[i-2]=='.' && str[i-1]==' ' && str[i]>='a' && str[i]<='z') str[i]-='a'-'A';
        else str[i]=tolower(str[i]);
    }
    printf("Sentence case: %s\n", str);
    return 0;
}
