/*Q146: Create Employee structure with nested Date structure for joining date and print details.

/*
Sample Test Cases:
Input 1:
Employee: Raj | ID: 11 | Joining Date: 12 05 2020
Output 1:
Name: Raj | ID: 11 | Joining Date: 12/05/2020

*/

#include <stdio.h>

enum month { JAN=1, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC };

struct date {
    int day;
    enum month m;   
    int year;
};

struct employee {
    char name[50];
    int id;
    struct date join;
};

int main() {
    struct employee e;

    int month_input;

    
    scanf("%s %d %d %d %d",
          e.name,
          &e.id,
          &e.join.day,
          &month_input,
          &e.join.year);

    e.join.m = month_input;  

    printf("Name: %s | ID: %d | Joining Date: %02d/%02d/%04d\n",
           e.name,
           e.id,
           e.join.day,
           e.join.m,
           e.join.year);

    return 0;
}
