/* Write a program to calculate electricity bill based on units consumed with these rates:
First 100 units at ₹5/unit
Next 100 units at ₹7/unit
Next 100 units at ₹10/unit
Above at ₹12/unit
*/


#include <stdio.h>
int main(){
    int a,b;
    printf("Enter number of units consumed: ");
    scanf("%d",&a);
    if(a<=100){
        b=a*5;
        printf("Bill: rs %d\n",b);
    }
    else if(a<=200){
        b=a*7;
        printf("Bill: rs %d\n",b);
    }
    else if(a<=300){
        b=a*10;
        printf("Bill: rs %d\n",b);
    }
    else{
        b=a*12;
        printf("Bill: rs %d\n",b)
    }
    return 0;
}

