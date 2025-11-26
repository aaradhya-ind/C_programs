// Q121 (File Handling): Create info.txt, write name and age, confirm save
#include <stdio.h>
int main() {
    FILE *fp = fopen("info.txt", "w");
    if(fp == NULL){
        printf("Error opening file!\n");
        return 1;
    }
    char name[50];
    int age;
    printf("Enter your name: ");
    scanf(" %[^\n]", name);
    printf("Enter your age: ");
    scanf("%d", &age);
    fprintf(fp, "Name: %s\nAge: %d\n", name, age);
    fclose(fp);
    printf("Data successfully saved to info.txt\n");
    return 0;
}
