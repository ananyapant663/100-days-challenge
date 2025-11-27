/* Q140: Define a struct with enum Gender and print person's gender.

/*
Sample Test Cases:
Input 1:
Gender=MALE
Output 1:
Male

*/

#include <stdio.h>

enum gender { male, female };

struct person {
    enum gender g;
};

int main() {
    struct person p;

    p.g = male;   

    if (p.g == male)
        printf("Male\n");
    else
        printf("Female\n");

    return 0;
}
