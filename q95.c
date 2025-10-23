/*Check if one string is a rotation of another.
Input 1:
abcde
deabc
Output 1:
Rotation
Input 2:
abc
acb
Output 2:
Not rotation
*/

#include <stdio.h>
#include <string.h>
int main(){
    char str1[100], str2[100], temp[200];
    int len1, len2, i;

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    len1 = 0;
    while(str1[len1] != '\0' && str1[len1] != '\n'){
        len1++;
    }

    len2 = 0;
    while(str2[len2] != '\0' && str2[len2] != '\n'){
        len2++;
    }

    if(len1 != len2){
        printf("Not rotation\n");
        return 0;
    }

    for(i=0; i<len1; i++){
        temp[i] = str1[i];
    }
    for(i=0; i<len1; i++){
        temp[len1 + i] = str1[i];
    }
    temp[2 * len1] = '\0';

    int found = 0;
    for(i=0; i<=2*len1 - len2; i++){
        int j;
        for(j=0; j<len2; j++){
            if(temp[i + j] != str2[j]){
                break;
            }
        }
        if(j == len2){
            found = 1;
            break;
        }
    }

    if(found){
        printf("Rotation\n");
    } else {
        printf("Not rotation\n");
    }

    return 0;
}