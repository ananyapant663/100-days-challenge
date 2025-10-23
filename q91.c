/*Remove all vowels from a string.
Input 1:
education
Output 1:
dctn
*/

#include <stdio.h>
int main(){
    char str[100], result[100];
    int i, j=0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for(i=0; str[i] != '\0'; i++){
        char ch = str[i];
        if(ch != 'A' && ch != 'E' && ch != 'I' && ch != 'O' && ch != 'U' &&
           ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u'){
            result[j++] = ch;
        }
    }
    result[j] = '\0';

    printf("String after removing vowels: %s\n", result);

    return 0;
}