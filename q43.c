//Write a program to check if a number is a strong number.

#include <stdio.h>
int main(){
    int num, temp, digit,sum=0,fact,i;
    printf("ebter a nubber ");
    scanf ("%d", &num);

    temp=num;
    while (temp>0){
        digit=temp%10;
        fact=1;
        for(i=1; i<=digit;i++){
            fact=fact*i;
        }

        sum=sum+fact;
        temp=temp/10;
        
    }
    if (sum==num) {
        printf("strong number \n");

    }
    else{
        printf("not a strong number \n");
    }

    return 0;
}
