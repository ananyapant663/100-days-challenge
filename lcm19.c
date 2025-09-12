//Write a program to find the LCM of two numbers.

#include <stdio.h>

int main() {
    int a, b, lcm;

    // Input two integers (space-separated)
    scanf("%d %d", &a, &b);

    // Set lcm to the greater of the two
    if (a > b) {
        lcm = a;
    } else {
        lcm = b;
    }

    // Find the LCM
    while (1) {
        if (lcm % a == 0 && lcm % b == 0) {
            printf("LCM = %d\n", lcm);
            break;
        }
        lcm++;
    }

    return 0;
}
