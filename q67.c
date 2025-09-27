// Insert an element in an array at a given position.

#include <stdio.h>
int main (){
    int n, arr[100],pos,num,i;
    printf("enter the no of elements in the array ");
    scanf("%d",&n);
    printf("enter %d elements ",n);
    for (i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter the position in which you want to insert the element and the element");
    scanf("%d %d",&pos , &num);
    pos=pos-1;

    for(i=n-1; i>=pos;i--){
        arr[i+1]=arr[i];
    }
    arr[pos]=num;
    n++;

    printf("final array is :");
    for(i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    return 0;

}