// Write a program to find the HCF (GCD) of two numbers.

#include <stdio.h>
int main ()
{
    int a,b,temp , i;
    printf("enter two numbers");
    scanf("%d %d" , &a,&b);

    for (i=1; i<=a && i<=b;i++) 
    {
        if (a %i ==0 && b%i==0) 
        {
           temp=i;

        }
                
    }
        printf ("hcf is %d \n", temp);
        return 0;
}





