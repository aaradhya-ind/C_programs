// Q123 (File Handling): Count characters, words, and lines in a file
#include <stdio.h>
#include <ctype.h>
int main() {
    FILE *fp = fopen("info.txt", "r");
    if(fp == NULL){
        printf("Error opening file!\n");
        return 1;
    }
    char ch;
    int chars=0, words=0, lines=0, inWord=0;
    while((ch=fgetc(fp)) != EOF){
        chars++;
        if(ch==' ' || ch=='\n' || ch=='\t') inWord=0;
        else if(!inWord){ words++; inWord=1; }
        if(ch=='\n') lines++;
    }
    fclose(fp);
    printf("Characters: %d\nWords: %d\nLines: %d\n", chars, words, lines);
    return 0;
}
