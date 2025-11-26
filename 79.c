// Q129 (File Handling): Sum and average of integers in numbers.txt
#include <stdio.h>
int main() {
    FILE *fp = fopen("numbers.txt", "r");
    if(fp == NULL){
        printf("Error opening file!\n");
        return 1;
    }
    int num, sum=0, count=0;
    while(fscanf(fp, "%d", &num) == 1){
        sum += num;
        count++;
    }
    fclose(fp);
    if(count>0)
        printf("Sum = %d, Average = %.2f\n", sum, (float)sum/count);
    else
        printf("No numbers found.\n");
    return 0;
}
