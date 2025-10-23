/*Change the date format from dd/04/yyyy to dd-Apr-yyyy.
Input 1:
15/04/2025
Output 1:
15-Apr-2025*/

#include <stdio.h>


int main() {
    char date[11];
    int dd, mm, yyyy;

    printf("Enter date (dd/mm/yyyy): ");
    scanf("%s", date);

    dd = (date[0]-'0')*10 + (date[1]-'0');
    mm = (date[3]-'0')*10 + (date[4]-'0');
    yyyy = (date[6]-'0')*1000 + (date[7]-'0')*100 + (date[8]-'0')*10 + (date[9]-'0');

    switch(mm) {
        case 1:  printf("%02d-Jan-%d\n", dd, yyyy); break;
        case 2:  printf("%02d-Feb-%d\n", dd, yyyy); break;
        case 3:  printf("%02d-Mar-%d\n", dd, yyyy); break;
        case 4:  printf("%02d-Apr-%d\n", dd, yyyy); break;
        case 5:  printf("%02d-May-%d\n", dd, yyyy); break;
        case 6:  printf("%02d-Jun-%d\n", dd, yyyy); break;
        case 7:  printf("%02d-Jul-%d\n", dd, yyyy); break;
        case 8:  printf("%02d-Aug-%d\n", dd, yyyy); break;
        case 9:  printf("%02d-Sep-%d\n", dd, yyyy); break;
        case 10: printf("%02d-Oct-%d\n", dd, yyyy); break;
        case 11: printf("%02d-Nov-%d\n", dd, yyyy); break;
        case 12: printf("%02d-Dec-%d\n", dd, yyyy); break;
        default: printf("Invalid month!\n");
    }

    return 0;
}
