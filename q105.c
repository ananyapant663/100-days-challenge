/*Write a program to take an integer array nums of size n, and print the majority element. The majority element is the element that appears 
strictly more than ⌊n / 2⌋ times. Print -1 if no such element exists. Note: Majority Element is not necessarily the element that is present 
most number of times.*/

#include <stdio.h>
int main() 
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int nums[n];
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }
    
    int majorelement = -1;
    for (int i = 0; i < n; i++) 
    {
        int count = 0;
        for (int j = 0; j < n; j++) 
        {
            if (nums[j] == nums[i]) 
            {
                count++;
            }
        }
        
        if (count > n / 2) 
        {
            majorelement = nums[i];
            break;
        }
    }
    
    printf("%d\n", majorelement);
    return 0;
}