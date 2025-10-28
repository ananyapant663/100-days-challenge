/*Write a program to take an integer array arr and an integer k as inputs. The task is to find the maximum element in each subarray of size k moving from left to right. Print the maximum elements for each window separated by spaces as output.*/

#include <stdio.h>
int main() 
{
    int n, k;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the size of subarray k: ");
    scanf("%d", &k);
    
    for (int i = 0; i <= n - k; i++) 
    {
        int maxelem = arr[i];
        for (int j = 1; j < k; j++) 
        {
            if (arr[i + j] > maxelem) 
            {
                maxelem = arr[i + j];
            }
        }
        
        if (i != n - k)
            printf("%d ", maxelem);
        else
            printf("%d\n", maxelem);
    }
    
    return 0;
}