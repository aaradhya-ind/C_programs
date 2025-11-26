// Q77 (2D Arrays): Check if the elements on the diagonal of a matrix are distinct
#include <stdio.h>
int main() {
    int n, distinct=1;
    printf("Enter size of square matrix: ");
    scanf("%d",&n);
    int mat[n][n];
    printf("Enter matrix elements:\n");
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            scanf("%d",&mat[i][j]);
    for(int i=0;i<n;i++)
        for(int j=i+1;j<n;j++)
            if(mat[i][i]==mat[j][j])
                distinct=0;
    if(distinct)
        printf("Diagonal elements are distinct.\n");
    else
        printf("Diagonal elements are not distinct.\n");
    return 0;
}
