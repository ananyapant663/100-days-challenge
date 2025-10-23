/*Reverse a string.
Input 1:
abcd
Output 1:
dcba*/

#include <stdio.h>
#include <string.h> 
int main(){
    char str[100], rev[100];
    int len, i, j=0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    len = 0;
    while(str[len] != '\0'){
        len++;
    }
    len--;

    for(i=len-1; i>=0; i--){
        rev[j++] = str[i];
    }
    rev[j] = '\0';

    printf("Reversed string: %s\n", rev);

    return 0;
}