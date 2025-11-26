// Q119 (Logic Enhancers): Find the repeated element in an array
#include <stdio.h>
int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int arr[n], seen[100000]={0};
    printf("Enter array elements:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(seen[arr[i]]) {
            printf("Repeated element: %d\n", arr[i]);
            return 0;
        }
        seen[arr[i]]=1;
    }
    return 0;
}
