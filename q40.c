// Write a program to find the 1’s complement of a binary number and print it.

#include <stdio.h>

int main() {
    int num, binary = 0, place = 1;
    scanf("%d", &num);

    while (num > 0) {
        int bit = num % 2;
        binary = binary + (bit * place);
        place = place * 10;
        num = num / 2;
    }

    int ones = 0;
    place = 1;

    while (binary > 0) {
        int d = binary % 10;
        if (d == 0) {
            ones = ones + (1 * place);
        }
        binary = binary / 10;
        place = place * 10;
    }

    printf("%d\n", ones);

    return 0;
}
