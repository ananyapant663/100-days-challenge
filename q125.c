/*Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without 
overwriting existing content.
Input 1:
Existing File: data.txt (Content before execution: Hello world)
User Input: This is appended text.
Output 1:
File updated successfully with appended text.
Explanation 1:
Output File (data.txt after execution): Hello world\nThis is appended text.*/

#include <stdio.h>

int main() {
    FILE *f;
    char text[100];

    f = fopen("D:\\source.txt", "a");
    if (f == NULL) {
        printf("File not found!\n");
        return 1;
    }

    printf("Enter text to append: ");
    fflush(stdin);              // CLEAR INPUT BUFFER

    fgets(text, sizeof(text), stdin);

    fputs(text, f);

    printf("File updated successfully with appended text.\n");

    fclose(f);
    return 0;
}
