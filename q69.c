// Find the second largest element in an array.

#include <stdio.h>
int main(){
    int i,n,arr[100],lar1,lar2;
    printf("enter the no of elements in the array");
    scanf("%d",&n);

    printf("enter &d elements",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    if(arr[0]>arr[1]){
        lar1=arr[0];
        lar2=arr[2];
    }
    else{
        lar1=arr[1];
        lar2=arr[2];
    }
    for(i=2;i<n;i++){
        if(arr[i]>lar1){
            lar2=lar1;
            lar1=arr[i];
        }

        else if(arr[i]>lar2 && arr[i]!=lar1){
            lar2=arr[i];
        }
    }
    printf("second largest is%d", lar2);
    return 0;
}
