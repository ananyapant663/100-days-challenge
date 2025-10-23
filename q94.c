/*Find the longest word in a sentence.
Input 1:
I love programming
Output 1:
programming
*/

#include <stdio.h>
#include <string.h> 
int main(){
    char str[200], word[100], longest[100];
    int i, j=0, max_len=0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    longest[0] = '\0';

    for(i=0; ; i++){
        if(str[i] != ' ' && str[i] != '\n' && str[i] != '\0'){
            word[j++] = str[i];
        } else {
            if(j > 0){
                word[j] = '\0';
                if(j > max_len){
                    max_len = j;
                    strcpy(longest, word);
                }
                j = 0;
            }
            if(str[i] == '\0' || str[i] == '\n'){
                break;
            }
        }
    }

    printf("Longest word: %s\n", longest);

    return 0;
}