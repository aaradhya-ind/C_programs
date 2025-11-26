// Q108 (Logic Enhancers): Product of array except self
#include <stdio.h>
int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int arr[n], answer[n];
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    for(int i=0;i<n;i++){
        int prod=1;
        for(int j=0;j<n;j++){
            if(i!=j) prod*=arr[j];
        }
        answer[i]=prod;
    }
    printf("Product array: ");
    for(int i=0;i<n;i++){
        printf("%d", answer[i]);
        if(i<n-1) printf(", ");
    }
    printf("\n");
    return 0;
}
