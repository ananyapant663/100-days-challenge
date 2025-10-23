/*heck if two strings are anagrams of each other.
Input 1:
listen
silent
Output 1:
Anagrams
Input 2:
hello
world
Output 2:
Not anagrams*/

#include <stdio.h>              
#include <string.h>
int main(){
    char str1[100], str2[100];
    int freq[26] = {0};
    int i, flag = 1;

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    for(i=0; str1[i] != '\0'; i++){
        char ch = str1[i];
        if(ch >= 'a' && ch <= 'z'){
            freq[ch - 'a']++;
        } else if(ch >= 'A' && ch <= 'Z'){
            freq[ch - 'A']++;
        }
    }

    for(i=0; str2[i] != '\0'; i++){
        char ch = str2[i];
        if(ch >= 'a' && ch <= 'z'){
            freq[ch - 'a']--;
        } else if(ch >= 'A' && ch <= 'Z'){
            freq[ch - 'A']--;
        }
    }

    for(i=0; i<26; i++){
        if(freq[i] != 0){
            flag = 0;
            break;
        }
    }

    if(flag){
        printf("Anagrams\n");
    } else {
        printf("Not anagrams\n");
    }

    return 0;
}