/*Write a Program to take a positive integer n as input, and find the pivot integer x such that the sum of all elements between 
1 and x inclusively equals the sum of all elements between x and n inclusively. Print the pivot integer x. If no such integer exists,
 print -1. Assume that it is guaranteed that there will be at most one pivot integer for the given input.
*/

#include <stdio.h>
int main() 
{
    int n;
    printf("Enter a positive integer n: ");
    scanf("%d", &n);
    
    int pivot = -1;
    for (int x = 1; x <= n; x++) 
    {
        int leftsum = 0, rightsum = 0;
        
        for (int i = 1; i <= x; i++) 
        {
            leftsum += i;
        }
        
        for (int i = x; i <= n; i++) 
        {
            rightsum += i;
        }
        
        if (leftsum == rightsum) 
        {
            pivot = x;
            break;
        }
    }
    
    printf("%d\n", pivot);
    return 0;
}