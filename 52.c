// Q102 (Logic Enhancers): Find the ceil of x in a sorted array
#include <stdio.h>
int main() {
    int n, x;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter sorted array elements:\n");
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    printf("Enter x: ");
    scanf("%d",&x);
    int index=-1;
    for(int i=0;i<n;i++){
        if(arr[i]>=x){
            index=i;
            break;
        }
    }
    printf("%d\n", index);
    return 0;
}
