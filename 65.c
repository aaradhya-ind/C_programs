// Q115 (Logic Enhancers): Check if two strings are valid anagrams
#include <stdio.h>
#include <string.h>
int main() {
    char s[100], t[100];
    printf("Enter first string: ");
    scanf(" %[^\n]", s);
    printf("Enter second string: ");
    scanf(" %[^\n]", t);
    int count[26]={0};
    for(int i=0;s[i]!='\0';i++) count[s[i]-'a']++;
    for(int i=0;t[i]!='\0';i++) count[t[i]-'a']--;
    int isAnagram=1;
    for(int i=0;i<26;i++)
        if(count[i]!=0){ isAnagram=0; break; }
    printf("%s\n", isAnagram?"Anagram":"Not Anagram");
    return 0;
}
