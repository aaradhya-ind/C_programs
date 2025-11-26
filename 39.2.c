// Q78 (2D Arrays): Find the sum of main diagonal elements for a square matrix
#include <stdio.h>
int main() {
    int n, sum=0;
    printf("Enter size of square matrix: ");
    scanf("%d",&n);
    int mat[n][n];
    printf("Enter matrix elements:\n");
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++){
            scanf("%d",&mat[i][j]);
            if(i==j) sum+=mat[i][j];
        }
    printf("Sum of main diagonal elements = %d\n",sum);
    return 0;
}
