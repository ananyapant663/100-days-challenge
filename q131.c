/*Q131: Create an enumeration for days (SUNDAY to SATURDAY) and print each day with its integer value.


Sample Test Cases:
Input 1:
No input
Output 1:
SUNDAY = 0
MONDAY = 1
TUESDAY = 2
WEDNESDAY = 3
THURSDAY = 4
FRIDAY = 5
SATURDAY = 6

*/


#include <stdio.h>

enum days { sunday, monday, tuesday, wednesday, thursday, friday, saturday };
int main() {

    printf("sunday = %d\n", sunday);
    printf("monday = %d\n", monday);
    printf("tuesday = %d\n", tuesday);
    printf("wednesday = %d\n", wednesday);
    printf("thursday = %d\n", thursday);
    printf("friday = %d\n", friday);
    printf("saturday = %d\n", saturday);

    return 0;
}
