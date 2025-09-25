// Write a program to swap the first and last digit of a number.

#include <stdio.h>
int main() 
{
    int num,temp,first,last;
    printf("Enter a number: ");
    scanf("%d",&num);   
    temp=num;
    last=num%10;     
    while(num>=10)    
    {
        num=num/10;
    }
    first=num;
    num=temp;   
    num=(num%10);
    num=num+(last*10);
    num=num+(first*(temp/10));  
    printf("Number after swapping first and last digit: %d\n",num);
    return 0;
    
} 