// Day 37, Problem 1: Find the sum of each row of a matrix and store it in an array
#include <stdio.h>
int main() {
    int r, c;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);
    int mat[r][c], rowSum[r];
    printf("Enter matrix elements:\n");
    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            scanf("%d", &mat[i][j]);
    for(int i = 0; i < r; i++) {
        rowSum[i] = 0;
        for(int j = 0; j < c; j++)
            rowSum[i] += mat[i][j];
    }
    printf("Sum of each row:\n");
    for(int i = 0; i < r; i++)
        printf("%d ", rowSum[i]);
    printf("\n");
    return 0;
}