// Q112 (Logic Enhancers): Maximum sum of contiguous subarray (Kadane's Algorithm)
#include <stdio.h>
int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter array elements:\n");
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    int maxSum=arr[0], currentSum=arr[0];
    for(int i=1;i<n;i++){
        currentSum = (arr[i]>currentSum+arr[i]) ? arr[i] : currentSum+arr[i];
        if(currentSum>maxSum) maxSum=currentSum;
    }
    printf("%d\n", maxSum);
    return 0;
}
