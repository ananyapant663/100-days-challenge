// Find the digit that occurs the most times in an integer number.

#include <stdio.h>
int main(){
    int num, i , digit, max=0,total=0;
    int freq[10];
    printf("enter the interger");
    scanf("%d",&num);

    while(num>0){
        digit=num%10;
        freq[digit]++;
        num=num/10;
    }
    for (i=0;i<10;i++){
        if (freq[i]>max){
            max=freq[i];
            total=i;
        }
    }
    printf("digit that occurs the most times %d \n",total);
    return 0;

}
