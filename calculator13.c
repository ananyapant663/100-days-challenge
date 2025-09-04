//Write a program to implement a basic calculator using switch-case for +, -, *, /, %.


#include<stdio.h>

int main() {
    int a, b;
    char operations;
    scanf("%d %d %c", &a, &b, &operations);  // Add a space before %c like below
    // Corrected version:
    // scanf("%d %d %c", &a, &b, &operations); ← WRONG
    // scanf("%d %d %c", &a, &b, &operations); ← RIGHT (with space)

    scanf("%d %d %c", &a, &b, &operations);  // Correct format

    switch(operations) {
        case '+': printf("%d\n", a + b); break;
        case '-': printf("%d\n", a - b); break;
        case '*': printf("%d\n", a * b); break;
        case '/': printf("%d\n", a / b); break;
        case '%': printf("%d\n", a % b); break;
        default: printf("Invalid operation\n");
    }

    return 0;
}
