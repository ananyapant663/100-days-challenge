//Write a program to swap two numbers using a third variable.

#include <stdio.h>

int main() {
    int a, b, swap;

    scanf("%d %d", &a, &b);
    swap = a;
    a = b;
    b = swap;
    printf("After swap: %d %d\n", a, b);
    return 0;
}
