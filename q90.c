/*Toggle case of each character in a string.
Input 1:
Hello
Output 1:
hELLO*/

#include <stdio.h>
int main(){ 
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for(int i=0; str[i] != '\0'; i++){
        if(str[i] >= 'a' && str[i] <= 'z'){
            str[i] = str[i] - ('a' - 'A');
        } else if(str[i] >= 'A' && str[i] <= 'Z'){
            str[i] = str[i] + ('a' - 'A');
        }
    }

    printf("Toggled case string: %s\n", str);

    return 0;
}