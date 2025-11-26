// Q113 (Logic Enhancers): Find kth smallest element in array
#include <stdio.h>
int main() {
    int n, k;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int arr[n], temp;
    printf("Enter array elements:\n");
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    printf("Enter k: ");
    scanf("%d",&k);
    // Simple bubble sort
    for(int i=0;i<n-1;i++)
        for(int j=0;j<n-i-1;j++)
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
    printf("%d\n", arr[k-1]);
    return 0;
}
