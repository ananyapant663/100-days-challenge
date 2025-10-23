/*
Q89 (Strings)
Count frequency of a given character in a string.
Input 1:
programming
g
Output 1:
2*/

#include <stdio.h>
int main(){
    char str[100], ch;
    int count=0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter the character to count: ");
    scanf(" %c", &ch);

    for(int i=0; str[i] != '\0'; i++){
        if(str[i] == ch){
            count++;
        }
    }

    printf("Frequency of '%c' is %d\n", ch, count);

    return 0;
}