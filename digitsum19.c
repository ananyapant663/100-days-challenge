// Write a program to find the sum of digits of a number.

#include <stdio.h>
int main()
{
    int num, sum =0;
    printf("enter a number");
    scanf("%d",&num);
    if (num<0)
    {
        num=-num;

    }
while(num!=0)
{
    sum=sum+num%10;
    num =num/10;

}
printf("sum of digit is %d",sum);
return 0;


}