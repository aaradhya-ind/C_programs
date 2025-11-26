// Q126 (File Handling): Check if file exists and display content
#include <stdio.h>
int main() {
    char filename[50];
    printf("Enter filename: ");
    scanf("%s", filename);
    FILE *fp = fopen(filename, "r");
    if(fp == NULL){
        printf("File does not exist.\n");
        return 1;
    }
    char ch;
    while((ch=fgetc(fp)) != EOF)
        putchar(ch);
    fclose(fp);
    return 0;
}
