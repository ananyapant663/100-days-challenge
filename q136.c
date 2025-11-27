/*Q136: Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.


Sample Test Cases:
Input 1:
ADD 10 20
Output 1:
30

*/

#include <stdio.h>

enum choice { add, subtract, multiply };

int main() {
    enum choice c = add;   
    int x = 10, y = 20;
    int result;

    switch (c) {
        case add:
            result = x + y;
            break;

        case subtract:
            result = x - y;
            break;

        case multiply:
            result = x * y;
            break;
    }

    printf("%d\n", result);

    return 0;
}


