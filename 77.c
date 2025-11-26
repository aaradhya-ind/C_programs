// Q127 (File Handling): Convert lowercase letters to uppercase from input.txt to output.txt
#include <stdio.h>
#include <ctype.h>
int main() {
    FILE *fin = fopen("input.txt", "r");
    FILE *fout = fopen("output.txt", "w");
    if(fin==NULL || fout==NULL){
        printf("Error opening files!\n");
        return 1;
    }
    char ch;
    while((ch=fgetc(fin)) != EOF){
        fputc(toupper(ch), fout);
    }
    fclose(fin);
    fclose(fout);
    printf("Converted text written to output.txt\n");
    return 0;
}
