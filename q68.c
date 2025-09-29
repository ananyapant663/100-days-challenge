// Delete an element from an array.

#include <stdio.h>
int main(){
    int i,n,arr[100],pos;
    printf("enter the no of elements in the array");
    scanf("%d",&n);

    printf("enter &d elements",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter position of element to delete");
    scanf("%d",&pos);

    if(pos>=1&& pos<=n){
        for(i=pos-1;i<n-1;i++){
            arr[i]=arr[i+1];
        }
        n--;
    }
    else{
        printf("invalid");
        return 0;
    }
    printf("final array");
    for(i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    return 0;

}