/*Q127: Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt.

Sample Test Cases:
Input 1:
Input File (input.txt): Hello World\nC programming
Output 1:
Output File (output.txt): HELLO WORLD\nC PROGRAMMING

*/

#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *in, *out;
    int ch;

    in = fopen("C:\\Users\\panta\\OneDrive\\Desktop\\input.txt", "r");
    if (in == NULL) {
        printf("Cannot open input file!\n");
        return 1;
    }

    out = fopen("C:\\Users\\panta\\OneDrive\\Desktop\\output.txt", "w");
    if (out == NULL) {
        printf("Cannot create output file!\n");
        fclose(in);
        return 1;
    }

    
    while ((ch = fgetc(in)) != EOF) {
        ch = toupper(ch);    
        fputc(ch, out);        
    }

    printf("Converted text written to output.txt successfully.\n");

    fclose(in);
    fclose(out);

    return 0;
}
