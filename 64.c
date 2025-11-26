// Q114 (Logic Enhancers): Length of longest substring without repeating characters
#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    printf("Enter a string: ");
    scanf(" %[^\n]", str);
    int n=strlen(str), maxLen=0;
    for(int i=0;i<n;i++){
        int visited[256]={0}, len=0;
        for(int j=i;j<n;j++){
            if(visited[(int)str[j]]) break;
            visited[(int)str[j]]=1;
            len++;
        }
        if(len>maxLen) maxLen=len;
    }
    printf("%d\n", maxLen);
    return 0;
}
