// Q94 (Strings): Find the longest word in a sentence
#include <stdio.h>
#include <string.h>
int main() {
    char str[200];
    printf("Enter a sentence: ");
    scanf(" %[^\n]", str);
    int maxLen=0, start=0;
    int len = strlen(str);
    for(int i=0, wordStart=0; i<=len; i++){
        if(str[i]==' ' || str[i]=='\0'){
            int wordLen = i - wordStart;
            if(wordLen > maxLen){
                maxLen = wordLen;
                start = wordStart;
            }
            wordStart = i+1;
        }
    }
    printf("Longest word: ");
    for(int i=start; i<start+maxLen; i++)
        printf("%c", str[i]);
    printf("\n");
    return 0;
}
