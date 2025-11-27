/* Q142: Store details of 5 students in an array of structures and print all.

/*
Sample Test Cases:
Input 1:
Details of 5 students (Name, Roll, Marks)
Output 1:
Tabular list of all 5 students with their details

*/

#include <stdio.h>

struct student {
    char name[50];
    int roll;
    int marks;
};

int main() {
    struct student s[5];
    int i;

    
    for (i = 0; i < 5; i++) {
        scanf("%s", s[i].name);
        scanf("%d", &s[i].roll);
        scanf("%d", &s[i].marks);
    }

    
    for (i = 0; i < 5; i++) {
        printf("%s  %d  %d\n", s[i].name, s[i].roll, s[i].marks);
    }

    return 0;
}
