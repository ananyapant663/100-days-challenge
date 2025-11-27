/*  Q133: Create an enum for months and print how many days each month has.

Sample Test Cases:
Input 1:
FEB
Output 1:
28 or 29 days

*/

#include <stdio.h>

enum month { jan, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec };

int main() {
    enum month m = feb;   // change this to test any month

    if (m == jan || m == mar || m == may || m == jul || m == aug || m == oct || m == dec) {
        printf("31 days\n");
    }
    else if (m == apr || m == jun || m == sep || m == nov) {
        printf("30 days\n");
    }
    else if (m == feb) {
        printf("28 or 29 days\n");
    }

    return 0;
}
