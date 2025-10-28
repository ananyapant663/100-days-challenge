/*Write a program to take two strings s and t as inputs (assume all characters are lowercase). The task is to determine if s and t are valid anagrams, meaning they contain the same characters with the same frequencies. Print "Anagram" if they are, otherwise "Not Anagram".*/

#include <stdio.h>
#include <string.h> 
int main() 
{
    char s[100], t[100];
    printf("Enter first string s: ");
    fgets(s, sizeof(s), stdin);
    printf("Enter second string t: ");
    fgets(t, sizeof(t), stdin);
    
    int freqS[26] = {0};
    int freqT[26] = {0};
    
    for (int i = 0; s[i] != '\0' && s[i] != '\n'; i++) 
    {
        freqS[s[i] - 'a']++;
    }
    
    for (int i = 0; t[i] != '\0' && t[i] != '\n'; i++) 
    {
        freqT[t[i] - 'a']++;
    }
    
    int isAnagram = 1;
    for (int i = 0; i < 26; i++) 
    {
        if (freqS[i] != freqT[i]) 
        {
            isAnagram = 0;
            break;
        }
    }
    
    if (isAnagram) 
    {
        printf("Anagram\n");
    } 
    else 
    {
        printf("Not Anagram\n");
    }
    
    return 0;
}