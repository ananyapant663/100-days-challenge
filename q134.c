/*Q134: Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.

Sample Test Cases:
Input 1:
FAILURE
Output 1:
Operation failed

*/

#include <stdio.h>

enum status { success, failure, timeout };

int main() {
    enum status s = failure;   

    if (s == success) {
        printf("Operation successful\n");
    }
    else if (s == failure) {
        printf("Operation failed\n");
    }
    else if (s == timeout) {
        printf("Operation timed out\n");
    }

    return 0;
}
