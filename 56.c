// Q106 (Logic Enhancers): Next greater element (brute force)
#include <stdio.h>
int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    printf("Next greater elements: ");
    for(int i=0;i<n;i++){
        int nge=-1;
        for(int j=i+1;j<n;j++){
            if(arr[j]>arr[i]){
                nge=arr[j];
                break;
            }
        }
        printf("%d", nge);
        if(i<n-1) printf(", ");
    }
    printf("\n");
    return 0;
}
