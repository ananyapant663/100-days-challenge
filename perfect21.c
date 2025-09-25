// Write a program to check if a number is a perfect number.
#include <stdio.h>
int main(){
    int num, i ,sum=0;
    printf("Enter a number: ");
    scanf("%d",&num);
    for (i=1; i<=num/2 ; i++){
        if (num%i==0){
            sum=sum+i;
        }
    }

    if(sum==num){
        printf("perfect no\n");
    }
    else{
        printf("not perfect number");
    }
    return 0;
    


}