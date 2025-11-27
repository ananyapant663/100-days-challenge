/*
Q129: A file numbers.txt contains a list of integers separated by spaces. Read all integers, 
compute their sum and average, and print both.

Sample Test Cases:
Input 1:
File: numbers.txt (Content: 10 20 30 40 50)
Output 1:
Sum = 150
Average = 30.00

*/

#include <stdio.h>

int main() {
    FILE *f;
    int num, sum = 0, count = 0;
    float avg;

    f = fopen("d:\\number.txt", "r");
    if (f == NULL) {
        printf("File not found!\n");
        return 1;
    }

    while (fscanf(f, "%d", &num) == 1) {
        sum += num;
        count++;
    }

    fclose(f);

    if (count == 0) {
        printf("No numbers in file\n");
        return 0;
    }

    avg = (float)sum / count;

    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", avg);

    return 0;
}
