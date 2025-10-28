/*Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.*/

#include <stdio.h>
#include <string.h>
int main() 
{
    char s[100];
    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);
    
    int maxlen = 0;
    int len = strlen(s);
    
    for (int i = 0; i < len; i++) 
    {
        int visited[256] = {0};
        int currlen = 0;
        
        for (int j = i; j < len; j++) 
        {
            if (s[j] == '\n') 
            {
                break;
            }
            if (visited[( char)s[j]] == 1) 
            {
                break;
            }
            visited[(char)s[j]] = 1;
            currlen++;
        }
        
        if (currlen > maxlen) 
        {
            maxlen = currlen;
        }
    }
    
    printf("Length of the longest substring without repeating characters: %d\n", maxlen);
    return 0;
}