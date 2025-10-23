/*Print initials of a name with the surname displayed in full.
Input 1:
John David Doe
Output 1:
J.D. Doe*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a name: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    int i = 0;
    for (i = 0; str[i] != '\0'; i++) {
        if (i == 0 && str[i] != ' ')
            printf("%c.", str[i]);
        else if (str[i] == ' ' && str[i+1] != ' ' && str[i+1] != '\0') {
            int j = i + 1, count = 0;
            while (str[j] != ' ' && str[j] != '\0')
                count++, j++;
            if (str[j] == '\0')
                printf(" %s", &str[i+1]);
            else
                printf("%c.", str[i+1]);
        }
    }
    printf("\n");
    return 0;
}
