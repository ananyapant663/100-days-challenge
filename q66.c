// Insert an element in a sorted array at the appropriate position.

#include <stdio.h>
int main (){
    int n,i,j , arr[100], num;
    printf("enter the no of elements in the array");
    scanf("%d",&n);
    printf("enter %dthe the elements sorted order",n);

    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    printf("enter the elements to be inserted");
    scanf("%d",&num);
    for (i=n-1;i>=0 && arr[i]>num ;i--){
        
            arr[i+1]=arr[i];

        
    }
    arr[i+1]=num;
    n++;
    printf("final array is ");
    for(i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    return 0;

}