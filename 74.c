// Q124 (File Handling): Copy content from source file to destination file
#include <stdio.h>
int main() {
    char src[50], dest[50];
    printf("Enter source filename: ");
    scanf("%s", src);
    printf("Enter destination filename: ");
    scanf("%s", dest);
    FILE *fs = fopen(src, "r");
    FILE *fd = fopen(dest, "w");
    if(fs==NULL || fd==NULL){
        printf("Error opening files!\n");
        return 1;
    }
    char ch;
    while((ch=fgetc(fs)) != EOF){
        fputc(ch, fd);
    }
    fclose(fs);
    fclose(fd);
    printf("File copied successfully.\n");
    return 0;
}
