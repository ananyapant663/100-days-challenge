/* Q128: Read a text file and count how many vowels and consonants are in the file. Ignore digits and special characters.

Sample Test Cases:
Input 1:
File: text.txt (Content: Welcome to C language)
Output 1:
Vowels: 8
Consonants: 10

*/

#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *f;
    int ch;
    int vowels = 0, consonants = 0;

    f = fopen("D:\\source.txt", "r");
    if (f == NULL) {
        printf("File not found!\n");
        return 1;
    }

    while ((ch = fgetc(f)) != EOF) {
        ch = tolower(ch);  
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            vowels++;
        }
        else if (ch >= 'a' && ch <= 'z') { 
            consonants++;
        }
        
    }

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    fclose(f);
    return 0;
}
