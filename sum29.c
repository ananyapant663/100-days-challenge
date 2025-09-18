// Find the sum of array elements.

#include <stdio.h>
int main(){
    int i,n,sum=0;
    printf("enter the length of array");
    scanf("%d", &n);
    int arr[n];

    printf("enter elements");
    for(i=0 ; i<n ; i++){
        scanf("%d", &arr[i]);
        sum=sum+arr[i];
    }
    printf("sum is %d\n",sum);
    return 0;
}