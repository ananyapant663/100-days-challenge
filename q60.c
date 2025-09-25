// Count positive, negative, and zero elements in an array.

#include <stdio.h>
int main() 
{
    int n, i, pos= 0, neg =0, zero =0;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for(i=0; i<n;i++) 
    {
        scanf("%d", &arr[i]);
    }

    for(i=0; i<n;i++) 
    {
        if(arr[i]>0)
            pos++;
        else if(arr[i]<0)
            neg++;
        else
            zero++;
    }

    printf("Total positive numbers: %d\n", pos);
    printf("Total negative numbers: %d\n", neg);
    printf("Total zeros: %d\n", zero);

    return 0;
}
