//Write a program to calculate simple and compound interest for given principal, rate, and time.


#include <stdio.h>
#include <math.h> 

int main() {
    int P, R, T;
    int SI;
    float CI;

    printf("Enter principal value: ");
    scanf("%d", &P);

    printf("Enter rate of interest: ");
    scanf("%d", &R);

    printf("Enter time period (in years): ");
    scanf("%d", &T);

    SI = (P * R * T) / 100;
    CI=P*(pow((1+(R/100.0)),T))-P;
    printf("Simple Interest is = %d\n", SI);
    printf("compound Interest is = %.2f\n", CI);

    
    return 0;
}