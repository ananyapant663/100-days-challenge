#include <stdio.h>

int main() {
    float a, b;
    
    
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    
    float sum = a+b;
    float diff = a-b;
    float product = a * b;
    printf("Sum = %.2f\n",sum);
    printf("Difference = %.2f\n", diff);
    printf("Product = %.2f\n", product);

    if (b != 0) {
        float quotient = a/b;
        printf("Quotient = %.2f\n", quotient);
    } else {
        printf("Division by zero should be handled carefully\n");
    }

    return 0;
}
