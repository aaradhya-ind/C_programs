// Q116 (Logic Enhancers): Find two indices whose sum equals target
#include <stdio.h>
int main() {
    int n, target;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter array elements:\n");
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    printf("Enter target: ");
    scanf("%d",&target);
    int found=0;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==target){
                printf("%d %d\n", i, j);
                found=1;
                break;
            }
        }
        if(found) break;
    }
    if(!found) printf("-1 -1\n");
    return 0;
}
