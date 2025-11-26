/*Take two filenames from the user – a source file and a destination file. Copy all the content from the source file 
to the destination file using fgetc() and fputc().
Input 1:
Source File: source.txt (Content: Learning C File Handling)
Output 1:
File copied successfully to destination.txt
Explanation 1:
Expected File (destination.txt): Learning C File Handling*/

#include <stdio.h>
int main() {
    FILE *src, *dest;
    int ch;

    src = fopen("D:\\source.txt", "r");     
    dest = fopen("destination.txt", "w"); 

    if (src == NULL) {
        printf("Source file not found \n");
        return 1;
    }

    while ((ch = fgetc(src)) != EOF) {   
        fputc(ch, dest);                 
    }

    printf("File copied successfully!\n");

    fclose(src);
    fclose(dest);

    return 0;
}
