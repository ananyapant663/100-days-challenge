/*Write a program to take an integer array arr as input. The task is to find the maximum sum of any contiguous subarray using Kadane's algorithm. Print the maximum sum as output. If all elements are negative, print the largest (least negative) element*/

#include <stdio.h>  
int main()  
{  
    int n;  
    printf("Enter number of elements: ");  
    scanf("%d", &n);  
    int arr[n];  
    printf("Enter the elements: ");  
    for (int i = 0; i < n; i++)  
    {  
        scanf("%d", &arr[i]);  
    }  
    
    int maxsum = arr[0];  
    int currentsum = arr[0];  
    
    for (int i = 1; i < n; i++)  
    {  
        if (currentsum < 0)  
        {  
            currentsum = arr[i];  
        }  
        else  
        {  
            currentsum += arr[i];  
        }  
        
        if (currentsum > maxsum)  
        {  
            maxsum = currentsum;  
        }  
    }  
    
    printf("Maximum sum of contiguous subarray: %d\n", maxsum);  
    return 0;  
}