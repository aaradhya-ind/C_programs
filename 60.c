// Q110 (Logic Enhancers): Maximum element in each subarray of size k
#include <stdio.h>
int main() {
    int n, k;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter array elements:\n");
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    printf("Enter window size k: ");
    scanf("%d",&k);
    printf("Maximum elements in each window: ");
    for(int i=0;i<=n-k;i++){
        int max=arr[i];
        for(int j=i+1;j<i+k;j++)
            if(arr[j]>max) max=arr[j];
        printf("%d ", max);
    }
    printf("\n");
    return 0;
}
