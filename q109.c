/*Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.*/

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
    
    int maxsum = 0;
    for (int i = 0; i <= n - k; i++) 
    {
        int currentsum = 0;
        for (int j = 0; j < k; j++) 
        {
            currentsum += arr[i + j];
        }
        
        if (currentsum > maxsum || i == 0) 
        {
            maxsum = currentsum;
        }
    }
    
    printf("Maximum sum of all subarrays of size %d: %d\n", k, maxsum);
    return 0;
}