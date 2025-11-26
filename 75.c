// Q125 (File Handling): Append a new line to existing file
#include <stdio.h>
int main() {
    FILE *fp = fopen("info.txt", "a");
    if(fp == NULL){
        printf("Error opening file!\n");
        return 1;
    }
    char line[100];
    printf("Enter text to append: ");
    scanf(" %[^\n]", line);
    fprintf(fp, "%s\n", line);
    fclose(fp);
    printf("Text appended successfully.\n");
    return 0;
}
