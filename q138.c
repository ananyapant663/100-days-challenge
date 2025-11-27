/*Q138: Print all enum names and integer values using a loop.

/*
Sample Test Cases:
Input 1:
No input
Output 1:
RED=0
YELLOW=1
GREEN=2

*/ 

#include <stdio.h>

enum color { red, yellow, green };

int main() {
    enum color c;
    char *names[] = { "red", "yellow", "green" };

    for (c = red; c <= green; c++) {
        printf("%s = %d\n", names[c], c);
    }

    return 0;
}
