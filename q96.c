/*Reverse each word in a sentence without changing the word order.
Input 1:
I love coding
Output 1:
I evol gnidoc*/

#include <stdio.h>
#include <string.h> 
int main(){
    char str[200], word[100];
    int i, j=0, k;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    for(i=0; ; i++){
        if(str[i] != ' ' && str[i] != '\n' && str[i] != '\0'){
            word[j++] = str[i];
        } else {
            if(j > 0){
                for(k=j-1; k>=0; k--){
                    printf("%c", word[k]);
                }
                j = 0;
            }
            if(str[i] == ' '){
                printf(" ");
            } else if(str[i] == '\n' || str[i] == '\0'){
                break;
            }
        }
    }
    printf("\n");

    return 0;
}