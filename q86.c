/*Check if a string is a palindrome.
Input 1:
madam
Output 1:
Palindrome
Input 2:
hello
Output 2:
Not palindrome*/

#include <stdio.h>
#include <string.h>
int main(){
    char str[100];
    int len, flag=1;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    len = 0;
    while(str[len] != '\0'){
        len++;
    }
    len--;

    for(int i=0; i<len/2; i++){
        if(str[i] != str[len-i-1]){
            flag = 0;
            break;
        }
    }

    if(flag){
        printf("Palindrome\n");
    } else {
        printf("Not palindrome\n");
    }

    return 0;
}