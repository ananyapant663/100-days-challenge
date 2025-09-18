//Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

#include <stdio.h>

int main() {
    int choice;
    int num1, num2, result;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("Select operation:\n");
    printf("1. Addition (+)\n");
    printf("2. Subtraction (-)\n");
    printf("3. Multiplication (*)\n");
    printf("4. Division (/)\n");
    printf("5. Modulus (%%)\n");
    printf("Enter your choice (1-5): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            result = num1 + num2;
            printf("%d + %d = %d\n", num1, num2, result);
            break;

        case 2:
            result = num1 - num2;
            printf("%d - %d = %d\n", num1, num2, result);
            break;

        case 3:
            result = num1 * num2;
            printf("%d * %d = %d\n", num1, num2, result);
            break;

        case 4:
            result = num1 / num2;  
            printf("%d / %d = %d\n", num1, num2, result);
            break;

        case 5:
            result = num1 % num2;  
            printf("%d %% %d = %d\n", num1, num2, result);
            break;

        default:
            printf("Invalid choice!\n");
    }

    return 0;
}
