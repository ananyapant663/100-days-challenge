// Search for an element in an array using linear search.

#include <stdio.h>
int main(){
    int n,i , index=-1, a;
     printf("Enter the number of elements: ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter %d elements:",n);
    for (i = 0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to search:");
    scanf("%d",&a);

    for (i = 0;i <n; i++) {
        if (arr[i] == a) {
            index = i;
            break;
        }
    }

    if (index != -1) {
        printf("Found at index %d\n", index);
    } else {
        printf("not found\n");
    }
    
    return 0;

}