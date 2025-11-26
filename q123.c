/*Read a text file and count the total number of characters, words, and lines. A word is defined as a sequence of non-space characters
 separated by spaces or newlines.
Input 1:
File: sample.txt (Content: Hello world\nThis is C programming)
Output 1:
Characters: 31
Words: 5
Lines: 2
Explanation 1:
The file has 31 characters including spaces and newlines, 5 words, and 2 lines.*/

#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp;
    char ch;
    int characters = 0, words = 0, lines = 0;
    int inWord = 0;

    fp = fopen("info.txt", "r");   

    if (fp == NULL) {
        printf("Error! File not found.\n");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        characters++;               
        if (ch == '\n') {
            lines++;              
        }

        if (!isspace(ch) && inWord == 0) {
            inWord = 1;             
            words++;
        } 
        else if (isspace(ch)) {
            inWord = 0;           
        }
    }

    fclose(fp);

    if (characters > 0) {
        lines++;
    }

    printf("Characters: %d\n", characters);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);

    return 0;
}
