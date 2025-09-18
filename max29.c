// Find the maximum and minimum element in an array.

#include <stdio.h>
int main(){
    int i,n,sum=0;
    printf("enter the length of array");
    scanf("%d", &n);
    int arr[n];

    printf("enter elements");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max = arr[0], min = arr[0];

    for (i = 1; i < n; i++) {
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }

    printf("Max=%d, Min=%d\n", max, min);

    return 0;

}