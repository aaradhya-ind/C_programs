// Q103 (Logic Enhancers): Find the pivot index of an array
#include <stdio.h>
int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int arr[n];
    int total=0;
    printf("Enter array elements:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        total += arr[i];
    }
    int leftSum=0, pivot=-1;
    for(int i=0;i<n;i++){
        if(leftSum == total - leftSum - arr[i]){
            pivot=i;
            break;
        }
        leftSum += arr[i];
    }
    printf("%d\n", pivot);
    return 0;
}
