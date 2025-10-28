/*Write a program to take an integer array nums which contains only positive integers, and an integer target as inputs. The goal is to find two distinct indices i and j in the array such that nums[i] + nums[j] equals the target. Assume exactly one solution exists and return the indices in any order. Print the two indices separated by a space as output. If no solution exists, print "-1 -1*/

#include <stdio.h>
int main() 
{
    int n, target;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int nums[n];
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }
    printf("Enter the target integer: ");
    scanf("%d", &target);
    
    int index1 = -1, index2 = -1;
    for (int i = 0; i < n; i++) 
    {
        for (int j = i + 1; j < n; j++) 
        {
            if (nums[i] + nums[j] == target) 
            {
                index1 = i;
                index2 = j;
                break;
            }
        }
        if (index1 != -1) 
        {
            break;
        }
    }
    
    if (index1 != -1 && index2 != -1) 
    {
        printf("%d %d\n", index1, index2);
    } 
    else 
    {
        printf("-1 -1\n");
    }
    
    return 0;
}