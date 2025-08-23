//Write a program to calculate the area and circumference of a circle given its radius.



#include <stdio.h>
#define PI 3.1416

int main() {
    float radius, area, circumference;

 
    scanf("%f", &radius);
    area = PI * radius * radius;
    circumference = 2 * PI * radius;
    printf("Area=%.2f, Circumference=%.2f\n", area, circumference);

    return 0;
}
