/*Write a program to take two sorted arrays of size m and n as input. Merge both the arrays such that the merged array is also sorted. Print the merged array*/

#include <stdio.h>
int main()  
{
    int m, n;
    printf("Enter number of elements in first array: ");
    scanf("%d", &m);
    int arr1[m];
    printf("Enter the elements of first array in sorted order: ");
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &arr1[i]);
    }
    
    printf("Enter number of elements in second array: ");
    scanf("%d", &n);
    int arr2[n];
    printf("Enter the elements of second array in sorted order: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr2[i]);
    }
    
    int merged[m + n];
    int i = 0, j = 0, k = 0;
    
    while (i < m && j < n) 
    {
        if (arr1[i] < arr2[j]) 
        {
            merged[k++] = arr1[i++];
        } 
        else 
        {
            merged[k++] = arr2[j++];
        }
    }
    
    while (i < m) 
    {
        merged[k++] = arr1[i++];
    }
    
    while (j < n) 
    {
        merged[k++] = arr2[j++];
    }
    
    printf("Merged sorted array: ");
    for (int x = 0; x < m + n; x++) 
    {
        if (x != m + n - 1)
            printf("%d,", merged[x]);
        else
            printf("%d\n", merged[x]);
    }
    
    return 0;
}