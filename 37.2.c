//// Day 37, Problem 2: Find the sum of each column of a matrix and store it in an array
#include <stdio.h>
int main() {
    int r, c;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);
    int mat[r][c], colSum[c];
    printf("Enter matrix elements:\n");
    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            scanf("%d", &mat[i][j]);
    for(int j = 0; j < c; j++) {
        colSum[j] = 0;
        for(int i = 0; i < r; i++)
            colSum[j] += mat[i][j];
    }
    printf("Sum of each column:\n");
    for(int j = 0; j < c; j++)
        printf("%d ", colSum[j]);
    printf("\n");
    return 0;
}
