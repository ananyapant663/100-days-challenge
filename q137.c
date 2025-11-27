/*Q137: Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.

/*
Sample Test Cases:
Input 1:
GUEST
Output 1:
Welcome Guest!

*/

#include <stdio.h>
#include <string.h>

enum role { ADMIN, USER, GUEST };

int main() {
    char input[20];
    enum role r;

    scanf("%s", input);

    if (strcmp(input, "ADMIN") == 0)
        r = ADMIN;
    else if (strcmp(input, "USER") == 0)
        r = USER;
    else
        r = GUEST;

    if (r == ADMIN)
        printf("Welcome Admin!\n");
    else if (r == USER)
        printf("Welcome User!\n");
    else
        printf("Welcome Guest!\n");

    return 0;
}

