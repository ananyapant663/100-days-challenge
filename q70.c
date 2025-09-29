//Rotate an array to the right by k positions.

#include <stdio.h>
int main(){
    int i,n,arr[100],k,j,temp[100];
    printf("enter the no of elements in the array");
    scanf("%d",&n);

    printf("enter &d elements",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    printf("enter the no position to rotate ");
    scanf("%d",&k);

    k=k%n;
    for(i=0; i<k;i++){
        temp[i]=arr[n-k+i];
    }
    for(i=n-1; i>=k; i--){
        arr[i]=arr[i-k];
    }
    for(i=0; i<k;i++){
        arr[i]=temp[i];
    }

    printf("final array");
    for(i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    return 0;


}