// Write a program to check if a number is an Armstrong number.

#include <stdio.h>
int main()
{
    int n , sum=0,rem,temp;
    printf ("enter the no");
    scanf("%d", &n);
    temp=n;
    while(n>0)
    {
        rem=n%10;
        sum =sum+(rem*rem*rem);
        n=n/10;

    }
    if (temp ==sum )
    printf("number is armstrong");
    else
    printf("number is not armstong");
    return 0;

}