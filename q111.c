/*Write a program to take an integer array arr and an integer k as inputs. The task is to find the first negative integer in each subarray of size k moving from left to right. If no negative exists in a window, print "0" for that window. Print the results separated by spaces as output*/

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
        int firstneg = 0;
        for (int j = 0; j < k; j++) 
        {
            if (arr[i + j] < 0) 
            {
                firstneg = arr[i + j];
                break;
            }
        }
        
        if (i != n - k)
            printf("%d ", firstneg);
        else
            printf("%d\n", firstneg);
    }
    
    return 0;
}