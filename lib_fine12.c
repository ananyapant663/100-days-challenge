/*Write a program to calculate library fine based on late days as follows:
First 5 days late: ₹2/day
Next 5 days late: ₹4/day
Next 20 days days late: ₹6/day
More than 30 days: Membership Cancelled.
*/

#include <stdio.h>
int main() {
    int a, fine;
    printf("Enter number of late days: ");
    scanf("%d", &a);

    if (a > 30) {
        printf("Membership Cancelled");
    } 
    else if (a<=5) {
        fine = a*2;
        printf("Fine rs%d", fine);
    } 
    else if (a<= 10) {
        fine =a*4;
        printf("Fine rs%d", fine);
    } 
    else {
        fine = a*6;
        printf("Fine rs%d", fine);
    }

    return 0;
}