/*Count vowels and consonants in a string.
Input 1:
hello
Output 1:
Vowels=2, Consonants=3
*/

#include <stdio.h>
int main(){
    char str[100];
    int vowels=0, consonants=0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for(int i=0; str[i] != '\0'; i++){
        char ch = str[i];
        if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')){
            if(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U' ||
               ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    printf("Vowels=%d, Consonants=%d\n", vowels, consonants);

    return 0;
}