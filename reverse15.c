// Write a program to reverse a given number.

 #include <stdio.h>
 int main ()
 {
    int n,rem,sum =0,temp;
    printf ("enter the number");
    scanf ("%d" ,&n);
    temp=n;
    while(n>0){
        rem=n%10;
        sum=(sum*10) + rem;
        n=n/10;
    }

    printf("Reversed number is: %d\n", sum);


}