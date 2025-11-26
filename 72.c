// Q122 (File Handling): Read contents of info.txt using fgets()
#include <stdio.h>
int main() {
    FILE *fp = fopen("info.txt", "r");
    if(fp == NULL){
        printf("Error opening file!\n");
        return 1;
    }
    char line[100];
    while(fgets(line, sizeof(line), fp) != NULL){
        printf("%s", line);
    }
    fclose(fp);
    return 0;
}
