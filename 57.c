// Q107 (Logic Enhancers): Previous greater element (brute force)
#include <stdio.h>
int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    printf("Previous greater elements: ");
    for(int i=0;i<n;i++){
        int pge=-1;
        for(int j=i-1;j>=0;j--){
            if(arr[j]>arr[i]){
                pge=arr[j];
                break;
            }
        }
        printf("%d", pge);
        if(i<n-1) printf(", ");
    }
    printf("\n");
    return 0;
}
