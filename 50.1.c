// Q99 (Strings): Change the date format from dd/04/yyyy to dd-Apr-yyyy
#include <stdio.h>
#include <string.h>
int main() {
    char date[20];
    printf("Enter date in dd/04/yyyy format: ");
    scanf("%s", date);
    char newDate[20];
    int j=0;
    for(int i=0; date[i]!='\0'; i++){
        if(date[i]=='/'){
            newDate[j++]='-';
            if(date[i+1]=='0' && date[i+2]=='4'){
                newDate[j++]='A';
                newDate[j++]='p';
                newDate[j++]='r';
                i+=2;
            }
        } else
            newDate[j++] = date[i];
    }
    newDate[j]='\0';
    printf("Formatted date: %s\n", newDate);
    return 0;
}
