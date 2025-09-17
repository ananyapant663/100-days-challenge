// Write a program to print all the prime numbers from 1 to n.

#include <stdio.h>
int main(){
    int num1,i,j,prime;
    printf("enter a number");
    scanf("%d",&num1);

    for (i=2; i<=num1;i++){
        prime=1;
        for (j=2;j<i;j++){
            if(i%j==0){
                prime=0;
                break;
            }
        }
        if (prime==1){
            printf("%d ",i);

        }
    }
    return 0;
}