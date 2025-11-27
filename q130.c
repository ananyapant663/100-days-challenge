/*Q130: Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and 
display each record.


Sample Test Cases:
Input 1:
Student 1 → Name: Asha, Roll: 101, Marks: 85; Student 2 → Name: Ravi, Roll: 102, Marks: 92
Output 1:
Name: Asha | Roll: 101 | Marks: 85
Name: Ravi | Roll: 102 | Marks: 92

*/

#include <stdio.h>

int main() {
    FILE *f;
    char name[50];
    int roll, marks;

   
    f = fopen("students.txt", "w");
    if (f == NULL) {
        printf("File not created!\n");
        return 1;
    }

    
    fprintf(f, "Asha 101 85\n");

   
    fprintf(f, "Ravi 102 92\n");

    fclose(f);


    f = fopen("students.txt", "r");
    if (f == NULL) {
        printf("File not found!\n");
        return 1;
    }

    printf("Student Records:\n");
F
    while (fscanf(f, "%s %d %d", name, &roll, &marks) == 3) {
        printf("Name: %s | Roll: %d | Marks: %d\n", name, roll, marks);
    }

    fclose(f);
    return 0;
}
