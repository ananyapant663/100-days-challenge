/* Q147: Store employee data in a binary file using fwrite() and read using fread().

/*
Sample Test Cases:
Input 1:
Employee details entered and stored in file.
Output 1:
Displays employee data read from file.

*/

#include <stdio.h>

struct Employee {
    char name[50];
    int id;
    float salary;
};

int main() {
    struct Employee e;
    FILE *fp;

    fp = fopen("employee.dat", "wb");
    if (fp == NULL) {
        printf("File cannot be opened!\n");
        return 1;
    }

    printf("Enter Employee Name: ");
    scanf("%s", e.name);

    printf("Enter Employee ID: ");
    scanf("%d", &e.id);

    printf("Enter Employee Salary: ");
    scanf("%f", &e.salary);

    fwrite(&e, sizeof(e), 1, fp);
    fclose(fp);

    printf("\nEmployee details stored in file successfully.\n\n");

    fp = fopen("employee.dat", "rb");
    if (fp == NULL) {
        printf("File cannot be opened!\n");
        return 1;
    }

    fread(&e, sizeof(e), 1, fp);
    fclose(fp);

    printf("----- Employee Details Read from File -----\n");
    printf("Name   : %s\n", e.name);
    printf("ID     : %d\n", e.id);
    printf("Salary : %.2f\n", e.salary);

    return 0;
}
