// Q104 (Logic Enhancers): Find pivot integer x for 1 to n
#include <stdio.h>
int main() {
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    int total = n*(n+1)/2;
    int pivot=-1;
    for(int x=1;x<=n;x++){
        int left = x*(x+1)/2;
        int right = total - (x-1)*x/2;
        if(left == right){
            pivot = x;
            break;
        }
    }
    printf("%d\n", pivot);
    return 0;
}
