// Q109 (Logic Enhancers): Maximum sum of all subarrays of size k
#include <stdio.h>
int main() {
    int n, k;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter array elements:\n");
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    printf("Enter subarray size k: ");
    scanf("%d",&k);
    int maxSum=0;
    for(int i=0;i<=n-k;i++){
        int sum=0;
        for(int j=i;j<i+k;j++)
            sum+=arr[j];
        if(i==0 || sum>maxSum) maxSum=sum;
    }
    printf("Maximum sum of subarrays of size %d = %d\n", k, maxSum);
    return 0;
}
