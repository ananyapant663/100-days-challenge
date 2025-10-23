/*Find the first repeating lowercase alphabet in a string.
Input 1:
stress
Output 1:
s*/

#include <stdio.h>
int main(){
    char str[100];
    int freq[26] = {0};
    char first_repeating = '\0';

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for(int i=0; str[i] != '\0'; i++){
        char ch = str[i];
        if(ch >= 'a' && ch <= 'z'){
            freq[ch - 'a']++;
            if(freq[ch - 'a'] == 2 && first_repeating == '\0'){
                first_repeating = ch;
            }
        }
    }

    if(first_repeating != '\0'){
        printf("First repeating lowercase alphabet: %c\n", first_repeating);
    } else {
        printf("No repeating lowercase alphabet found.\n");
    }

    return 0;
}