/*Print the initials of a name.
Input 1:
John Doe
Output 1:
J.D.*/

#include <stdio.h>
int main(){
    char str[100];
    printf("Enter a name: ");
    fgets(str, sizeof(str), stdin);

    int i = 0;
    if(str[i] != ' ' && str[i] != '\n' && str[i] != '\0'){
        printf("%c.", str[i]);
    }

    for(i = 0; str[i] != '\0'; i++){
        if(str[i] == ' '){
            if(str[i+1] != ' ' && str[i+1] != '\n' && str[i+1] != '\0'){
                printf("%c.", str[i+1]);
            }
        }
    }

    printf("\n");
    return 0;
}