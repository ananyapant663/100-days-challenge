/*Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs. 
The elements in the sorted array might be repeated. You need to print the first and last occurrence of the target and 
print the index of first and last occurrence. Print -1, -1 if the target is not present.
Input 1:
nums = [5,7,7,8,8,10], target = 8
Output 1:
3,4
Input 2:
 nums = [5,7,7,8,8,10], target = 6
Output 2:
-1,-1
Input 3:
 nums = [5,7,7,8,8,10], target = 10
Output 3:
5,5*/
#include <stdio.h>
#include <stdio.h>
int main() 
{
    int n, target;
    printf("Enter number of elements");
    scanf("%d", &n);
    int nums[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }
    printf("Enter the target integer");
    scanf("%d", &target);
    int count=0,index=-1,index2=-1;;
    for (int i = 0; i < n; i++) 
    {
        if (nums[i] == target)
         {
            if(index==-1)  
            index=i;
        index2=i;
         }
    }
    printf("%d,%d", index,index2);
    return 0;
}