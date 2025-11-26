// Q118 (Logic Enhancers): Find the missing number in array of size n
#include <stdio.h>
int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int arr[n-1], totalSum=n*(n-1)/2, sum=0;
    printf("Enter array elements:\n");
    for(int i=0;i<n-1;i++){
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    printf("Missing number: %d\n", totalSum-sum);
    return 0;
}
