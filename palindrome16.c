// Write a program to check if a number is a palindrome.

#include <stdio.h>

int main () {
    int n, rem, sum = 0, temp;

    printf("Enter the number: ");
    scanf("%d", &n);

    temp = n;

    while (n > 0) {
        rem=n % 10;
        sum =(sum *10) + rem;
        n = n / 10;
    }

    printf("Reversed number is: %d\n", sum);

    if (temp==sum) {
        printf("%d is a palindrome.\n", temp);
    } else {
        printf("%d is not a palindrome.\n", temp);
    }

    return 0;
}
