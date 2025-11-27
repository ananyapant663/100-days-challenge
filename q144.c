/*Q144: Write a function that accepts a structure as parameter and prints its members.

/*
Sample Test Cases:
Input 1:
Student: Neha 104 92
Output 1:
Name: Neha | Roll: 104 | Marks: 92

*/

#include <stdio.h>

struct student {
    char name[50];
    int roll;
    int marks;
};

void print_student(struct student s) {
    printf("Name: %s | Roll: %d | Marks: %d\n", s.name, s.roll, s.marks);
}

int main() {
    struct student s1;

    scanf("%s %d %d", s1.name, &s1.roll, &s1.marks);

    print_student(s1);   

    return 0;
}
