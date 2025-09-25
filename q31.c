// Write a program to take a number as input and print its equivalent binary representation.

#include <stdio.h> 

int main() {
    int num, rem, sum1 = 0, sum2 = 0, temp;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    
    while (num > 0) {
        rem = num % 2;
        sum1 = (sum1 * 10) + rem;
        num = num / 2;
    }

    
    while (sum1 > 0) {
        rem = sum1 % 10;
        sum2 = (sum2 * 10) + rem;
        sum1 = sum1 / 10;
    }

    printf("Binary of %d is: %d\n", temp, sum2);

    return 0;
}
